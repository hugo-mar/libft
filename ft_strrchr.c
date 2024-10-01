/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:30:32 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 18:44:26 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && (s[i] != (unsigned char)c))
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}

/*
DESCRIPTION
- returns a pointer to the last occurrence of the character c in the string s
or NULL if the character is not found.
- Here "character" means "byte";

RETURN VALUE
- a  pointer  to  the matched  character.  
*/

/* 
#include <stdio.h>
#include <string.h>

int main()
{
	char	*a = "abcdaefgh";
	int		x;
	
	x = 97;
	printf("Origin:%s, %p\n", strrchr(a, x), strrchr(a, x));
	printf("Create:%s, %p\n", ft_strrchr(a, x), ft_strrchr(a, x));
	return (0);
}
*/
