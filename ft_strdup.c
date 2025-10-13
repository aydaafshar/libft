/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:09:51 by ayda              #+#    #+#             */
/*   Updated: 2025/10/12 19:25:46 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*array;
	size_t	i;

	str_len = ft_strlen(str);
	array = (char *)malloc((str_len + 1) * sizeof(char));
	i = 0;
	if (array == NULL)
		return (NULL);
	while (i < str_len)
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
