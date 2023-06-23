#include "main.h"
/**
*print_square - draw a square on terminal
*@n: number
*
*Return: (void)
*/

void print_square(int size) {
if (size <= 0) {
_putchar('\n');
return;
}

for (int row = 0; row < size; row++) {
for (int col = 0; col < size; col++) {
_putchar('#');
}
_putchar('\n');
}
}
