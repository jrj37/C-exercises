#!/bin/sh

TARGET=tests



#
# Ce placer dans le répertoire courant
#
TESTDIR="$(cd "$(dirname "$0}")" && pwd)"
cd "$TESTDIR"

#
# Conserver une trace de toutes les actions
#
LOG="test.log"
rm -f "$LOG"
touch "$LOG"

#
# Importer les fonctions communes à tous les tests
#
. ./fonctions.sh


#
# Compilation du programme.
#
NOTE=0

annoncer "Compilation"
gcc -o $TARGET $TARGET.c -Wall -Wextra -Werror -Wno-implicit-fallthrough -lm >> $LOG 2>&1 || fail
coloredEcho "OK" green

NOTE=25

#
# Tests
#
annoncer "Execution"

annoncer "Test 0"
valgrind --error-exitcode=43 --leak-check=full -q ./$TARGET 0 2>> $LOG || fail
coloredEcho "OK" green
NOTE=35





success
