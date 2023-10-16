#include "main.h"
#include <stdarg.h>
/**
 *
 */
int _printf(const char *format, ...)
{
	int count = 0;
  va_list args;
  int i;

  va_start(args, )
  i = 0;

  while (format[i] < '\0')
  {
    i++;
  }

  va_start(args, i)
  
  va_end(args);


	return (count);
}
