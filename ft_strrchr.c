/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:30:00 by ayda              #+#    #+#             */
/*   Updated: 2025/10/10 19:33:58 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	s;
	size_t			i;
	size_t			str_len;

	i = 0;
	str_len = 0;
	s = (unsigned char)c;
	while (str[i])
	{
		i++;
	}
	str_len = i;
	while (i > 0)
	{
		i--;
		if ((unsigned char)str[i] == s)
		{
			return ((char *)&str[i]);
		}
	}
	if (s == '\0')
	{
		return ((char *)&str[str_len]);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "username: ayda , paswword: 1234";
// 	char *s;
// 	char *comma;
// 	char *p;
// 	size_t i = 0;
// 	p = ft_strrchr(str, ':');
// 	while (*p == ' ' || *p == ':')
// 		p++;
// 	while (str[i] && str[i] != ':')
// 	{
// 		i++;
// 	}
// 	s = (char *)&str[i + 1];
// 	while (*s == ' ')
// 	{
// 		s++;
// 	}
// 	comma = ft_strrchr(s, ',');
// 	if (comma)
// 	{
// 		*comma = '\0';
// 	}
// 	printf("%s\n", p);

// 	printf("%s", s);
// 	return (0);
// }