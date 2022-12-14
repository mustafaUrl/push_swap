/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraler <muraler@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:49:13 by muraler           #+#    #+#             */
/*   Updated: 2022/10/02 10:49:16 by muraler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_list **left, t_list **right)
{
	t_list	*tmp;

	tmp = *left;
	*left = (*left)->next;
	tmp->next = *right;
	*right = tmp;
}

void	pa_pb(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_push(list_b, list_a);
		write(1, "pa\n", 3);
	}
	else
	{
		ft_push(list_a, list_b);
		write(1, "pb\n", 3);
	}
}

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
