#include "../header.h"

size_t	f_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = f_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}