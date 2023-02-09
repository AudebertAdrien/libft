/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:28:03 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/09 17:22:53 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*set1 = " ";

	char	s2[] = "lorem ipsum dolor sit amet";
	char	*set2 = "te";

	char	s3[] = "lorem ipsum dolor sit amet";
	char	*set3 = "l ";

	char	*s4 = ".,toto,.";
	char	*set4 = ".,";

	printf("%s", ft_strtrim(s1, set1));
	return (0);
}
