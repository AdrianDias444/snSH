#include "../header.h"

static size_t	ft_word_count(char* s, char c)
{
	size_t	i;
	size_t	new_word;
	size_t	words;

	i = 0;
	new_word = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			words++;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (words);
}

static size_t	mem_count(char *s, char c)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static void	ft_free_all(char **str, size_t a)
{
	size_t	i;

	i = 0;
	while (i < a)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char**	f_splitcpy(char* s, char c, char **str)
{
	size_t	a;
	size_t	i;
	size_t	len_a;
	size_t	word_count;

	i = 0;
	a = 0;
	word_count = ft_word_count(s, c);
	while (a < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		len_a = mem_count(&s[i], c);
		str[a] = malloc(sizeof(char) * (len_a + 1));
		if (!str[a])
		{
			ft_free_all(str, a);
			return (NULL);
		}
		f_strlcpy(str[a], &s[i], len_a + 1);
		i += len_a;
		a++;
	}
	str[a] = NULL;
	return (str);
}

char**	f_split(char* s, char c)
{
	char	**str;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	str = malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	return (f_splitcpy(s, c, str));
}




/* ***************************************************** */
/*
void f_print_args(char** str)
{
	int i;

	i = 0;
	while(str[i])
	{
		printf("|%s|\n", str[i]);
		i++;
	}
}



int main(void)
{
	char*	str;
	char	c;


	str = "first test of our new split";
	c = ' ';

	f_print_args(f_split(str, c));

	//printf("%d", f_word_count(str, c));

}
*/