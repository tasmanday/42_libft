/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:10:53 by tday              #+#    #+#             */
/*   Updated: 2024/01/28 12:09:34 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	lst_del_node(t_list **lst_head, t_list *node_to_del, \
	void (*ft_del)(void*))
{
	t_list	*prev;

	if (!lst_head || !*lst_head || !node_to_del)
	{
		ft_printf(RED"lst_del_node error\n"DEF);
		return ;
	}
	if (node_to_del == *lst_head)
		return (lst_del_head(lst_head, ft_del));
	prev = lst_get_prev(lst_head, node_to_del);
	if (!prev)
	{
		ft_printf(RED"lst_del_node -> lst_get_prev error\n"DEF);
		return ;
	}
	prev->next = node_to_del->next;
	ft_del(node_to_del->data);
	free_null(node_to_del);
}
