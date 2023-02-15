/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lftsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:58:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/15 19:24:26 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list *t1 = ft_lstnew(NULL);
	t_list *t2 = ft_lstnew(NULL);
	t2->next = t1;
	t_list *t3 = ft_lstnew(NULL);
	t3->next = t2;
	
	ft_lstsize(t3);	
	return (0);
}
