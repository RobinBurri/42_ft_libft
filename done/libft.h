#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
/*Les valeurs renvoyées sont non nulles si le caractère c entre dans la catégorie testée, et zéro sinon.*/

int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);

void    ft_bzero(void *s, size_t n);
/*ft_bzero() met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s.*/  

size_t  ft_strlen(const char *s);
/*ft_strlen() calcule la longueur de la chaîne de caractères s, sans compter l'octet nul « \0 » final.*/

size_t  ft_strlcat(char *dest, const char *src, size_t size);
/* ft_strlcat ajoute la chaîne src, terminée par un caractère nul,
à la chaîne dest en copiant au plus size-strlen(dest)-1 depuis src et
ajoute un octet nul en fin de chaîne au résultat sauf si size est inférieur à strlen(dest). 
La fonction renvoie la longueur de la chaîne que strlcat() a essayé de créer. 
Si la valeur renvoyée est supérieure à size, c’est qu’il y a eu perte de données.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*ft_strnstr() est identique sauf qu'elle ne cherche que les len (au plus) premiers caractères de meule_de_foin et aiguille.*/

int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*ft_strncmp() est identique sauf qu'elle ne compare que les n (au plus) premiers caractères de s1 et s2.*/

char    *ft_strdup(const char *s);
/*ft_strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s.
La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3),
et peut (doit) donc être libérée avec free(3). 
ft_strdup() renvoie un pointeur sur la chaîne dupliquée, ou NULL s'il n'y avait pas assez de mémoire.*/ 

char	*ft_strchr(const char *s, int c);
/*ft_strchr() renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s. 
Elle renvoit un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé. */

char	*ft_strrchr(const char *s, int c);
/*ft_strrchr() renvoie un pointeur sur la dernière occurrence du caractère c dans la chaîne s. 
Elle renvoit un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé. */

void	*ft_memcpy(void *dst, const void *src, size_t n);
/*ft_memcpy() copie n octets depuis la zone mémoire src vers la zone mémoire dest.*/ 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/*Copy a NUL terminated string into a sized buffer
return the total length of the string they tried to create.*/

void	*ft_calloc(size_t count, size_t size);
/*calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de taille size octets, et renvoie un pointeur vers la mémoire allouée.
Cette zone est remplie avec des zéros. Si nmemb ou size vaut 0,
calloc() renvoie soit NULL, soit un pointeur unique qui pourra être passé ultérieurement à free() avec succès. */

void	*ft_memmove(void *dest, const void *src, size_t n);
/*ft_memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest. 
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient d'abord copiés dans une zone
temporaire qui ne chevauche ni src ni dest, et les octets sont ensuite copiés de la zone temporaire vers dest.*/

void	*ft_memset(void *b, int c, size_t len);
/*ft_memset() remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c. */

void	*ft_memchr(const void *s, int c, size_t n);
/*ft_memchr() examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c.
Le premier octet correspondant à c (interprété comme un unsigned char) arrête l'opération.
Elle renvoit un pointeur sur l'octet correspondant, ou NULL si le caractère n'est pas présent dans la zone de mémoire concernée.*/

int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*ft_memcmp() compare les n premiers octets des zones mémoire s1 et s2.
Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, égale ou supérieur à s2. */

int		ft_atoi(const char *str);
/*ft_atoi() convertit la chaîne pointée par str en entier de type int */



#endif
