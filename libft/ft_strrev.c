#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*out;
	int		len;
	char	*start;

	len = ft_strlen(str);
	out = (char*)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	start = out;
	len--;
	while (len >= 0)
	{
		*out = str[len];
		out++;
		len--;
	}
	*out = '\0';
	return (out);
}
