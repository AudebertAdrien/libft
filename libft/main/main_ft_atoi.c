/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:09:02 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 17:15:12 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "123";
	char *s2 = "  123";
	char *s3 = "123abc";
	char *s4 = "abc123";
	char *s5 = "-123";
	char *s6 = "+123";
	char *s7 = "--123";

	ft_atoi(s1);
	ft_atoi(s2);
	ft_atoi(s3);
	ft_atoi(s4);
	ft_atoi(s5);
	ft_atoi(s6);
	ft_atoi(s7);
	return (0);
}
