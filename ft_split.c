/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:42:37 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 14:21:22 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntstr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_slice(char const *s, char c, size_t *x)
{
	char	*slice;
	size_t	start;
	size_t	len;
	size_t	i;

	while (s[*x] && s[*x] == c)
		(*x)++;
	start = *x;
	len = 0;
	while (s[*x + len] != c && s[*x + len])
		len++;
	slice = (char *)malloc(len + 1);
	if (!slice)
		return (NULL);
	i = 0;
	while (i < len)
	{
		slice[i] = s[start + i];
		i++;
	}
	slice[len] = '\0';
	*x += len;
	return (slice);
}

static void	ft_free(char **slices, size_t y)
{
	while (y > 0)
	{
		free(slices[y - 1]);
		y--;
	}
	free(slices);
}

char	**ft_split(char const *s, char c)
{
	char	**slices;
	size_t	count;
	size_t	y;
	size_t	x;

	if (!s)
		return (NULL);
	count = ft_cntstr(s, c);
	slices = (char **)malloc(sizeof(char *) * (count + 1));
	if (!slices)
		return (NULL);
	y = 0;
	x = 0;
	while (y < count)
	{
		slices[y] = ft_slice(s, c, &x);
		if (!slices[y])
		{
			ft_free(slices, y);
			return (NULL);
		}
		y++;
	}
	slices[y] = (NULL);
	return (slices);
}

/*
DESCRIPTION
Allocates (with malloc(3)) and returns an array of strings
obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.

PARAMETERS
s: The string to be split.
c: The delimiter character

RETURN VALUE
The array of new strings resulting from the split.
NULL if the allocation fails.

EXTERNAL FCTS
malloc, free
*/

/*
#include <stdio.h>

int main ()
{
	//char str[] = "11111";
	char str[] = "111abcd1efg1hijk11111lmno1pqrst1uv1wxyz11";
	char splitter = '1';
	char *s1;
	char **split;
	
	s1 = str;
	split = ft_split(s1, splitter);
	printf ("String - %s\n", s1);
	printf("Splitter - %c\n\n", splitter);
	printf ("Pointer adress: %p\n\n", (void *)split);
	printf ("- Slices -\n");
	while (*split)
	{
		printf("%s\n", *split);
		split++;
	}
	return(0);
}
*/
