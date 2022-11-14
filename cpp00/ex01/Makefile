SRCS		=	srcs/PhoneBook.cpp	\
				srcs/Contact.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror -I./includes

CPPFLAGS	= 	-std=c++98

NAME		= 	phoneBook

all:		$(NAME)

.cpp.o:
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<


$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)	

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re bonus