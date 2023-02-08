/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:35:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/08 12:31:16 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size / size != nmemb)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
