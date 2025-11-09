
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%p\t%p\n", 0, 0);
	printf("%p\t%p\n", LONG_MAX, -LONG_MAX);
	printf("%p\t%p\n", ULONG_MAX, -ULONG_MAX);
}



