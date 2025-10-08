/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:00:27 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/08 18:15:57 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	p;
	size_t			i;

	p = (unsigned char)ch;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == p)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if ((unsigned char)str[i] == p)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "ayda khar ast.";
// 	char *s = ft_strchr(str, 'k');
// 	printf("%s", s);
// 	return (0);
// }
