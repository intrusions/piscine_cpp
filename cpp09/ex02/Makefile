SRCS		=	main.cpp				\
				PmergeMe.cpp				

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

CFLAGS		=  -I./

CPPFLAGS	= 	-std=c++98

NAME		=	PmergeMe

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

.PHONY:		all clean fclean re