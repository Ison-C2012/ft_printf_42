
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int	ui=UINT_MAX;
	long long		ll=UINT_MAX;
	long			l=UINT_MAX;
	int				i=UINT_MAX;

	printf("%u\n", ui);
	printf("%lld\n", ll);
	printf("%ld\n", l);
	printf("%d\n", i);
}


