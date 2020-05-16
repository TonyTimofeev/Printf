#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nextlist;
	t_list	*currentlist;

	nextlist = *alst;
	while (nextlist != NULL && del != NULL)
	{
		currentlist = nextlist;
		(*del)((currentlist)->content, (currentlist)->content_size);
		nextlist = currentlist->next;
		free(currentlist);
	}
	*alst = NULL;
}
