set -e

SCRIPT_DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

if [ "$1" = 'crkbd' ]; then
    mkdir -p qmk/$1
    mustache values.yaml $1.mustache > qmk/$1/keymap.c

    docker build -q -t qmk/docker $SCRIPT_DIR/qmk
    KEYMAP_DIR="/qmk_firmware/keyboards/$1/keymaps/justincmoy"
    docker run --rm -v $SCRIPT_DIR/qmk:/keymaps_qmk: qmk/docker /bin/sh -c "mkdir $KEYMAP_DIR && cp /keymaps_qmk/common/config.h $KEYMAP_DIR/ && cp /keymaps_qmk/$1/keymap.c $KEYMAP_DIR/ && qmk compile -c -kb $1 -km justincmoy"
    exit
fi

mustache values.yaml $1.mustache > kaleidoscope/$1/$1.ino

docker build -q -t kaleidoscope/docker $SCRIPT_DIR/../kaleidoscope/etc
docker run --rm -v $SCRIPT_DIR/../kaleidoscope:/kaleidoscope: -v $SCRIPT_DIR:/keymaps: --env ARDUINO_DIRECTORIES_DATA=/arduino-cli/data --env ARDUINO_DIRECTORIES_USER=/kaleidoscope/.arduino/user/ --env _NO_SYNC_KALEIDOSCOPE=1 --env KALEIDOSCOPE_DIR=/kaleidoscope kaleidoscope/docker "cp /keymaps/kaleidoscope/Makefile /keymaps/kaleidoscope/$1/ && make --directory /keymaps/kaleidoscope/$1 compile"
