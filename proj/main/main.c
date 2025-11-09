
#include "ft_printf.h"
#include "libft.h"

#include <stdio.h>

int	main(void)
{
	int	res;

	ft_printf("\n==================ft_printf==================\n");
	ft_printf("c: ");
	res = ft_printf("%c", 'a');
	ft_printf("\t%d\n", res);

	ft_printf("s: ");
	res = ft_printf("%s", "abc");
	ft_printf("\t%d\n", res);

	ft_printf("i: ");
	res = ft_printf("%i", 0);
	ft_printf("\t%d\n", res);

	ft_printf("d: ");
	res = ft_printf("%d", 1);
	ft_printf("\t%d\n", res);

	ft_printf("u: ");
	res = ft_printf("%u", UINT_MAX);
	ft_printf("\t%d\n", res);

	ft_printf("x: ");
	res = ft_printf("%x", UINT_MAX);
	ft_printf("\t%d\n", res);

	ft_printf("X: ");
	res = ft_printf("%X", UINT_MAX);
	ft_printf("\t%d\n", res);

	ft_printf("p: ");
	res = ft_printf("%p", &res);
	ft_printf("\t%d\n", res);

	printf("\n\n");

	printf("\n==================printf==================\n");
	printf("c: ");
	res = printf("%c", 'a');
	printf("\t%d\n", res);

	printf("s: ");
	res = printf("%s", "abc");
	printf("\t%d\n", res);

	printf("i: ");
	res = printf("%i", 0);
	printf("\t%d\n", res);

	printf("d: ");
	res = printf("%d", 1);
	printf("\t%d\n", res);

	printf("u: ");
	res = printf("%u", UINT_MAX);
	printf("\t%d\n", res);

	printf("x: ");
	res = printf("%x", UINT_MAX);
	printf("\t%d\n", res);

	printf("X: ");
	res = printf("%X", UINT_MAX);
	printf("\t%d\n", res);

	printf("p: ");
	res = printf("%p", &res);
	printf("\t%d\n", res);

	printf("\n\n");

	return 0;
}



