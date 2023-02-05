/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:54:47 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 15:54:41 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr1;
	char *ptr2;
	int size = 20;

	ptr1 = strnstr(largestring, smallstring, size);
	ptr2 = ft_strnstr(largestring, smallstring, size);
	return (0);
}
