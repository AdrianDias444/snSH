#ifndef LIB_H
#define LIB_H


char*	f_strjoin(char* s1, char* s2);
size_t	f_strlen(char* str);
size_t	f_strlcpy(char *dst, char *src, size_t size);
char*	f_strdup(char* str);
char*	f_remove_newline(char* str);
char**	f_split(char* s, char c);
char*	f_strip(char* str);

#endif