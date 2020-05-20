#!/usr/bin/env bash

function _whowas_ensure_git {
    local datadir=$(_whowas_git_dir)
    mkdir -p $datadir
    cd $datadir
    [ ! -d "./.git" ] && git init && git commit --allow-empty -m"Empty."
    export GIT_DIR=$datadir/.git
}

function _whowas_git_dir {
    echo $HOME/.whois/data
}

function _whowas_extract_tld {
    local domain_name=$1
    local tld=''
    [[ "$domain_name" =~ ^(.*)\.(.+)$ ]] && tld=${BASH_REMATCH[2]}
    echo $tld
}
