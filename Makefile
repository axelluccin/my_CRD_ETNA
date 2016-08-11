NAME	= MyCrd
SRC	= $(wildcard *.c)
OBJ	= $(SRC:.c=.o)
CC	= gcc
RM	= rm
CFLAGS	= -W -Wall -ansi -pedantic -std=c99 
RELEASEDIR	= Release

$(NAME)	: $(OBJ)
	$(CC) -pg -o $(RELEASEDIR)/$(NAME) $(OBJ)

.c.o	: 
	@mkdir -p $(RELEASEDIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

all	: $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean bclean

bclean	: 
	$(RM) -rf $(RELEASEDIR)

re	: fclean all
