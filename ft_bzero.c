/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:00:43 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/17 15:34:14 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	s1[10] = "abcdef";

// 	ft_bzero(s1 + 2, 3);
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", (unsigned char)s1[i]);
// 	printf("\n");
// 	return (0);
// }
