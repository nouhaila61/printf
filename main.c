#include "main.h"
int main ()
{
    char x = 'a';
    char *s = "hello";
	_printf("char is: %       c\n", x);
    printf("char is: %       c\n", x);
    _printf("string is: %s\n", s);
    printf("string is: %s\n", s);
    _printf("string is: %%\n");
    printf("string is: %%\n");
    return 0;
}
