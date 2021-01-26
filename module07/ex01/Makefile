NAME	=	iter
SRCS	=	main.cpp
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

all:		$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(CFLAGS) $< -o $@

re: fclean all

clean:
	@echo "Nothing to clean"

fclean:
	rm -f $(NAME)