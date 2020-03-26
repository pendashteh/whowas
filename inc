#!/usr/bin/env bash

function _whowas_ensure_git {
    local datadir=$(_whowas_git_dir)
    mkdir -p $datadir
    cd $datadir
    [ ! -d "./.git" ] && git init && git --allow-empty -m"Empty."
    export GIT_DIR=$datadir/.git
}

function _whowas_git_dir {
    echo $HOME/.whois/data
}
