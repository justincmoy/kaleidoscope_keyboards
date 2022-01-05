#!/bin/bash

SCRIPT_DIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

if [ "$#" -ne 1 ]; then
	echo "Usage: `basename $0` <keyboard>"
	exit 1
fi

if [ ! -d "$SCRIPT_DIR/qmk/$1" ]; then
	echo "qmk directory $1 not found."
	exit 1
fi

rm -r "$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy"
mkdir "$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy"
cp -r "$SCRIPT_DIR/qmk/common" "$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy"
cp -r $SCRIPT_DIR/qmk/$1/* "$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy"
rsync -r "$SCRIPT_DIR/../artsey-qmk" "$SCRIPT_DIR/../qmk_firmware/keyboards/$1/keymaps/justincmoy" --exclude ".git"
qmk flash -kb "$1" -km "justincmoy"
