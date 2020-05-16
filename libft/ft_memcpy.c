#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	dd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dd);
}
