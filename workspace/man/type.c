
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char *str="printf";
	int n=INT_MAX/2;
	unsigned int un=INT_MAX+INT_MAX/2;
	printf("%c\n", str[0]);
	printf("%s\n", str);
	printf("%p\n", str);
	printf("%p\n", &str);
	printf("%p\n", &n);
	printf("%p\n", &un);
	printf("%i\n", n);
	printf("%d\n", n);
	printf("%u\n", un);
	printf("%x\n", n);
	printf("%X\n", n);

}

