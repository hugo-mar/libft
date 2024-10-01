/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:31:03 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/06 22:51:20 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = '\0';
		n--;
	}
}

/*
#include <string.h>

DESCRIPTION - erases  the  data  in the n bytes of the memory starting at the 
location pointed to by s, by writing zeros (bytes containing '\0') to that area.
*/

/*
#include <stdio.h>

int main()
{
	char	str[10] = "Hello";

	printf("Original string: %s\n", str);
	ft_bzero(str, 10); 
	printf("String after ft_bzero: %s\n\n", str);

	return (0);
}
*/
