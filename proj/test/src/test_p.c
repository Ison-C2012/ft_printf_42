
//#include "ft_printf.h"
#include "test.h"

static void	print_result(uintptr_t arg)
{
	int	res0;
	int	res1;

	printf("\ninput: %lld\n", arg);
	res0 = ft_printf("ft_: %p\t", arg);
	printf("%d\n", res0);
	res1 = printf("man: %p\t", arg);
	printf("%d\n", res1);
}

void	test_voidptr(void)
{
	printf("\n=====test for void * ptr=====\n");

	print_result(0);
	print_result(LONG_MAX);
	print_result(-LONG_MAX);
	print_result(ULONG_MAX);
	print_result(-ULONG_MAX);
}
