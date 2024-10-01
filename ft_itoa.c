/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:56:51 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/05 14:42:22 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;
	int	calc;

	len = 0;
	calc = n;
	if (n == 0)
		return (1);
	while (calc)
	{
		calc /= 10;
		len++;
	}
	if (n < 0)
		return (len + 1);
	else
		return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	short	len;
	long	nbr;
	short	i;

	i = 0;
	len = ft_len(n);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -(long)n;
		i++;
	}
	else
		nbr = n;
	while (i < len)
	{
		str[(len--) - 1] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[ft_len(n)] = '\0';
	return (str);
}

/* 
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("INT MAX: %d\n", INT_MAX);
	printf("   ITOA: %s\n\n", ft_itoa(INT_MAX));
	printf("INT MIN: %d\n", INT_MIN);
	printf("   ITOA: %s\n", ft_itoa(INT_MIN));
	return(0);
}
*/

/*
DESCRIPTION
Description Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.


PARAMETERS
n: the integer to convert.

RETURN VALUE
The string representing the integer.
NULL if the allocation fails.

EXTERNAL FCTS
malloc
*/
