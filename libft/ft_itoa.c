/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:23:17 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 17:21:34 by aaudeber         ###   ########.fr       */
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

char	*generate_table(int count)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * count + 1); 
	return (ptr);
}	

unsigned int	convert_n(int n)
{
	unsigned int s;
	
	s = (unsigned int)n;
	if (n < 0)
		s = n * -1;;
	return (s);
}

char	*ft_itoa(int n)
{
	int	count;
	char	*ptr;
	unsigned int s;

	s = 0;
	count = count_number(n);
	s = convert_n(n);	
	ptr = generate_table(count);
	ptr[count] = '\0';
	while (count-- && n)
	{	
		ptr[count] = s % 10 + 48;
		s /= 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
