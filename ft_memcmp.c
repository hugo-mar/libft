/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:29:26 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 19:38:24 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*m1;
	const unsigned char	*m2;

	i = 0;
	m1 = (const unsigned char *)s1;
	m2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (m1[i] == m2[i] && i < (n - 1))
		i++;
	return (m1[i] - m2[i]);
}

/* 
#include <string.h>

DESCRIPTION
- compare memory areas
- compares the first n bytes (each interpreted as unsigned char) of the 
memory areas s1 and s2.

RETURN VALUE
- returns  an  integer less  than,  equal  to, or greater than zero 
if the first n bytes of s1 is found, respectively,
to be less than, to match, or be greater than the first n bytes of s2.
- If n is zero, the return value is zero.
*/
