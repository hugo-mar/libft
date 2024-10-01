/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:49:57 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 20:09:37 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + n] == little[n] && (i + n) < len)
			n++;
		if (little[n] == '\0')
			return ((char *)(big + i));
		n = 0;
		i++;
	}
	return (NULL);
}

/* 
#include <string.h>

DESCRIPTION
- locates the first occurrence of the null-terminated string little
in the string big, where not more than len characters are searched.

RETURN VALUES
- If little is an empty string, big is returned;
- if little occurs nowhere in big, NULL is returned;
-  otherwise a pointer to the first character of the first occurrence 
of little is returned.
*/
