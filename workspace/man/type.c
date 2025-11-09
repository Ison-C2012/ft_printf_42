
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char *str="printf";
	int n=INT_MAX/2;
	unsigned int un=INT_MAX+INT_MAX/2;
	int ary[]={0,1,2,3,4,5,6,7,8,9};

	printf("%c\n", str[0]);
	printf("%s\n", str);
	printf("%p\n", str);
	printf("%p\n", ary);
	printf("%p\n", &str);
	printf("%p\n", &ary);
	printf("%p\n", &n);
	printf("%p\n", &un);
	printf("%i\n", n);
	printf("%d\n", n);
	printf("%u\n", un);
	printf("%x\n", n);
	printf("%X\n", n);

}

