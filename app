#!/usr/bin/env bash

[ -f "$POTATO_CORE" ] && . $POTATO_CORE

[ ! -f "$POTATO_CORE" ] && echo "Please get potato first..." && exit

potato_load_app

potato_include 'inc'

potato_exec "${@}"
