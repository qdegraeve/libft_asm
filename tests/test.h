#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

#define DEBUG printf("[-- file --> %s - line --> %d - function --> %s --]\n", __FILE__, __LINE__, __FUNCTION__);

void	ft_bzero(void *str, size_t len);
size_t	ft_strlen(const char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcat(char *s1, const char *s2);
