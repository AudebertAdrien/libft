/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:46:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 17:08:44 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int n1 = -2147483648;
	int n2 = -123;
	int n3 = 999;
	int n4 = 0;
	int n5 = 1;
	char n6 = 'o';

	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
	printf("%s\n", ft_itoa(n3));
	printf("%s\n", ft_itoa(n4));
	printf("%s\n", ft_itoa(n5));
	printf("%s\n", ft_itoa(n6));
	return (0);
}
