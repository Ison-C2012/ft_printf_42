
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("%p\t%p\n", 0, 0);
	ft_printf("%p\t%p\n", LONG_MAX, -LONG_MAX);
	ft_printf("%p\t%p\n", ULONG_MAX, -ULONG_MAX);
}



