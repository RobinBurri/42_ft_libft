#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_isspace(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
/*ft_memccpy() copie au plus n octets de la zone mémoire src vers la zone mémoire dest, 
s'arrêtant dès qu'elle rencontre le caractère c.
ft_memccpy() renvoie un pointeur sur le caractère immédiatement après c dans la zone dest,
ou NULL si c n'a pas été trouvé dans les n premiers caractères de src. */

void	*ft_memalloc(size_t size);
/*Alloue avec malloc et retourne une zone de memoire. La memoire allouee est initialisee a 0.*/

char    *ft_strcpy(char *dest, const char *src);
/*Copie la chaine pointee par src (y compris le '\0') dans la chaine dest.
La chaine dest doit etre assez grande pour accueillir la copie.*/

char    *ft_strncpy(char *dest, const char *src, size_t n);
/*identique a ft_strcpy, sauf que seuls les n premiers octets de src sont copiés. 
Avertissement : s'il n'y a pas d'octet nul dans les n premiers octets de src,
la chaîne résultante dans dest ne disposera pas d'octet nul final.
Dans le cas où la longueur de src est inférieure à n,
la fin de dest sera remplie avec des octets nuls.*/

char    *ft_strncat(char *dest, const char *src, size_t n);
 /*ft_strncat() est identique, à la différence que
    elle ne prend en compte que les n premiers caractères de src ; et 
    src n'a pas besoin d'octet nul final si elle contient n caractères ou plus.*/

int		ft_strcmp(const char *s1, const char *s2);
/*ft_strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier négatif, nul, ou positif,
si s1 est respectivement inférieure, égale ou supérieure à s2.*/

void	*ft_memset(void *b, int c, size_t len);
/*ft_memset() remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c. */

char    *ft_strcat(char *dest, const char *src);
/*ft_strcat() ajoute la chaîne src à la fin de la chaîne dest en écrasant le caractère nul (« \0 ») à la fin de dest,
puis en ajoutant un nouveau caractère nul final.
La chaîne dest doit être assez grande pour accueillir le résultat.*/

char    *ft_strstr(const char *haystack, const char *needle);
/*ft_strstr() cherche la première occurrence de la sous-chaîne aiguille au sein de la chaîne meule_de_foin.
Les caractères « \0 » de fin ne sont pas comparés.*/

