/*void _print_number(int a)
{
        _putchar(a);
        return;
}
int main()
{
        int y = 2047;
        _putchar(y);
        _putchar('\n');

        return (0)
}*/
#include "main.h"
#include <unistd.h>

int _putchar(char b);
void _print_number(int a)
{
        unsigned int number = a;
        char buffer[14];
        int i = 0;

        if (a == 0)
        {
                _putchar('0');
                return;
        }

        if (a < 0)
        {
                _putchar('-');
                number = -a;
        }

        while (number > 0)
        {
                buffer[i++] = (number % 10) + '0';
                number /= 10;
        }

        while (i--)
        {
                _putchar(buffer[i]);
        }
}

int main()
{
        _print_number(12685989);
        _putchar('\n');
        _print_number(-3456459);
        _putchar('\n');
        _print_number(0);
        _putchar('\n');
        return 0;
}
