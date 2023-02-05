/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:59:58 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 19:01:52 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!*s2 || !*s1)
		return (*s1 - *s2);
	while (*s2 || (*s1 && n--))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);	
		s2++;
		s1++;
	}
	return (0);
}
