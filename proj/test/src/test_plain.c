
#include "test.h"

static void	print_result(char *arg)
{
	int	res0;
	int	res1;

	ft_printf("\ninput: %s\n", arg);
	
	ft_printf("ft_: ");
	res0 = ft_printf(arg);
	ft_printf("\t%d\n", res0);

	printf("man: ");
	res1 = printf(arg);
	printf("\t%d\n", res1);
}

void	test_plain(void)
{
	printf("\n=====test for plain text=====\n");

	print_result("Hello.");
	print_result(" Hello?\n");
	print_result("Is anybody other?\n");
	print_result("...\t...\t\n");
	print_result("#@$%#&$%&$(#)\t");
	print_result("..ello?\n");
	print_result("HELLO?\n");
	print_result("");
	print_result(NULL);
}
