
SRC = ft_atoi.c ft_strlen.c 


OBJS=$(SRCS:.c=.o)

NAME = libft.a


$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

$(OBJS): $(SRC)
	gcc -Wall -Werror -Wextra -c $(SRC)

clean:
	rm *.o