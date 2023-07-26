#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

typedef struct print_format
{
	char *format;
	void (*print_func)(va_list);
} print_format_t;

/* Function prototypes */
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
