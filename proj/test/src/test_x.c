
//#include "ft_printf.h"
#include "test.h"

static void	print_result(unsigned int arg)
{
	int	res0;
	int	res1;

	printf("\ninput: %u\n", arg);
	res0 = ft_printf("ft_: %X\t", arg);
	printf("%d\n", res0);
	res1 = printf("man: %X\t", arg);
	printf("%d\n", res1);
}

void	test_hex(void)
{
	printf("\n=====test for uint in hex=====\n");

	print_result(0);
	print_result(11);
	print_result(42);
	print_result(UINT_MAX);
	print_result(LONG_MAX);
	print_result(-LONG_MAX);
	print_result(ULONG_MAX);
	print_result(-ULONG_MAX);
}
