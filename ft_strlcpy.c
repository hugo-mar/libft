/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:14:05 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 15:53:41 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
#include <string.h>

DESCRIPTION
- The strlcpy copy strings 
- Designed to be safer, more consistent, and less error prone replacements for 
strncpy
- take the full size of the buffer (not just the length) and guarantee to 
NUL-terminate the result
- copies up to size - 1 characters from the NUL-terminated string src to dst, 
NUL-terminating the result.

RETURN VALUES
- return the total length of the src.
*/

/* 
#include <stdio.h>
#include <string.h>

int main() {

    char	src1[] = "Hello, world!";
    char	dst1[6];
    size_t	len1;

    len1 = ft_strlcpy(dst1, src1, sizeof(dst1));
    printf("FT_STRLCPY\nCopied string: %s\n", dst1);
    printf("SRC length: %zu\n\n", len1);

    return 0;
}
*/
