#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int main()
{
    /*isalpha*/
    char *test = "Hello@12\t  54";
    int i = 0;
    printf("\033[0;35mISALPHA\033[0;37m\n");
    while (test[i])
    {
        if (ft_isalpha(test[i]) == isalpha(test[i]))
            printf("test: %c : \033[0;32mok\n\033[0;37m", test[i]);
        else
            printf("test: %c : \033[0;31mfail\n\033[0;37m", test[i]);
        i++;
    }
    /*isdigit*/
    test = "Hello@12\t 54";
    i = 0;
    printf("\033[0;35mISDIGIT\033[0;37m\n");
    while (test[i])
    {
        if (ft_isdigit(test[i]) == isdigit(test[i]))
            printf("test: %c : \033[0;32mok\n\033[0;37m", test[i]);
        else
            printf("test: %c : \033[0;31mfail\n\033[0;37m", test[i]);
        i++;
    }
    /*isalnum*/
    test = "Hello@12\t 54";
    i = 0;
    printf("\033[0;35mISALNUM\033[0;37m\n");
    while (test[i])
    {
        if (ft_isalnum(test[i]) == isalnum(test[i]))
            printf("test: %c : \033[0;32mok\n\033[0;37m", test[i]);
        else
            printf("test: %c : \033[0;31mfail\n\033[0;37m", test[i]);
        i++;
    }
    /*isascii*/
     test = "Hello@12\t  54";
    i = 0;
    printf("\033[0;35mISASSCCI\033[0;37m\n");
    while (test[i])
    {
        if (ft_isascii(test[i]) == isascii(test[i]))
            printf("test: %c : \033[0;32mok\n\033[0;37m", test[i]);
        else
            printf("test: %c : \033[0;31mfail\n\033[0;37m", test[i]);
        i++;
    }
    /*isprint*/
     test = "Hello@12\t  54";
    i = 0;
    printf("\033[0;35mISPRINT\033[0;37m\n");
    while (test[i])
    {
        if (ft_isprint(test[i]) == isprint(test[i]))
            printf("test: %c : \033[0;32mok\n\033[0;37m", test[i]);
        else
            printf("test: %c : \033[0;31mfail\n\033[0;37m", test[i]);
        i++;
    }

    /*strlen*/
     char *test1 = "Hello@12\t  54";
     char *test2 = "";
    printf("\033[0;35mSTRLEN\033[0;37m\n");
    if (ft_strlen(test1) == strlen(test1))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    if (ft_strlen(test2) == strlen(test2))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*STRCHR*/
    test1 = "Hello toto";
    char f = 't';
    printf("\033[0;35mSTRCHR\033[0;37m\n");
    if (ft_strchr(test1, f) == strchr(test1, f))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    f = 'a';
    if (ft_strchr(test1, f) == strchr(test1, f))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*STRRCHR*/
    test1 = "Hello toto";
    f = 't';
    printf("\033[0;35mSTRRCHR\033[0;37m\n");
    if (ft_strrchr(test1, f) == strrchr(test1, f))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    f = 'a';
    if (ft_strrchr(test1, f) == strrchr(test1, f))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");
   
    /*STRNSTR*/
    test1 = "orange, ananas, banane";
    test2 = "ana";
    int len;
    len = strlen(test1) + 1;
    printf("\033[0;35mSTRNSTR\033[0;37m\n");
    printf("ft_strnstr: %s\n", ft_strnstr(test1, test2, len));
    printf("strnstr: %s\n", strnstr(test1, test2, len));
    test1 = "orange, ananas, banane";
    test2 = "";
    printf("ft_strnstr: %s\n", ft_strnstr(test1, test2, len));
    printf("strnstr: %s\n", strnstr(test1, test2, len));

    /*STRNCMP*/
    test1 = "Hello toto";
    test2 = "Hello Toto";
    len = strlen(test1) + 1;
    printf("\033[0;35mSTRNCMP\033[0;37m\n");
    if (ft_strncmp(test1, test2, len) == strncmp(test1, test2, len))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    test2 = "";
    if (ft_strncmp(test1, test2, len) == strncmp(test1, test2, len))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*STRLCPY*/
    char dest1[50];
    char dest2[50];
    test1 = "Try to copy that";
    test2 = "Try to copy that";
    len = strlen(test1) + 1;
    size_t res1;
    size_t res2;
    printf("\033[0;35mSTRLCPY\033[0;37m\n");
    res1 = strlcpy(dest1, test1, len);
    res2 = ft_strlcpy(dest2, test2, len);
    if (strncmp(dest1, dest2, len) == 0)
        {
        printf("test: \033[0;32mok\n\033[0;37m");
        printf("%s\n", dest1);
        printf("%s\n", dest2);
        }
    else
        {
        printf("test: \033[0;31mfail\n\033[0;37m");
        printf("%s\n", dest1);
        printf("%s\n", dest2);
        }
    /*STRLCAT*/
    char dst1[50] = "\0"; 
    char dst2[50] = "\0";
    test1 = "First this";
    char *test1b = ", then that";
    test2 = "First this";
    char *test2b = ", then that";
    size_t re1;
    size_t re2;
    printf("\033[0;35mSTRLCAT\033[0;37m\n");
    strlcat(dst1, test1, 50);
    re1 = strlcat(dst1, test1b, 50);
    ft_strlcat(dst2, test2, 50);
    re2 = ft_strlcat(dst2, test2b, 50);
    if (strncmp(dst1, dst2, len) == 0)
        printf("test: \033[0;32mok\n\033[0;37m");
    else
        printf("test: \033[0;31mfail\n\033[0;37m");
    printf("libr: %s\n", dst1);
    printf("mine: %s\n", dst2);

    /*MEMSET*/
    void *b;
    b = malloc(sizeof(char) * 10);
    f = 'a';
    memset(b, f, 10);
    printf("\033[0;35mMEMSET\033[0;37m\n");
    printf("libr: %s\n", b);
    free(b);
    b = malloc(sizeof(char) * 10);
    ft_memset(b, f, 10);
    printf("mine: %s\n", b);
    free(b);

    /*MEMCHR*/
    test1 = "Hello toto";
    f = 't';
    printf("\033[0;35mMEMCHR\033[0;37m\n");
    if (ft_memchr(test1, f, 10) == memchr(test1, f, 10))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    f = 'a';
    if (ft_memchr(test1, f, 10) == memchr(test1, f, 10))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*MEMCMP*/
    test1 = "Hello toto";
    test2 = "Hello Toto";
    len = strlen(test1) + 1;
    printf("\033[0;35mMEMCMP\033[0;37m\n");
    if (ft_memcmp(test1, test2, len) == memcmp(test1, test2, len))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    test2 = "";
    if (ft_memcmp(test1, test2, len) == memcmp(test1, test2, len))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");
    
    /*MEMCPY*/
    char d1[50];
    char d2[50];
    test1 = "Try to copy that";
    test2 = "Try to copy that";
    len = strlen(test1) + 1;
    printf("\033[0;35mMEMLCPY\033[0;37m\n");
    memcpy(d1, test1, len);
    ft_memcpy(d2, test2, len);
    if (strncmp(d1, d2, len) == 0)
        {
        printf("test: \033[0;32mok\n\033[0;37m");
        printf("%s\n", d1);
        printf("%s\n", d2);
        }
    else
        {
    	printf("test: \033[0;31mfail\n\033[0;37m");
        printf("%s\n", d1);
        printf("%s\n", d2);
        }
    char tr[] = "we move this to that";
    memcpy(tr, tr + 8, 5);
    printf("%s\n", tr);
    char tr1[] = "we move this to that";
    ft_memcpy(tr1, tr1 + 8, 5);
    printf("%s\n", tr1);

    /*MEMMOVE*/
    char str[] = "we move this to that";
    printf("\033[0;35mMEMMOVE\033[0;37m\n");
    memmove(str, str + 8, 5);
    printf("%s\n", str);
    char str1[] = "we move this to that";
    ft_memmove(str1, str1 + 8, 5);
    printf("%s\n", str1);

    /*ATOI*/
	char *nbr = "    \t  -123465ut";
	int rta;
	int rtb;
	rta = atoi(nbr);
	rtb = ft_atoi(nbr);
	printf("\033[0;35mATOI\033[0;37m\n");
    if (rta == rtb)
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");

    /*STRDUP*/
	test1 = "Hello toto";
	printf("\033[0;35mSTRDUP\033[0;37m\n");
	char *s;
	char *t;
	s = strdup(test1);
	t = ft_strdup(test1);
	printf("test1 address: %p\n", test1);

	printf("libr address: %p\t %s\n", s, s);
	printf("mine address: %p\t %s\n", t, t);
	free(s);
	free(t);

    /*BZERO*/
    b = malloc(sizeof(char) * 10);
    f = 'a';
	i = 0;
    memset(b, f, 10);
    printf("\033[0;35mBZERO\033[0;37m\n");
    printf("libr: %s\n", b);
	bzero(b, 5);
	char *bstr;
	bstr = b;
	while (i < 10)
	{
		ft_putchar(bstr[i]);
		i++;
	}
	printf("\n");
    free(b);
    b = malloc(sizeof(char) * 10);
    ft_memset(b, f, 10);
    printf("mine: %s\n", b);
	ft_bzero(b, 5);
	bstr = b;
	i = 0;
	while (i < 10)
	{
		ft_putchar(bstr[i]);
		i++;
	}
	printf("\n");
    free(b);
    
	/*CALLOC*/
	
}

