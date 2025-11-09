
#include <stdio.h>

int	main(void)
{
	int	res;

	res = printf("%%%q%t%r%m%h\n");
	printf("%d\n", res);
	return 0;
}

