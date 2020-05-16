#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		i;
	char		*newsrc;

	newsrc = (char*)src;
	len = 0;
	i = 0;
	while (dst[len] != '\0')
		len++;
	if (len >= size)
		return (size + ft_strlen(newsrc));
	while (len + i < size - 1 && newsrc[i] != '\0')
	{
		dst[len + i] = newsrc[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(newsrc));
}
