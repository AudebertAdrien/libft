/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:48:42 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/13 14:35:47 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(unsigned int e, char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char *s = "toto";
	void	(*f)(unsigned int, char);
	
	f = &ft_putchar;	
	ft_strmapi(s, f);
	return (0);
}
