/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:32:48 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 15:39:46 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0) 
			d[n] = s[n];
	}
	return (dest);
}

/* 
DESCRIPTION
- The memmove function copies n bytes from memory area src to memory area dest.
- The memory areas may overlap: copying takes place as though the bytes in src
are first copied into a temporary array that does not overlap src or dest, and 
the bytes are then copied from the temporary array to dest.
*/

/* 
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	str1[] = "Hello, world!";
	printf("Original string: %s\n", str1);
	ft_memmove(str1, str1 + 7, 7);
	printf("String after ft_memmove: %s\n\n", str1);

	char	str2[] = "Yallo, weird!";
	printf("Original string: %s\n", str2);
	memmove(str2, str2 + 7, 7);
	printf("String after memmove: %s\n", str2);

	char a[] = "123456789";
	char b[] = "123456789";
	
	printf("%s\n",(char *)ft_memmove(a+2,a,5));
	printf("%s\n",(char *)memmove(b+2,b,5));
}
*/
