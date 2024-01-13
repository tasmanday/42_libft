/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:50:58 by tday              #+#    #+#             */
/*   Updated: 2024/01/13 21:50:58 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/*
** structs
*/

/* linked lists */

/* singularly linked list */
typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

/* doubly linked list */
typedef struct s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

/*
** prototypes
*/

/* memory */

void	*ft_memset(void *pointer, int c, size_t n);
void	ft_bzero(void *pointer, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_calloc(size_t number, size_t size);

#endif