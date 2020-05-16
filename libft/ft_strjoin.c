#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	res = (char*)malloc(sizeof(char) * (i + j) + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
