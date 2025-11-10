
NAME	:=	test

INCDIR	:=	../includes

SRCDIR	:=	
OBJDIR	:=	obj

SRCS	:=	main/main.c \
			src/test_c.c \
			src/test_d.c \
			src/test_p.c \
			src/test_pct.c \
			src/test_plain.c \
			src/test_s.c \
			src/test_u.c \
			src/test_x.c
OBJS    := $(SRCS:%.c=$(OBJDIR)/%.o)
ARCH    := ../libftprintf.a

AR		:= ar
ARFLAGS	:= rcs
CC		:= cc
CFLAGS	:= 
MKDIR	:= mkdir
MAKE	:= make
CLEAN	:= clean
FCLEAN	:= fclean

$(NAME): $(OBJS)
	$(MAKE) -C ../
	$(CC) $(CFLAGS) $(OBJS) $(ARCH) -o $@ -I $(INCDIR) -I.

$(OBJDIR)/%.o: %.c
	$(MKDIR) -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR) -I.

all: $(NAME)

clean: 
	$(MAKE) $(CLEAN) -C ../
	rm -rf $(OBJDIR)

fclean: clean
	$(MAKE) $(FCLEAN) -C ../
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
