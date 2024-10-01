/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:02:30 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/06 22:50:59 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0) 
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dest);
}

/* 
DESCRIPTION
- The memcpy function copies n bytes from memory area src to memory area dest.
- The memory areas must not overlap. Use memmove if the areas do overlap.
	
RETURN VALUE
	-The memcpy() function returns a pointer to dest.
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	src[] = "Hello, world!";
	char	dst1[sizeof(src)];
	char	dst2[sizeof(src)];
	int		size = 6;

	printf("Original string: %s\n", src);
	
	ft_memcpy(dst1, src, sizeof(src));
	printf("Copied string: %s\n", dst1);
	
	ft_memcpy(dst2, src, size);
	dst2[size] = '\0';
	printf("Copied part of the string: %s\n", dst2);
	
	return 0;
}
*/
