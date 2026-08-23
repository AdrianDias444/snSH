NAME = lib.a
EXECUTABLE = snSH

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
#CFLAGS = -Wall -Wextra -Werror
FLAGS = -g
COMPRESS = ar rcs
RM = rm -rf
MAIN_FILE = src/main.c
SOURCES = src/main.c \
		src/auxiliar/parser/parser.c \
		src/auxiliar/parser/create_flashbacks.c \
		src/auxiliar/parser/retrieve_cmd.c \
		src/auxiliar/parser/error_msg.c \
		\
		src/built-ins/cd.c \
		src/built-ins/clear.c \
		src/built-ins/color.c \
		src/built-ins/ls.c \
		\
		src/lib/f_split.c \
		src/lib/f_strlen.c \
		src/lib/f_strjoin.c \
		src/lib/f_strlcpy.c \
		src/lib/f_strdup.c \
		src/lib/f_remove_newline.c \
		\
		src/logo/colors_options.c \
		src/logo/crt_color_lst.c \
		src/logo/logo.c \
		src/logo/init_color.c


PYTHON_CACHE = src.logo/__pycache__

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
