#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		elem->content = (void *)content;
		elem->content_size = content ? content_size : 0;
		elem->next = NULL;
	}
	return (elem);
}
