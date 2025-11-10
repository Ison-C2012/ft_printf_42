
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

void	test_percent(void)
{
	char	*arg;
	int		res0;
	int		res1;

	printf("\n=====test for percent=====\n");
	print_result("%");
	print_result("HELOO%%c%");
	print_result("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
	print_result("\n%\n");
}
