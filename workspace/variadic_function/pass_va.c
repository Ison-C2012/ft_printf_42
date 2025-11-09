
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int	sum_array(int c, ...)
{
	va_list	ap;
	int	sum;

	va_start(ap, c);
	sum = 0;
	while (c--)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

int	sum_ary(int c, ...)
{
	return (sum_array(c, ...));
}


int	main(void)
{
	int	ary[10];
	int	res;

	srand(time(NULL));
	for (int i=0; i<10; i++)
		ary[i] = rand() % 10;
	res = sum_ary(3, ary[0], ary[1], ary[2]);
	printf("%d\n", res);
	res = sum_ary(3, ary[9], ary[1], ary[2]);
	printf("%d\n", res);
	res = sum_ary(3, ary[0], ary[9], ary[2]);
	printf("%d\n", res);
	for (int i=0; i<10; i++)
		printf("ary[%i]:%d\n", i, ary[i]);
}
