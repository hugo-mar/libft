/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:12:31 by hugo-mar          #+#    #+#             */
/*   Updated: 2024/05/07 15:03:26 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;
	size_t	max;

	max = nmemb * size;
	if (nmemb && size && (max / size != nmemb))
		return (NULL);
	space = malloc(max);
	if (!space)
		return (NULL);
	ft_bzero(space, max);
	return (space);
}

/* 
DESCRIPTION
- allocates memory for an array of nmemb elements of size bytes each and 
  returns a pointer to the allocated memory.
- The memory is set to zero.

RETURN VALUE
- If nmemb or size is  0, returns either NULL, or a pointer value that 
  can later be passed to free().
- If nmemb * size result in integer overflow, calloc() returns an error.
- return a pointer to the allocated memory.
- On error, return NULL.
*/

/* 
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int		*arr;
    size_t	nmemb = 10;
	//size_t	nmemb = SIZE_MAX / sizeof(int) + 1;
    size_t	size = sizeof(int);

    arr = ft_calloc(nmemb, size);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
	size_t i = 0;
    while (i < nmemb)
	{
        arr[i] = i;
        i++;
    }
    printf("Allocated array elements:\n");
    i = 0;
    while (i < nmemb)
	{
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    free(arr);
    return 0;
}
*/
