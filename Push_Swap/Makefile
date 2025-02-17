NAME = push_swap.a
EXEC = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I./Libft
LDFLAGS = -L./Libft -lft

SRC = Checker/checker_utils.c Checker/checker.c push_swap.c
OBJ = $(SRC:.c=.o)

INCLUDE = push_swap.h

AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME) $(EXEC)
	 $(MAKE) -C Libft 

$(NAME): $(OBJ)
	$(MAKE) -C Libft
	$(AR) $@ $^

$(EXEC): $(OBJ)
		$(CC) $(OBJ) $(LDFLAGS) -o $(EXEC)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) $(OBJ) 
		$(MAKE) -C Libft clean

fclean: clean
	$(RM) $(NAME) $(EXEC)
	$(MAKE) -C Libft fclean

re: fclean all