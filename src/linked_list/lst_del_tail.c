/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_tail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:51:31 by tday              #+#    #+#             */
/*   Updated: 2024/01/28 12:09:04 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	lst_del_tail(t_list *lst_head, void (*ft_del)(void*))
{
	t_list	*temp;
	t_list	*tail_node;

	if (!lst_head || !lst_head->next)
	{
		ft_printf(RED"lst_del_tail error\n"DEF);
		return ;
	}
	temp = lst_head;
	while (temp->next->next)
		temp = temp->next;
	tail_node = temp->next;
	temp->next = NULL;
	ft_del(tail_node->data);
	free_null(tail_node);
}
