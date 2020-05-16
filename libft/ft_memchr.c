#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*newstr;
	size_t			i;

	i = 0;
	newstr = (unsigned char*)s;
	while (i < n)
	{
		if (*newstr == (unsigned char)c)
			return (newstr);
		newstr++;
		i++;
	}
	return (NULL);
}
