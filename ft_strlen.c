/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:46:16 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/04 18:04:38 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("Original: %zu\n", strlen("Hello World"));
	printf("Created: %zu\n", ft_strlen("Hello World"));
	return (0);
}
*/
