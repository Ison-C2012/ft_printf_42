
#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	int	res;

	res = ft_printf("This is keitotak. Hello, you hear me?\n");
	printf("\n%d\n", res);
	
	res = printf("This is keitotak. Hello, you hear me?\n");
	printf("\n%d\n", res);

	return 0;
}



