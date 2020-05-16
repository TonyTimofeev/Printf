#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return ;
	i = ft_strlen(s);
	write(1, s, i);
}
