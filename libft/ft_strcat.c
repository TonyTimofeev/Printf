#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t len1;

	i = 0;
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[i] != '\0')
	{
		s1[len1] = s2[i];
		len1++;
		i++;
	}
	s1[len1] = '\0';
	return (s1);
}
