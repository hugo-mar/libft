/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:08:53 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 17:19:46 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pre_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	test;

	i = 0;
	j = 0;
	test = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] != set[j])
				test++;
			j++;
		}
		if (test == j)
			return (i);
		i++;
		j = 0;
		test = 0;
	}
	return (0);
}

static int	suf_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	test;

	i = ft_strlen(s1);
	j = 0;
	test = 0;
	while (i >= 0)
	{
		while (set[j])
		{
			if (s1[i - 1] != set[j])
				test++;
			j++;
		}
		if (test == j)
			return (ft_strlen(s1) - i);
		i--;
		j = 0;
		test = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) - pre_len(s1, set) - suf_len(s1, set);
	trimmed = (char *) malloc (sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	while (i < len)
	{
		trimmed[i] = s1[pre_len(s1, set) + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/*
DESCRIPTION
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.

PARAMETERS
s1: The string to be trimmed.
set: The reference set of characters to trim.

RETURN VALUE
Return value The trimmed string.
NULL if the allocation fails.

EXTERNAL FCTS
malloc
*/

/* 
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "abc   aaabbbrazorblade man    abc";
	char str2[] = "ab c";
	char *s1;
	char *s2;
	
	s1 = str1;
	s2 = str2;
	printf ("- Original string -\n");
	printf ("|%s|\n\n", s1);
	printf ("- Set of chars to trim -\n");
	printf ("|%s|\n\n", s2);
	printf ("- Trimmed string -\n");
	printf ("|%s|\n\n", ft_strtrim(s1, s2));
	return (0);
}
*/
