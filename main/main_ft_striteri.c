/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:05:28 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/16 17:01:57 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_putchar2(unsigned int e, char *c)
{
	write(1, c, 1);
	return(0);
}

int	main(void)
{
	char *s = "toto";
	char (*f)(unsigned int, char);
	
	f = &ft_putchar2;
	ft_striteri(s, f);
	return (0);
}
