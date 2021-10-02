#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i])
        i++;
    while (src[j] && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}