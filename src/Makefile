NAME = lib.a
EXECUTABLE = snSH

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
#CFLAGS = -Wall -Wextra -Werror
FLAGS = -g
COMPRESS = ar rcs
RM = rm -rf
MAIN_FILE = main.c
SOURCES = main.c \
		auxiliar/parser/parser.c \
		auxiliar/parser/create_flashbacks.c \
		auxiliar/parser/retrieve_cmd.c \
		auxiliar/parser/error_msg.c \
		\
		built-ins/cd.c \
		built-ins/clear.c \
		built-ins/color.c \
		\
		built-ins/ls.c \
		lib/f_strlen.c \
		lib/f_strjoin.c \
		\
		logo/crt_color_lst.c \
		logo/logo.c \
		logo/init_color.c


PYTHON_CACHE = logo/__pycache__

all: $(EXECUTABLE) clean

$(EXECUTABLE): $(NAME) $(MAIN_FILE)
	$(CC) $(FLAGS) $(MAIN_FILE) $(NAME) -o $(EXECUTABLE)


$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean_pycache:
	$(RM) $(PYTHON_CACHE)

clean: clean_pycache
	$(RM) $(OBJECTS)


fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
