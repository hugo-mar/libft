/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:30:18 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 18:02:47 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* 
DESCRIPTION
Adds the node ’new’ at the beginning of the list.

PARAMETERS
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to added to the list.

RETURN VALUE
-

EXTERNAL FCTS
-
*/
