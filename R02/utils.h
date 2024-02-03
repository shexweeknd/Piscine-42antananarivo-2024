
#ifndef UTILS_H
# define UTILS_H
/*
Ce header contient les fonctions utilitaires pour realiser le programme
*/

/*dict_manager.c*/
char	*ftoa(char *path);

char	***ft_ftoa_dict(char *path);

void	ft_conv_to_writen(char *str);

void	ft_conv_to_writen_with_dict(char *pathname, char *str);

/*ft_atoi.c*/
int		is_number(char c);

int		is_space(char c);

int		ft_atoi(char *str);

/*ft_putchar.c*/
void	ft_putchar(char c);

/*ft_putstr.c*/
void	ft_putstr(char *str);

/*ft_putwords.c*/
void	ft_put_words(char *g_dict);

/*ft_first.c*/
void	ft_first(char *str);

void	ft_second(char *str);

void	ft_third(char *str1, char *str2, char *str3, int rev_len);

void	ft_put(char *nb);

/*ft_split.c*/
int		ft_isspace(char c);

int		ft_count_word(char *str);

char	*malloc_word(char *str);

char	**ft_split(char *str, char *charset);

/*ft_strcat.c*/
char	*ft_strcat(char *src, char *dest);

/*ft_strcmp.c*/
int		ft_strcmp(char *s1, char *s2);

/*ft_strlen.c*/
int		ft_strlen(char *str);

/*ft_strndup.c*/
char	*ft_strndup(char *src, char *dest, int n);

/*manager.c*/
char	*ftoarr(char *path);

char	***ftoarr_dict(char *path);
#endif