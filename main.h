#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x)void(x)
#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(int n);
int print_i(int n);
char special_signs(int count, ...);

#endif
