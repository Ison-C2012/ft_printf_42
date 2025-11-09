
#include "libft.h"
#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	int	res;

	res = ft_printf("This is keitotak. Hello, you hear me?\n");
	printf("\n%d\n", res);

	res = ft_printf("Yes yes, hi, I'm %s\n", "Sally");
	printf("\n%d\n", res);

	res = ft_printf("%c%c%c\n", 'O', 'h', '!');
	printf("\n%d\n", res);

	res = ft_printf("We hadn't seen for %d years! How was it going?\n", 9);
	printf("\n%d\n", res);

	res = ft_printf("Yeah, it's so long time. I'm %u now, can you believe?lol\n", 25);
	printf("\n%d\n", res);

	res = ft_printf("Where do you live?\n");
	printf("\n%d\n", res);

	res = ft_printf("%p\n", "Brooklyn.");
	printf("\n%d\n", res);

	res = ft_printf("Well, it seems so far... How long from NY?\n");
	printf("\n%d\n", res);

	res = ft_printf("About... %x km maybe\n", 42);
	printf("\n%d\n", res);

	res = ft_printf("Sally, you're a really humourous girl haha.\n");
	printf("\n%d\n", res);

	res = ft_printf("In ohter way,  %X minutes from NY\n", 60);
	printf("\n%d\n", res);

	res = ft_printf("I got it. I'll go someday. Bye.\n");
	printf("\n%d\n", res);

	return 0;
}



