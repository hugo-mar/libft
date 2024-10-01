/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:08:50 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 15:45:15 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}

/*
#include <string.h>

DESCRIPTION
- The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.
*/

/*
#include <stdio.h>

int main()
{
	char	str[10] = "Hello";

	printf("Original string: %s\n", str);
	ft_memset(str + 5, 'X', 5); 
	printf("String after ft_memset: %s\n", str);

	return (0);
}
*/
