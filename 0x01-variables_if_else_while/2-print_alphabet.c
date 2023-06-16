#include <stdio.h>
/**
  * main - program entry point
  * Return: 0 (success)
  * Description: A program that prints all lowercase letters of the alphabet
  */
int main() {
char character;

for (character = 'a'; character <= 'z'; character++) {
    putchar(character);
}
putchar('\n');
return (0);
}