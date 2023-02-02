/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:06:17 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/02 16:19:39 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c , size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while(n--)
		*ptr++ = c;	
	return (s);
}
