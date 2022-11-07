#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void*))
{
	t_list	*temp;
	t_list	*new;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}		
