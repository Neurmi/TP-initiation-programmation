 gcc -Wall -Wextra -Wpedantic -ansi -c TP_tests.c -o TP_tests.o
 gcc -Wall -Wextra -Wpedantic -ansi -c fonctionsTestRectangles.c -I ../TP4 -o fonctionsTestRectangles.o
 gcc -Wall -Wextra -Wpedantic -ansi -c ../TP4/fonctionsRectangles.c -I ../TP4 -o fonctionsRectangles.o
 gcc TP_tests.o fonctionsTestRectangles.o fonctionsRectangles.o -o exeTestRectangles
./exeTestRectangles

