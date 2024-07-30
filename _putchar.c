#include "main.h"

int _putchar(char c) {
    return write(1, &c, 1);
}

int _putchar_va(va_list args) {
    return _putchar(va_arg(args, int));
}

