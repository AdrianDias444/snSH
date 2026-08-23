# ifndef HEADER_H
# define HEADER_H


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "logo/colors.h"


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
void parser(char* argv, t_color_config* color_config);
char* f_error_msg(char* unknown_command);



void cd();
void clear();
void color(t_color_config* color_config);
void ls();
void color_help();


char* f_strjoin(char* s1, char* s2);
size_t f_strlen(char* str);


void print_banner(char* color);

t_color_config* init_color();


void f_push_back(t_color* node_to_add, t_color_config* node_config);
t_color* f_create_color_node(char* color_code);
t_color_config* f_create_color_config();


# endif
