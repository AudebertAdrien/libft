/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:20:14 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/04 11:04:05 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	int	dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	if (dst_size < 1)
		return (0);
	while (src[i] && i < size)
	{
		dst[dst_size + i] = src[i];	
		i++;
	}
	dst[i] = '\0';	
	return (i);
}
