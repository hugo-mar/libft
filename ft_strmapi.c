/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:07:16 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 16:52:19 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
DESCRIPTION
Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to collect the
results from the successive applications of f.

PARAMETERS
s: The string on which to iterate.
f: The function to apply to each character.

RETURN VALUE
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

EXTERNAL FUNCTS
malloc
*/

/*
char ft_tupper(unsigned int i, char c)
{
    if (!i)
		return (c);
	if (c >= 'a' && c <= 'z')
        return (char)(c - 32);
    return c;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    char *result = ft_strmapi(str, &ft_tupper);
    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", result);
    free(result);
    return 0;
}
*/
