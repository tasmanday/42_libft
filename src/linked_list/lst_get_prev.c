/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_get_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:31:27 by tday              #+#    #+#             */
/*   Updated: 2024/01/28 12:09:00 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*lst_get_prev(t_list **lst_head, t_list *curr)
{
	t_list	*prev;

	if (!lst_head || !*lst_head || !curr || curr == *lst_head)
	{
		ft_printf(RED"lst_get_prev error\n"DEF);
		return (NULL);
	}
	prev = *lst_head;
	while (prev->next != NULL && prev->next != curr)
		prev = prev->next;
	return (prev);
}
