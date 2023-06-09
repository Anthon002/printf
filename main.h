#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(const char *str);
int print_b(va_list args);
int _write_buffered(char *buffer, int buf_size);
int print_integer(va_list args);
int power(int base, int exp);
void _print_number(int n, int *count);
int _print_p(va_list args, int count);
void _print_uoxX(unsigned int n, unsigned int base, int *count, int is_upper);
int _print_S(char *str);
#endif
