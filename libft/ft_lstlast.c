t_list *ft_lstlast(t_list *lst)
{
	if (!lst->next)
		return (lst);
	while (lst)
	{
		lst->next = lst;
	}
	return (lst)
}
