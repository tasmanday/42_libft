/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_head.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:41:03 by tday              #+#    #+#             */
/*   Updated: 2024/01/28 12:09:01 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	lst_del_head(t_list **lst_head, void (*ft_del)(void*))
{
	t_list	*temp;

	if (!lst_head || !*lst_head)
	{
		ft_printf(RED"lst_del_head error\n"DEF);
		return ;
	}
	temp = *lst_head;
	temp = temp->next;
	ft_del((*lst_head)->data);
	free_null(*lst_head);
	*lst_head = temp;
}
