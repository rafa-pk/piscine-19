/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:31:17 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/20 15:44:16 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*last_node;

	new_node = ft_create_elem(data);
	if (begin_list == NULL)
	{
		*begin_list = new_node;
		return ;
	}
	last_node = ft_list_last(begin_list);
	last_node->next = new_node;
}
