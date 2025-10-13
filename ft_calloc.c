/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:50:47 by ayda              #+#    #+#             */
/*   Updated: 2025/10/12 20:29:02 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*array;
	size_t	i;

	array = (char *)malloc(n * size);
	i = 0;
	if (n == 0 || size == 0)
		return (malloc(0));
	if ((n * size) / n != size)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < (n * size))
	{
		array[i] = 0;
		i++;
	}
	return ((void *)array);
}

// int	main(void)
// {
// 	char	*array;
// 	int		i;

// 	array = ft_calloc(7, 4);
// 	i = 0;
// 	for (i = 0; i < 7; i++)
// 	{
// 		printf("%d\n", array[i]);

// 	}
// 	return (0);
// }
