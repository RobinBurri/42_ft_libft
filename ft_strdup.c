#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char *ret;
    
    i = 0;
    len = ft_strlen(s);
    ret = (char *)malloc((len + 1) * sizeof(char));
    if (ret == NULL)
        return (NULL);
    ft_strcpy(ret, s);
    return (ret);
}