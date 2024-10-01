/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:47:59 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 18:33:05 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
DESCRIPTION
Adds the node ’new’ at the end of the list.

PARAMETERS
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to added to the list.

RETURN VALUE
-

EXTERNAL FCTS
-
*/
