
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
CC = cc 

CFILES = ft_putnbr.c ft_putstr.c ft_putchar.c ft_printf.c

OFILES = $(CFILES:.c=.o)

all : $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@
	
 $(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean: 
	rm -f $(OFILES) $(OFILES)

fclean: clean 
	 rm -f $(NAME)
re: fclean all