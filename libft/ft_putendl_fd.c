#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *ss;

	if (s == NULL)
		return ;
	ss = (char*)s;
	while (*ss)
	{
		write(fd, ss, 1);
		ss++;
	}
	write(fd, "\n", 1);
}
