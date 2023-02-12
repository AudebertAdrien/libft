/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:37:32 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/12 19:22:37 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s = "lorem ipsu";
	char	*s2 = "";
	printf("%p",ft_substr(s, 1, 1));
	printf("\n");
	printf("%p",ft_substr(s, 7, 10));
	printf("\n");
	printf("%p",ft_substr(s, 0, 6));
	printf("\n");
	printf("%p",ft_substr(s2, 20, 0));
	printf("\n");
	return (0);
}
