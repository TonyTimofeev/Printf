#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;
	size_t len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (len_src)
	{
		dest[i] = src[i];
		len_src--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
