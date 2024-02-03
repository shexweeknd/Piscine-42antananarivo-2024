#include "../utils.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*ftoa(char *path)
{
	int		fd;
	char	*read_buffer[1];
	char	*buffer;
	int		file_size;

	file_size = 0;
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		while (read(fd, read_buffer, 1))
			file_size++;
		close(fd);
	}
	fd = open(path, O_RDONLY);
	if (fd == 3)
	{
		buffer = malloc((file_size + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		read(fd, buffer, file_size);
		close(fd);
		buffer[file_size] = '\0';
		return (buffer);
	}
	return (NULL);
}

char	***ft_ftoa_dict(char *path)
{
	char	*raw_dict;
	char	**file_row;
	char	***array;
	int		i;

	raw_dict = ftoa(path);
	file_row = ft_split(raw_dict, );
	i = 0;
	while (file_row[i])
		i++;
	array = malloc((i + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (file_row)
	{
		array[i] = ft_split(file_row[i]);
		i++;
	}
	return (array);
}

/*fonctions a appeller dans main*/

#include <fcntl.h>
#include <stdio.h>

void	ft_conv_to_writen(char *str)
{
	int			i;
	int			fd;
	const char	*pathname;

	i = ft_atoi(str);
	// ouvrir le dictionnaire standard
	pathname = "./numbers.dict";
	fd = open(pathname, O_RDONLY);
}

void	ft_conv_to_writen_with_dict(char *pathname, char *str)
{
	int i;

	i = ft_atoi(str);
	printf("%i\n", i);

	// ouvrir le dictionnaire personnalise
	printf("%s\n", pathname);
}