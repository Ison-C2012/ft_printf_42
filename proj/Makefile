
NAME	:=	libftprintf.a

INCDIR	:=	includes

SRCDIR	:=	srcs
OBJDIR	:=	objs

SRCS	:=	ft_printf.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strlen.c \
			numbers.c \
			putconv_chars.c \
			putconv_nbrs.c
OBJS    := $(SRCS:%.c=$(OBJDIR)/%.o)

AR		:= ar
ARFLAGS	:= rcs
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror
MKDIR	:= mkdir

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(MKDIR) -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean: 
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

print:
	@echo "SRCS = $(SRCS)"
	@echo "OBJS = $(OBJS)"

.PHONY: all clean fclean re
