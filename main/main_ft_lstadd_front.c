/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:16:46 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/15 18:56:56 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*first;
	t_list	*m_new;

	first = ft_lstnew(NULL);
	m_new = ft_lstnew(NULL);
	
	ft_lstadd_front(NULL, m_new);
	return (0);
}
