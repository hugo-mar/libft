/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:41:59 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 08:46:56 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	nbr;
	short	parity;

	nbr = 0;
	parity = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			parity = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		nbr = nbr * 10 + (*nptr - 48);
		nptr++; 
	}
	return (nbr * parity);
}

/*
DESCRIPTION
- convert a string to an integer
- converts the initial portion of the string pointed to by nptr to int. 

RETURN VALUE
- The converted value or 0 on error.
*/

/* 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf ("Origi '      12345': %d\n", atoi ("      12345"));
	printf ("Creat '      12345': %d\n\n", ft_atoi("      12345"));
	printf ("Origi '      -12345': %d\n", atoi ("      12345"));
	printf ("Creat '      -12345': %d\n\n", ft_atoi("      12345"));
	printf ("Origi -12345: %d\n", atoi ("-12345"));
	printf ("Creat -12345: %d\n\n", ft_atoi("-12345"));
	printf ("Origi -12345: %d\n", atoi ("--12345"));
	printf ("Creat -12345: %d\n\n", ft_atoi("--12345"));
	printf ("Origi 2147483647: %d\n", atoi ("2147483647"));
	printf ("Creat 2147483647: %d\n\n", ft_atoi("2147483647"));
	printf ("Origi -2147483648: %d\n", atoi ("-2147483648"));
	printf ("Creat -2147483648: %d\n\n", ft_atoi("-2147483648"));
	printf ("Origi 2147483655: %d\n", atoi ("2147483655"));
	printf ("Creat 2147483655: %d\n\n", ft_atoi("2147483655"));
	return(0);
}
*/
