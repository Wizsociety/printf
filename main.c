#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
    int len;
    int leng;
    unsigned int u;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    leng = printf("Let's try to printf a simple sentence.\n");
    u = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", leng, leng);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", u);
    printf("Unsigned:[%u]\n", u);
    _printf("Unsigned octal:[%o]\n", u);
    printf("Unsigned octal:[%o]\n", u);
    _printf("Unsigned hexadecimal:[%x, %X]\n", u, u);
    printf("Unsigned hexadecimal:[%x, %X]\n", u, u);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    leng = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", leng);
    _printf("Unknown:[%%r]\n");
    printf("Unknown:[%%r]\n");

    return 0;
}
