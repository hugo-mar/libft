/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:20:30 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 19:18:06 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n)
	{
		while (str[i] != (unsigned char)c && i < (n - 1))
			i++;
		if (str[i] == (unsigned char)c)
			return ((void *)(unsigned char *)(s + i));
	}
	return (NULL);
}

/* 
#include <string.h>

DESCRIPTION
- scan memory for a character
- scans  the initial n bytes of the memory area pointed to by s for 
the first instance of c.
- Both c and the bytes of the memory area pointed to by s are interpreted as 
unsigned char.

RETURN VALUE
- a pointer to the matching byte or NULL if the character does not occur.
*/
