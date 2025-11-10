
#include "test.h"

static void	print_result(char *arg)
{
	int	res0;
	int	res1;

	printf("\ninput: %s\n", arg);
	res0 = ft_printf("ft_: %s\t", arg);
	printf("%d\n", res0);
	res1 = printf("man: %s\t", arg);
	printf("%d\n", res1);
}

void	test_str(void)
{
	printf("\n=====test for string=====\n");

	print_result("");
	print_result("HELOO");
	print_result("\t\32\t");
	print_result("\n");
	print_result(NULL);
	print_result("NULL");
	print_result("Good Work.");
}
