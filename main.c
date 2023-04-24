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
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return 0;
}
