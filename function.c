/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraler <muraler@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:48:28 by muraler           #+#    #+#             */
/*   Updated: 2022/10/02 10:48:31 by muraler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_function(t_list **list_a, t_list **list_b, int argc, int *array)
{
	ft_check_dup(argc, array);
	ft_check_sort(list_a, argc);
	ft_array_sort(array, argc);
	ft_getting_index(list_a, array, argc);
	ft_go_to_sort(list_a, list_b, argc);
}
