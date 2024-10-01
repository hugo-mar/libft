/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:11:50 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 17:04:17 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
DESCRIPTION
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.

PARAMETERS
s: The string on which to iterate.
f: The function to apply to each character.

RETURN VALUE
None

EXTERNAL FUNCTS
None
*/

/*
#include <stdio.h>
#include <stdlib.h>

void ft_print_index_char(unsigned int index, char *c)
{
    printf("Index: %u, Char: %c\n", index, *c);
}

int main()
{
    char str[] = "Hello, World!";
    ft_striteri(str, &ft_print_index_char);
    return 0;
}
*/
