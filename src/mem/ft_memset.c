/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:35:31 by mahkilic          #+#    #+#             */
/*   Updated: 2025/12/12 13:47:10 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*memory_block;

	i = 0;
	memory_block = (char *)s;
	while (i < n)
	{
		memory_block[i] = c;
		i++;
	}
	return (s);
}
