# ifndef HEADER_H
# define HEADER_H


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "logo/colors.h"
#include "command-bar/bar.h"

#define BOOL_TRUE 1



////////////////////////////////////////////
// struct for a specific command,
// like ["ls"], ["cd"] and ["pwd"]
// have each one their own struct.
//
//
// Each struct have their respective
//
// -> command (char*)
// and
// -> a older command struct (linked list format)
typedef struct s_command
{
	char* command;
	struct s_command* pre_cmd;
} t_command;

////////////////////////////////////////////
// struct that contains the newest command
// and this command the others one, in a
// linked list
//
// last_command (t_command)
typedef struct s_flashbacks
{
    struct t_command* last_command;
} t_flashbacks;



////////////////////////////////////////////
// struct that contais a lot of important
// information
//
// -> Actual path, similar to ["pwd"] command
// -> The actual bar, like: ~/git/My_Projects/snSH/src/
// -> A pointer to t_flashbacks struct,
// this one contains the a linked the newest command
// in a linked list
typedef struct s_config
{
	char* actual_path;
	char* command_bar;
    struct t_flashbacks* last_command;
} t_config;










char* retrieve_cmd(char* argv);
void parser(char* argv, t_color_config* color_config, t_bar* bar);
char* f_error_msg(char* unknown_command);



void cd();
void clear();



void color_parser(t_color_config* color_config, char** cmd_args, t_bar* bar);
void color(t_color_config* color_config, t_bar* bar);
void color_help(t_bar* bar);
void color_define(t_color_config* color_config, char* color_digit, t_bar* bar);
void color_name(t_color_config* color_config);
t_color* find_color_with_nb(t_color_config* color_config, int nb);

void ls();


char* f_strjoin(char* s1, char* s2);
size_t f_strlen(char* str);
size_t	f_strlcpy(char *dst, char *src, size_t size);
char* f_strdup(char* str);
char* f_remove_newline(char* str);
char** f_split(char* s, char c);



void print_banner(char* color);
void snailfetch(t_color_config* color_config);
t_color_config* init_color();


void f_push_back(t_color* node_to_add, t_color_config* node_config);
t_color* f_create_color_node(char* color_code, int nb);
t_color_config* f_create_color_config();


void f_colors_options(void);
void bold_black(void);
void bold_red(void);
void bold_green(void);
void bold_yellow(void);
void bold_blue(void);
void bold_magenta(void);
void bold_cyan(void);
void bold_white(void);


# endif
