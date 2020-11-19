gcc -ansi -pedantic-errors -Wall -Wextra -c fonctionsRectangles.c -o fonctionsRectangles.o
gcc -ansi -pedantic-errors -Wall -Wextra -c main.c -o TP_Rectangles.o
gcc fonctionsRectangles.o TP_Rectangles.o -lm -o exeRectangles
./exeRectangles