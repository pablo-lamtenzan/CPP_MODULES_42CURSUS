NAME		= phonebook

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -I. #-g3 -fsanitize=address
LIBS		=

SRCS		= phonebook.cpp
OBJS		= $(SRCS:.c=.o)

RM			= /bin/rm
all:		$(NAME)

$(NAME):	$(OBJS)
				@echo CC $<
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

clean:
			@echo RM $(OBJS) $<
			#@$(RM) -f $(OBJS)

fclean:					clean
			@echo RM $(NAME)
			@$(RM) -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re