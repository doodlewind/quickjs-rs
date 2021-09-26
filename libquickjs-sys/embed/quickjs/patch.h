#pragma once

int printf(const char *format, ...);

int vsnprintf(char *__restrict, size_t, const char *__restrict, __VALIST);

#define putchar(str) (0)

void debug_log(const char *str, int a);
