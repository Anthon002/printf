#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format,...);
int _putchar(char c);
int _strlen(const char *str);
int print_b(va_list args);
int _write_buffered(char *buffer, int buf_size);

#endif
