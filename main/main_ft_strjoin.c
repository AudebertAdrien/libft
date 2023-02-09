/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:19:52 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/09 12:22:06 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "toto";
	char *s2 = " fait du velo";
	
	char *s3 = "";
	char *s4 = "hello";	
	printf("%s", ft_strjoin(s1, s2));
	printf("\n");
	printf("%s", ft_strjoin(s3, s4));
	return (0);
}
