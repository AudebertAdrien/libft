/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:35:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 18:20:59 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The calloc() function allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory.  
	The memory is set to zero.  If nmemb or size is 0, then calloc() returns
	either NULL, or a unique  pointer  value  that can later be successfully 
	passed to free().  If the multiplication of nmemb and size
       	would result in integer overflow, then calloc() returns an error.	
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size / size != nmemb)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
