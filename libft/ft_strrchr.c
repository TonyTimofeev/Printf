#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*mys;

	mys = (char*)s;
	i = ft_strlen(mys) + 1;
	while (i--)
	{
		if (mys[i] == c)
			return (&mys[i]);
	}
	return (NULL);
}
