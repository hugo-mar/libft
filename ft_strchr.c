/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:06:00 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 18:18:59 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != (unsigned char)c))
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *s1;
	s1 = str;

	printf ("%s\n", s1);
	printf ("%s\n", ft_strchr(s1, '%'));
	return(0);
}
*/

/* 
DESCRIPTION
- Locate character in string
- Returns a pointer to the first c occurrence, or NULL if is not found.
- Here "character"  means "byte";

RETURN VALUE
- returns  a  pointer  to  the matched  character.
*/
