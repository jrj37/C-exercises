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

annoncer "Compilation"
make clean
make $TARGET >> $LOG 2>&1 || fail
coloredEcho "OK" green

NOTE=30


annoncer "Execution avec Valgrind"


annoncer "Test 0"
$VALGRIND ./$TARGET 0 >> $LOG || fail
coloredEcho "OK" green
NOTE=40

annoncer "Test 1"
$VALGRIND ./$TARGET 1 >> $LOG || fail
coloredEcho "OK" green
NOTE=50

annoncer "Test 2"
$VALGRIND ./$TARGET 2 >> $LOG || fail
coloredEcho "OK" green
NOTE=60

annoncer "Test 3"
$VALGRIND ./$TARGET 3 >> $LOG || fail
coloredEcho "OK" green
NOTE=70

annoncer "Test 4"
$VALGRIND ./$TARGET 4 >> $LOG || fail
coloredEcho "OK" green

NOTE=100

success