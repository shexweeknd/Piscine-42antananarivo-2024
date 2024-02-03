#include "../utils.h"

void	ft_put_words(char *g_dict)
{
	int	i;

	i = 0;
	while (g_dict[i] != '\0')
	{
		if (ft_strcmp(g_dict[i][0], c) == 0)
			ft_putstr(g_dict[i][1]);
		i++;
	}
}

void	ft_first(char *str)
{
	if (*str != '\0')
	{
		ft_put_words(ft_strndup(str, 1));
		ft_putstr(" ");
		ft_put_words("100");
	}
	ft_putstr(" ");
}

void	ft_second(char *str)
{
	if (*str == '1')
	{
		ft_put_words(ft_strndup(str, 1));
		ft_putstr("0");
	}
	ft_putstr(" ");
}

void	ft_third(char *str1, char *str2, char *str3, int rev_len)
{
	int	j;

	if (rev_len != 1 && rev_len != -10)
	{
		j = 0;
		if (!(*str3 == '0' && *str2 == '0' && *str1 == '0'))
		{
			if (*str3 != '0')
				ft_put_words(ft_strndup(str3, 1));
			ft_putstr(" ");
			while (j < rev_len - 1)
			{
				j++;
			}
			ft_put_words(ten_multiple(j));
		}
	}
	else if (*str2 != '1' && *str3 != '0')
	{
		ft_put_words(ft_strndup(str3, 1));
	}
	else if (rev_len == -10)
		ft_put_words("0");
	ft_putstr(" ");
}

void	ft_put(char *nb)
{
	int i;

	if (lenght == 1 && nb[0] == '0')
		ft_third("0", "0", "0", -10);
	else
	{
		i = 0;
		while (i < lenght)
		{
			rev_len = (ln - 1) if ((rev_len % 3) == 0) ft_first(&nb[i]);
			else if ((rev_len % 3) == 2) ft_second(&nb[i]);
			else if ((rev_len % 3) == 1) ft_third(&nb[i - 2], &nb[i - 1],
				rev_len);
			i++;
		}
	}
}