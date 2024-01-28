/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:31:21 by tday              #+#    #+#             */
/*   Updated: 2024/01/28 08:40:52 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	Summary
	creates a new node for a linked list.

	Inputs
	data [void *]: a pointer to the data to be stored in the new node.

	Outputs
	new_node [t_list *]: a pointer to the new node.
*/
t_list	*lst_new_node(void *data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->data = data;
	new_node->next = 0;
	return (new_node);
}
