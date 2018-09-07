#!/bin/bash
MONERO_URL=git@github.com:electronero/electronero.git
MONERO_BRANCH=release

pushd $(pwd)
ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

source $ROOT_DIR/utils.sh

INSTALL_DIR=$ROOT_DIR/wallet
MONERO_DIR=$ROOT_DIR/electronero
BUILD_LIBWALLET=false

# init and update electronero submodule
if [ ! -d $MONERO_DIR/src ]; then
    git submodule init electronero
fi
git submodule update --remote
git -C $MONERO_DIR fetch
git -C $MONERO_DIR checkout boost-patch

# get monero core tag
get_tag
# create local monero branch
git -C $MONERO_DIR checkout -B $VERSIONTAG

git -C $MONERO_DIR submodule init
git -C $MONERO_DIR submodule update