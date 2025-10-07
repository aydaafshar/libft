#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t i = 0;

	src_len = ft_strlen(src);
	if (src == 0)
		return (0);
	;
	f(dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	return (src_len);
}