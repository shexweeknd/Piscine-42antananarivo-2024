#include "../utils.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strndup(char *src, char *dest)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	dest[i] = src[i];
	return (dest);
}