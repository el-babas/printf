#include <limits.h>
#include <stdio.h>
#include "../main.h"


#define TAREA_NUM 0
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /* vars for task 0 to 2 */
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char *save = NULL;
    int num = 76;
    int result = -5; /* -5 is to avoid confusion with returning values -1 or 0 */
    /* vars for task 3 */


    switch (TAREA_NUM)
    {
      case 0:
          len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
          break;
      case 1:
          _printf("Texto letra %c\n", num);
          printf("Texto letra %c\n", num);
          len = _printf("Texto null %s\n", save);
          len2 = printf("Texto null %s\n", save);
	   _printf("Length:[%d, %i]\n", len, len);
          printf("Length:[%d, %i]\n", len2, len2);
          save = "Hola que tal!";
          len = _printf("Texto null %s\n", save);
	  len2 = printf("Texto null %s\n", save);
          _printf("%%c\n", 98);
          printf("%%c\n", 98);
          _printf("%b\n", 98);
          /*printf("%b\n", 98);*/
          ui = (unsigned int)INT_MAX + 1024;
          _printf("Unsigned:[%u]\n", ui);
          printf("Unsigned:[%u]\n", ui);
          _printf("%o\n", 98);
          printf("%o\n", 98);
          _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
          printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
          addr = (void *)0x7ffe637541f0;
          _printf("Address:[%p]\n", addr);
          printf("Address:[%p]\n", addr);
          break;

    case 2:
	    result = _printf("E - espacio post % y sin arg: % \n"); _printf("Result: %d\n", result); result = -5;
	    result = _printf("E - espacio post y fin cadena % "); _printf("\nResult: %d\n", result); result = -5;
	    result = _printf("E - espacio post y fin cadena + arg % ", '2'); _printf("\nResult: %d\n", result); result = -5;
	    result = _printf("E - espacio post % con arg: % \n", 'a');  _printf("Result: %d\n", result); result = -5;
	    result = _printf("Check C modf %c \n", 'c');  _printf("Result: %d\n", result); result = -5;
	    result = _printf("Check C modf wrong arg %c \n", "char");  _printf("Result: %d\n", result); result = -5;

	    _printf("\n\nCasos de Cristhian\n\n");

	    result = _printf("\nsdsdsdsd% ddf"); _printf("\nResult: %d\n", result); result = -5;
	    result = _printf("\nsdsdsdsd% "); _printf("\nResult: %d\n", result); result = -5;
	    result = _printf("\nLon %d", 10); _printf("\nResult: %d\n", result); result = -5;

	    _printf("\n\ncasos printf del std\n");
	    result = printf("\nsdsdsdsd% ddf\n"); _printf("\nResult: %d\n", result); result = -5;
	    
	  break;
    
      default:
          break;
    } 
    
    return (0);
}
