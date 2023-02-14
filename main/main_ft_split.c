/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:32:08 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/14 13:36:14 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s1 = "to\nfan\ndu\nvelo\n";
	char	*s2 = "\ntoto\na la\nmaison";
	char	*s3 = "\naie\naie\n";
	char	c = '\n';
	
	char **s;
	int i = 0;
	s = ft_split(s2, c);
	while (s[i])
	{
		printf(":%s:\n", s[i]);
		i++;
	}
	printf("\n");
	printf("%p", ft_split(s2, c));
	printf("\n");
	printf("%p", ft_split(s3, c));
	printf("\n");
	return (0);
}

