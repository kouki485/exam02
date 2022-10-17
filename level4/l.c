#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !*begin_list)
		return ;
	t_list *str = *begin_list;

	if (cmp(data_ref,str->data) == 0)
	{
		*str = str->next;
		free(str);
		ft_list_remove_if(begin_list,data_ref,cmp);
	}
	str = *begin_list;
	ft_list_remove_if(&str->next,data_ref,cmp);
}