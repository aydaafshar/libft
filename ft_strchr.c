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
// 	char	str[] = "username: ayda , paswword: 1234";
// 	char	*s;
// 	char	*comma;
// 	char	*p;

// 	s = ft_strchr(str, ':');
// 	while (*s == ' ' || *s == ':')
// 		s++;
// 	comma = ft_strchr(s, ',');
// 	*comma = '\0';
// 	printf("%s\n", s);
// 	p = ft_strchr(comma + 1, ':');
// 	while (*p == ' ' || *p == ':')
// 		p++;
// 	printf("%s", p);
// 	return (0);
// }
