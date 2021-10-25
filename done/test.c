#include "libft.h"
#include <string.h>
#include <stdio.h>



int main()
{
    // isalpha
    char nonalpha = '@';
    char alpha = 'z';
    int res;

    res = ft_isalpha(nonalpha);
    printf("isalpha:\n");
    printf("no (0): %d\n", res);
    res = ft_isalpha(alpha);
    printf("yes (!0): %d\n", res);
}
