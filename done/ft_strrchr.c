#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	size_t	i;

	tmp = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			tmp = (char *)s + i;
		i++;
	}
	if (s[i] == c)
		tmp = (char *)s + i;
	return (tmp);
}