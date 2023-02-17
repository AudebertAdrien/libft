/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:37:40 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/17 16:04:17 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void    ft_putstr2(char *s)
{
        write(1, "G", 1);
        return ;
}
*/

int	main(void)
{
	char *a = "a";
	char *b = "b";
	char *c = "c";
	
	t_list *t1 = ft_lstnew((void *)a);
	t_list *t2 = ft_lstnew((void *)b);
	t1->next = t2;
	t_list *t3 = ft_lstnew((void *)c);
	t2->next = t3;

	ft_lstmap(t1, NULL, NULL);
	return (0);
}
