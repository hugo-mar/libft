/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:55:42 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 08:43:19 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	cat_len;
	size_t	i;

	if (!dst && !size)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	else
		cat_len = dst_len + ft_strlen(src);
	i = 0;
	while (dst_len < (size - 1) && src[i])
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (cat_len);
}

/*
DESCRIPTION
- size-bounded string concatenation
- take the full size of the buffer and guarantee to NUL-terminate the result 
(as long as size > 0 or as long as there is at least one byte free in dst).
- a byte for the NUL should be included in size.

RETURN VALUES
- Returns the total length of the string tried to create.
- That means the initial length of dst plus the length of src.	  
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[8] = "Hello, ";
	char src[] = "world!";
	
 	size_t result = ft_strlcat(dest, src, sizeof(dest));
	printf("Concatenated string : %s\n", dest);
	printf("Len: %zu\n", result);
    return 0;
}
*/
