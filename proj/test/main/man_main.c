
#include <stdio.h>

int	main(void)
{
	int	res;

	res = printf("This is keitotak. Hello, you hear me?\n");
	printf("%d\n", res);

	res = printf("Yes yes, hi, I'm %s\n", "Sally");
	printf("%d\n", res);

	res = printf("%c%c%c\n", 'O', 'h', '!');
	printf("%d\n", res);

	res = printf("We hadn't seen for %d years! How was it going?\n", 9);
	printf("%d\n", res);

	res = printf("Yeah, it's so long time. I'm %u now, can you believe?lol\n", 25);
	printf("%d\n", res);

	res = printf("Where do you live?\n");
	printf("%d\n", res);

	res = printf("%p\n", "Brooklyn.");
	printf("%d\n", res);

	res = printf("Well, it seems so far... How long from NY?\n");
	printf("%d\n", res);

	res = printf("About... %x km maybe\n", 42);
	printf("%d\n", res);

	res = printf("Sally, you're a really humourous girl haha.\n");
	printf("%d\n", res);

	res = printf("In ohter way,  %X minutes from NY\n", 60);
	printf("%d\n", res);

	res = printf("I got it. I'll go someday. Bye.\n");
	printf("%d\n", res);

	return 0;
}



