/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:02:30 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/16 18:19:57 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_alphanum(char c)
{
	if (!(((c >= 'a') && (c <= 'z'))
			|| ((c >= 'A') && (c <= 'Z'))
			|| ((c >= 48) && (c <= 57))))
		return (0);
	return (1);
}

int	is_maj(char c)
{
	if (!((c >= 'A') && (c <= 'Z')))
		return (0);
	return (1);
}

int	is_min(char c)
{
	if (!((c >= 'a') && (c <= 'z')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_min(str[0]))
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i - 1]) && is_maj(str[i]))
			str[i] = str[i] + 32;
		else if (!is_alphanum(str[i - 1]) && is_min(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50] = "salut, vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
