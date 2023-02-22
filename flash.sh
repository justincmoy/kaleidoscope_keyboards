set -e

SCRIPT_DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

mustache values.yaml $1.mustache > kaleidoscope/$1/$1.ino
cp kaleidoscope/Makefile kaleidoscope/$1/

set +e

pushd kaleidoscope/$1

KALEIDOSCOPE_DIR=$SCRIPT_DIR/../kaleidoscope make flash

popd
