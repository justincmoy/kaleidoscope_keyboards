set -e

SCRIPT_DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

mustache values.yaml $1.mustache > kaleidoscope/$1/$1.ino

docker build -q -t kaleidoscope/docker $SCRIPT_DIR/../kaleidoscope/etc
docker run --rm -v $SCRIPT_DIR/../kaleidoscope:/kaleidoscope: -v $SCRIPT_DIR:/keymaps: --env ARDUINO_DIRECTORIES_DATA=/arduino-cli/data --env ARDUINO_DIRECTORIES_USER=/kaleidoscope/.arduino/user/ --env _NO_SYNC_KALEIDOSCOPE=1 --env KALEIDOSCOPE_DIR=/kaleidoscope kaleidoscope/docker make --directory /keymaps/kaleidoscope/$1 compile
