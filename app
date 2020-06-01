#!/usr/bin/env bash

[ -f "$POTATO_CORE" ] && . $POTATO_CORE

[ ! -f "$POTATO_CORE" ] && echo "Please get potato first..." && exit

potato_load_app

source 'in'

potato_exec "${@}"
