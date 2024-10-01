/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:55:25 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 09:32:50 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc (sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.

PARAMETERS
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

RETURN VALUE
The substring.
NULL if the allocation fails.

EXTERNAL FCTS
malloc
*/

/*
#include <stdio.h>

int main()
{
    char	*s = "This is a test string for ft_substr function.";
    int		start = 10;
    size_t	len = 11;
    char	*sub;

    sub = ft_substr(s, start, len);

    if (sub == NULL)
	{
        printf("Substring creation failed\n");
        return 1;
    }

    printf("Substring: %s\n", sub);

    free(sub);

    return 0;
}
*/