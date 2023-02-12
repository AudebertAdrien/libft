/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:23:17 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 15:22:37 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_number(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;	
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	malloc_	

char	*ft_itoa(int n)
{
	int	sign;
	int	count;
	char	*ptr;

	if (n <= -2147483648)
	{
		ptr = malloc(12);
		ptr = "-2147483648";
	}
	else
	{
		count = count_number(n);
		sign = 1;
		ptr = (char *)malloc(sizeof(char) * count + 1); 
		if (n < 0)
		{
			sign *= -1;
			n *= sign;
			ptr[0] = '-';
		}
		ptr[count] = '\0';	
		while (count--)
		{			
			ptr[count] = n % 10 + 48;
			n /= 10;
		}
	}
	return (ptr);
}
