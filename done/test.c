#include "libft.h"
#include <string.h>
#include <stdio.h>



int main()
{
    char *hay = "c'est donc ca la vie?";
    char *ned = "";

    char *ret1;
    char *ret2;
    ret1 = strstr(hay, ned);
    ret2 = ft_strstr(hay, ned);

    printf("lib: %s\n", ret1);
    printf("min: %s\n", ret2);

}
