#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dd;
	unsigned char	*ss;

	i = 0;
	dd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			dd[len] = ss[len];
		return (dd);
	}
	while (i < len)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
