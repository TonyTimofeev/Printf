#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	char	*c;

	c = (void*)content;
	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	if (!content || !content_size)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		tmp->content = (void*)malloc(sizeof(content) * content_size);
		if (!tmp->content)
		{
			free(tmp->content);
			return (NULL);
		}
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
