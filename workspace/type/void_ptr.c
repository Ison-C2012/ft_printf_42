
#include <stdio.h>

void	print_void_ptr(void *p)
{
	printf("%%u: %u\n", p);
	printf("%%x: %x\n", p);
	printf("%%X: %X\n", p);
	printf("%%p: %p\n", p);
}

int	main(void)
{
	char *s="hello";
	print_void_ptr(s);
	print_void_ptr(&s);
}


