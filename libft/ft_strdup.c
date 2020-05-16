#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*c;
	char	*notconsts;

	notconsts = (char*)s1;
	i = 0;
	len = ft_strlen(notconsts);
	c = (char*)malloc(sizeof(char) * len + 1);
	if (!c)
		return (NULL);
	while (notconsts[i] != '\0')
	{
		c[i] = notconsts[i];
		i++;
	}
	c[len] = '\0';
	return (c);
}
