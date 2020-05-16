#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *newstr;

	newstr = (char*)s;
	while (*newstr != '\0')
	{
		if (*newstr == c)
			return (newstr);
		newstr++;
	}
	if (c == '\0')
		return (newstr);
	return (NULL);
}
