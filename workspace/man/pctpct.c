
#include <stdio.h>

int	main(void)
{
	int	res;

	res = printf("%%s\n");
	printf("%d\n", res);

	res = printf("%%\n");
	printf("%d\n", res);

	return 0;
}
