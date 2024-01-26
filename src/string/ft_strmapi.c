/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:35:35 by tday              #+#    #+#             */
/*   Updated: 2024/01/26 09:39:17 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	Summary
	applies the function 'f' to each character of the given string.
	allocates memory and returns a new modified string.

	Inouts
	str = original string.
	f = function to be applied to characters in string.

	Outputs
	result = new modified string.
*/
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!str || !f)
		return (NULL);
	result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
