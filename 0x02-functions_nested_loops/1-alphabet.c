#include "main.h"

int main(void)
{
    print_alphabet();
    return 0;
}

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ++ch)
        _putchar(ch);
    _putchar('\n');
}
