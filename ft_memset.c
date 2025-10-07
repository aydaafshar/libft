#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *str, int x, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = x;
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char str[] = "ayda khar ast";
// 	ft_memset(str, 'x', 4);
// 	printf("%s\n", str);
// 	return (0);
// }