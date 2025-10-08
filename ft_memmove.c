/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:01:46 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/08 14:01:47 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*x;

	i = 0;
	p = (unsigned char *)dest;
	x = (unsigned char *)src;
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
    if(p < x){

while (i < n)
	{
		p[i] = x[i];
		i++;
	}

    }else{
        while (i < n)
	{
		p[n-1-i] = x[n-1-i];
		i++;
	}
    }
	
	return (dest);
}
