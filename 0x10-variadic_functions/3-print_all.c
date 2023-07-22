#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_all- Prints anything based of the format specifier in function
  *@format: list of types of arguments passed to function
  *@...: arguments passed to the function
  */
void print_all(const char * const format, ...)
{
int j = 0;
char *str;
const char *separator = ", ";
va_list list;
va_start(list, format);
while (format != NULL && format[j] != '\0')
{
switch (format[j])
{
case 'c':
printf("%c%s", va_arg(list, int), separator);
break;
case 'i':
printf("%d%s", va_arg(list, int), separator);
break;
case 'f':
printf("%f%s", va_arg(list, double), separator);
break;
case 's':
str = va_arg(list, char *);
if (!str)
{
str = "(nil)";
}
printf("%s", str);
break;
default:
j++;
continue;
}
j++;
}
printf("\n");
va_end(list);
}
