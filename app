#!/usr/bin/env bash

set -e

test -e $POTATO_CORE && . $POTATO_CORE --exec || echo 'Go get potato first.'

