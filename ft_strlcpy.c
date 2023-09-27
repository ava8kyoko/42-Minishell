// // #include "libft.h"

// #include <string.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t size_tocopy)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!src)
// 		return (0);
// 	if (size_tocopy == 0)
// 		return (ft_strlen(src));
// 	while (src[i] != '\0' && --size_tocopy)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src));
// }