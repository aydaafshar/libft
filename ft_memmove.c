#include <stddef.h>
#include <stdio.h>

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
int	main(void)
{
	char	dest[] = "ayda khar ast";
	char	src[] = "aliegtyhj";

	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
