#include "variadic_functions.h"
/**
 * format_int - check the code
 *
 * @lis: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void format_int(char *separator, va_list lis)
{       
printf("&s&d", separator, va_arg(lis, int))
}

/**
 * format_float - check the code
 *
 * @lis: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void format_float(char *separator, va_list lis)
{
printf("&s&f", separator, va_arg(lis, double))
}

/**
 * format_char - check the code
 *
 * @lis: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void format_char(char *separator, va_list lis)
{
printf("&s&c", separator, va_arg(lis, int))
}

/**
 * format_string - check the code
 *
 * @lis: the last no. of args
 * @separator:the separator
 *
 * Return: Always 0.
 */

void format_string(char *separator, va_list lis)
{
char *ptr = va_arg(lis, char *)

switch ((int)(!ptr))
	case 1:
		ptr = "(nil)";

	printf("%s%s", separator, ptr);
}

/**
 * print_all - check the code
 *
 * @...: the last no. of int
 * @format: the format for everything
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	int counter = 0;
	int h;
	char *separator = "";
	va_list lis;
	mtypes_y mtypesf[] = {
		{"i", format_int},
		{"f", format_float},
		{"c", format_char},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(lis, format);
	while (format && format[counter])
	{
		h = 0;
		while (mtypesf[h].mtype)
		{
			if (format[counter] == mtypesf[h].mtype[0])
			{
				mtypesf[h].f(separator, lis);
				separator = ",";
			}
			h++;
		}
		counter++;
	}
	printf("\n");
	va_end(lis);
}


