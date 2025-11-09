# **************************************************************************** #
#                                   SETTINGS                                   #
# **************************************************************************** #

NAME	:=	libftprintf.a

INCDIR	:=	includes

SRCDIRS	:=	srcs libft
OBJDIR	:=	objs

SRCS	:=	$(foreach dir,$(SRCDIRS),$(wildcard $(dir/*.c)))
OBJS	:=	$(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))

AR		:= ar rcs
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror
#MKDIR	:= mkdir

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $@ $?

$(OBJDIR)/%.o: $(foreach dir,$(SRCDIRS),$(dir)/%.c)
	@makedir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean: 
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

print:
	@echo "SRCS = $(SRCS)"
	@echo "OBJS = $(OBJS)"

.PHONY: all clean fclean re
