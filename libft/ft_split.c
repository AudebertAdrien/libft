/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:33:18 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/10 16:05:47 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}
	return(count);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	n;
	int	t;
	char	**tab;

	i = 0;
	t = 0;
	n = ft_count_words(s, c);
	tab = (char **)malloc((n + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c) // si i  est sur le debut dun mot
		{
			j = 1;
			while (s[i + j] && s[i + j] != c)
				j++;
			// i = debut du mot
			// j = longueur du mot	
			tab[t] = ft_substr(s, i, j);
			t++;
			i += j - 1; // dernier du mot
		}
		i++;							
	}
	tab[t] = NULL;
	return (tab);
}
