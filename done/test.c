#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
    char *hay = "c'est donc ca la vie?";
    char *ned = "ca la";

    printf("lib: %s\n", strstr(hay, ned));
    printf("min: %s\n", ft_strstr(hay, ned));


}