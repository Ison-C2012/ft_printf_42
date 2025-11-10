
#include "test.h"

static void	print_result(int arg)
{
	int	res0;
	int	res1;

	printf("\ninput: %c\n", arg);
	res0 = ft_printf("ft_: %c\t", arg);
	printf("%d\n", res0);
	res1 = printf("man: %c\t", arg);
	printf("%d\n", res1);
}

void	test_char(void)
{
	printf("\n=====test for charactor=====\n");

	print_result(0);
	print_result(127);
	print_result(32);
	print_result('\t');
	print_result('a');
	print_result(255);
	print_result(INT_MAX);
}
