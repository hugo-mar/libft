/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:35:41 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 19:14:33 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* 
DESCRIPTION
Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

PARAMETERS
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.

RETURN VALUE
None

EXTERNAL FCTS
None
*/
