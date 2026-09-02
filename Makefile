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
		src/lib/f_strip.c \
		\
		src/snailfetch/colors_options.c \
		src/snailfetch/crt_color_lst.c \
		src/snailfetch/logo.c \
		src/snailfetch/init_color_config.c \
		src/snailfetch/snailfetch.c \
		src/snailfetch/allocs/create_color_config.c \
		src/snailfetch/allocs/create_color_node.c \
		\
		src/command-bar/bar.c \
		src/command-bar/bar_init.c \
		src/command-bar/allocs/create_bar_struct.c \
		\
		src/parser/check_input.c \
		src/parser/error_msg.c \
		src/parser/parser.c \
		src/parser/valid_cmd.c \
		\
		src/init_shell/init.c \
		src/init_shell/allocs/init_create.c \
		\
		src/caller/caller.c

PYTHON_CACHE = src.logo/__pycache__

all: $(EXECUTABLE) fclean

$(EXECUTABLE): $(NAME) $(MAIN_FILE)
	$(CC) $(FLAGS) $(MAIN_FILE) $(NAME) -o $(EXECUTABLE)


$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)


fclean: clean
	$(RM) $(NAME)

re: fclean all


update-snSH:
	cp man/snSH.1 man/SNSH.1
	gzip man/SNSH.1
	sudo rm /usr/share/man/man1/SNSH.1.gz
	sudo mv man/SNSH.1.gz /usr/share/man/man1/

update-color:
	cp man/built-ins/snSH-color.7 man/built-ins/SNSH-color.7
	gzip man/built-ins/SNSH-color.7
	sudo rm /usr/share/man/man7/SNSH-color.7.gz
	sudo mv man/built-ins/SNSH-color.7.gz /usr/share/man/man7/

update-man: update-snSH update-color

.PHONY: all clean fclean re update-snSH update-color update-man
