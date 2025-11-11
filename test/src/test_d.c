
//#include "ft_printf.h"
#include "test.h"

static void	print_result(int arg)
{
	int	res0;
	int	res1;

	printf("\ninput: %d\n", (int)arg);
	res0 = ft_printf("ft_: %d\t", (int)arg);
	printf("%d\n", res0);
	res1 = printf("man: %d\t", (int)arg);
	printf("%d\n", res1);
}

void	test_decint(void)
{
	printf("\n=====test for decimal int=====\n");

	print_result(0);
	print_result(11);
	print_result(-42);
	print_result(INT_MAX);
	print_result(INT_MIN);
	print_result(LONG_MAX);
	print_result(-LONG_MAX);
}
