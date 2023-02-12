/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:48:11 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 15:22:32 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_number(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int	count;
	int	tmp = n;	
	unsigned int s = 0;

	if (!n)
		return (NULL);

	count = count_number(n);

	if (n <= -2147483648)
		s = (unsigned int)n;	

	if (s < 0)
		n = n *-1;	
	ptr = (char *)malloc(sizeof(char) * count + 1);
	if (!ptr)
		return (NULL);
	
	ptr[count] = '\0';
	count--;
	while (s != 0)
	{	
		ptr[count] = s % 10 + 48;	
		s = s / 10;
		count--;
	}	
	if (n < 0)
		ptr[0] = '-'; 
	return (ptr);
}
