#include "../utils.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == ':');
}

int	ft_count_word(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			count++;
			while (*str && !ft_isspace(*str))
				str++;
		}
		i++;
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char **arr = (char **)malloc(sizeof(char **) * (ft_count_word(str) + 1));
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		if (str[i] && !ft_isspace(str[i]))
		{
			arr[i] = malloc_word(str);
			i++;
			while (str[i] && !ft_isspace(str[i]))
				i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}