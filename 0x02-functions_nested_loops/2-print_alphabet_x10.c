#include "main.h"

void print_alphabet_x10(void){
char character;
int count;

for(count=0; count<10; count++)
{
for(character='a'; character<='z'; character++)
{
_putchar(character);
}
_putchar('\n');
}
return (0);
}
