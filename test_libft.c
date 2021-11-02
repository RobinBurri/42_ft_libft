#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_index(unsigned int i, char *c)
{
	*c = i % 10 + 48;
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
   	char *test6 = "Hello toto";
    char f = 't';
    printf("\033[0;35mSTRCHR\033[0;37m\n");
    if (ft_strchr(test6, f) == strchr(test6, f))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    f = 'a';
    if (ft_strchr(test6, f) == strchr(test6, f))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*STRRCHR*/
    test6 = "Hello toto";
    f = 't';
    printf("\033[0;35mSTRRCHR\033[0;37m\n");
    if (ft_strrchr(test6, f) == strrchr(test6, f))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    f = 'a';
    if (ft_strrchr(test6, f) == strrchr(test6, f))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");
   
    /*STRNSTR*/
    test6 = "orange, ananas, banane";
    test2 = "ana";
    int len;
    len = strlen(test6) + 1;
    printf("\033[0;35mSTRNSTR\033[0;37m\n");
    printf("ft_strnstr: %s\n", ft_strnstr(test6, test2, len));
    printf("strnstr: %s\n", strnstr(test6, test2, len));
    test6 = "orange, ananas, banane";
    test2 = "";
    printf("ft_strnstr: %s\n", ft_strnstr(test6, test2, len));
    printf("strnstr: %s\n", strnstr(test6, test2, len));

    /*STRNCMP*/
    test6 = "Hello toto";
    test2 = "Hello Toto";
    len = strlen(test6) + 1;
    printf("\033[0;35mSTRNCMP\033[0;37m\n");
    if (ft_strncmp(test6, test2, len) == strncmp(test6, test2, len))
        printf("test: 1 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 1 : \033[0;31mfail\n\033[0;37m");
    test2 = "";
    if (ft_strncmp(test6, test2, len) == strncmp(test6, test2, len))
        printf("test: 2 : \033[0;32mok\n\033[0;37m");
    else
        printf("test: 2 : \033[0;31mfail\n\033[0;37m");

    /*STRLCPY*/
    char dest1[50];
    char dest2[50];
    test6 = "Try to copy that";
    test2 = "Try to copy that";
    len = strlen(test6) + 1;
    size_t res1;
    size_t res2;
    printf("\033[0;35mSTRLCPY\033[0;37m\n");
    res1 = strlcpy(dest1, test6, len);
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
    test6 = "First this";
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
	char *z;
	char *t;
	z = strdup(test1);
	t = ft_strdup(test1);
	printf("test1 address: %p\n", test1);

	printf("libr address: %p\t %s\n", z, z);
	printf("mine address: %p\t %s\n", t, t);
	free(z);
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
	printf("\033[0;35mCALLOC\033[0;37m\n");
	b = calloc(10, 4);
	printf("%p\n%p\n", b, b + 10);
    free(b);
	b = ft_calloc(10, 4);
	printf("%p\n%p\n", b, b + 10);
	free(b);

	/*SUBSTR*/
	printf("\033[0;35mSUBSTR\033[0;37m\n");
	char *string1 = "allez c'est super de tester toutes ces fonctions";
	char *ft_sub;
	ft_sub = ft_substr(string1, 6, 25);
	printf("%s\n", ft_sub);
	free(ft_sub);

	/*STRJOIN*/
	printf("\033[0;35mSTRJOIN\033[0;37m\n");
	char *a = "first string";
	char *d = " + seconde string\n";
	char *c;
	c = ft_strjoin(a, d);
	printf("%s", c);
	free(c);
	
	/*FT_STRTRIM*/
	printf("\033[0;35mSTRTRIM\033[0;37m\n");
	char *res;
	res = ft_strtrim("tripouille   xxx", " x");
	printf("%zu\n", ft_strlen(res));
	printf("%s\n", res);
	free(res);
	res = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("%zu\n", ft_strlen(res));
	printf("%s\n", res);
	free(res);
	res = ft_strtrim("   xxxtripouille", " x");
	printf("%zu\n", ft_strlen(res));
	printf("%s\n", res);
	free(res);
	// /*STRMAPI*/
	// printf("\033[0;35mSTRMAPI\033[0;37m\n");

	// /*STRITERI*/
	// printf("\033[0;35mSTRITERI\033[0;37m\n");
	// i = 0;
	// char index[11];
	// while (i < 10)
	// {
	// 	index[i] = '0';
	// 	i++;
	// }
	// index[i] = '\0';
	// ft_striteri(index, char_to_index);
	// printf("%s\n", index);

	/*SPLIT*/
	printf("\033[0;35mSPLIT\033[0;37m\n");
	char x = 'e';
	char *yu = "C'est un string test!";
	char **sp;
	i = 0;
	sp = ft_split(yu, x);
	while (sp[i] != 0)
	{
		printf("%s\n", sp[i]);
		i++;
	}
	free(sp);
	i = 0;
	char * splitme = strdup("Tripouille");
	sp = ft_split(splitme, ' ');
	while (sp[i] != 0)
	{
		printf("%s\n", sp[i]);
		i++;
	}
	free(sp);
	free(splitme);
	

	/*ITOA*/
	printf("\033[0;35mITOA\033[0;37m\n");
	int n = -2147483647;
	char *rr;
	rr = ft_itoa(n);
	if (strcmp(rr, "-2147483647") == 0)
		printf("-2147483647: \033[0;32mok\n\033[0;37m");
	else
		printf("-2147483647: \033[0;31mfail\n\033[0;37m");
	free(rr);
	n = 0;
	rr = ft_itoa(n);
	if (strcmp(rr, "0") == 0)
		printf("0: \033[0;32mok\n\033[0;37m");
	else
		printf("0: \033[0;31mfail\n\033[0;37m");
	free(rr);
	n = 123456;
	rr = ft_itoa(n);
	if (strcmp(rr, "123456") == 0)
		printf("123456: \033[0;32mok\n\033[0;37m");
	else
		printf("123456: \033[0;31mfail\n\033[0;37m");
	free(rr);
	n = -123456;
	rr = ft_itoa(n);
	if (strcmp(rr, "-123456") == 0)
		printf("-123456: \033[0;32mok\n\033[0;37m");
	else
		printf("-123456: \033[0;31mfail\n\033[0;37m");
	free(rr);

	printf("\033[0;35mFD_PUTCHR\033[0;37m\n");
	printf("\033[0;35mFD_PUTENDL\033[0;37m\n");
	printf("\033[0;35mFD_PUTENDL\033[0;37m\n");
	printf("\033[0;35mFD_PUTSTR\033[0;37m\n");
	/*PUTCHR_FD*/
	int fd;
	fd = open("text.txt", O_RDWR | O_CREAT ,S_IRWXU , S_IROTH);
	if (fd == -1 )
		printf("OPEN ERR\n");
	ft_putchar_fd('$', fd);
	ft_putchar_fd('\n', fd);
	/*PUTSTR_FD*/
	char *fd_str = "hello there!";
	ft_putstr_fd(fd_str, fd);
	ft_putchar_fd('\n', fd);
	/*PUTENDL_FD*/
	char *fd_strendl = "this function print a new line.";
	ft_putendl_fd(fd_strendl, fd);
	/*PUTNBR_FD*/
	ft_putnbr_fd(-6534, fd);
	if (close(fd) == -1)
		printf("CLOSE ERR\n");
}

