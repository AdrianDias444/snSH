NAME = lib.a

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
COMPRESS = ar rcs
RM = rm -f
MAIN_FILE = main.c
SOURCES = main.c \
		auxiliar/parser.c \
		built-ins/cd.c \
		built-ins/ls.c \
		built-ins/clear.c

all: $(NAME) fclean

$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)
	$(CC) $(MAIN_FILE) $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re