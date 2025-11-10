
#include "ft_printf.h"


#include <stdio.h>

int	main(void)
{
	int	res;

	res = ft_printf("This is keitotak. Hello, you hear me?\n");
	ft_printf("%d\n", res);

	res = ft_printf("Yes yes, hi, I'm %s\n", "Sally");
	ft_printf("%d\n", res);

	res = ft_printf("%c%c%c\n", 'O', 'h', '!');
	ft_printf("%d\n", res);

	res = ft_printf("We hadn't seen for %d years! How was it going?\n", 9);
	ft_printf("%d\n", res);

	res = ft_printf("Yeah, it's so long time. I'm %u now, can you believe?lol\n", 25);
	ft_printf("%d\n", res);

	res = ft_printf("Where do you live?\n");
	ft_printf("%d\n", res);

	res = ft_printf("%p\n", "Brooklyn.");
	ft_printf("%d\n", res);

	res = ft_printf("Well, it seems so far... How long from NY?\n");
	ft_printf("%d\n", res);

	res = ft_printf("About... %x km maybe\n", 42);
	ft_printf("%d\n", res);

	res = ft_printf("Sally, you're a really humourous girl haha.\n");
	ft_printf("%d\n", res);

	res = ft_printf("In ohter way,  %X minutes from NY\n", 60);
	ft_printf("%d\n", res);

	res = ft_printf("I got it. I'll go someday. Bye.\n");
	ft_printf("%d\n", res);

	return 0;
}



