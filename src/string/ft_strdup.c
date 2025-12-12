/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:11:22 by mahkilic          #+#    #+#             */
/*   Updated: 2025/12/12 13:49:14 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	size_t	len;

	len = ft_strlen(s);
	ns = (char *)malloc(len + 1);
	if (ns == 0)
		return (0);
	ft_strlcpy(ns, s, len + 1);
	return (ns);
}
