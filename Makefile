NAME = libfts.a

CC = nasm
CFlAGS = -f macho64

VPATH = srcs/
SRCS = ft_bzero.s \
	   ft_strlen.s \
	   ft_isalnum.s \
	   ft_isalpha.s \
	   ft_isdigit.s \
	   ft_isupper.s \
	   ft_islower.s \
	   ft_isascii.s \
	   ft_toupper.s \
	   ft_tolower.s \
	   ft_strcat.s \
	   ft_puts.s \
	   ft_memset.s \
	   ft_memcpy.s

OBJDIR = objs/
OBJS = $(patsubst %.s, $(OBJDIR)%.o, $(SRCS))

default: all

all: $(NAME)
	@echo " # sh : Job done $(shell pwd)/$(NAME)"

test: all
	@clang -Wall -Wextra -Werror -o test tests/test.c -I tests/ $(NAME)
	@echo "Executing test for libft_asm: \n\n"
	@./test

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo " + sh : Creating Library $(shell pwd)/$(NAME)"

$(OBJDIR)%.o: %.s $(OBJDIR)
	@echo -e "\033[1K"
	@echo " + sh : Compiling $(OBJDIR) < $^ with nasm\r"
	@$(CC) $(CFlAGS) -Wl -o $@ $<

$(OBJDIR):
	@mkdir $(OBJDIR)

clean:
	@rm $(NAME)

fclean: clean
	@rm $(OBJS)

re: fclean all

.PHONY: all clean fclean re
