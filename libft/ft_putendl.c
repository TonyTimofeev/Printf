#include "libft.h"

void	ft_putendl(char const *s)
{
	char *ss;

	if (s == NULL)
		return ;
	ss = (char*)s;
	while (*ss)
	{
		write(1, ss, 1);
		ss++;
	}
	write(1, "\n", 1);
}
