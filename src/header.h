# ifndef HEADER_H
# define HEADER_H


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>




typedef struct s_config
{
	char* actual_path;
	char* prompt_bar;
} t_config;

void parser();
void cd();
void ls();
void clear();

# endif
