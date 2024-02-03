#include "../utils.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*ftoarr(char *path)
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
		buffer = malloc(sizeof(char) * (file_size + 1));
		if (!buffer)
			return (NULL);
		read(fd, buffer, file_size);
		close(fd);
		buffer[file_size] = '\0';
		return (buffer);
	}
	return (NULL);
}

char	***ftoarr_dict(char *path)
{
	char	*ft_dict;
	char	**ft_file;
	char	***arr;
	int		i;

	ft_dict = ftoarr(path);
	ft_file = ft_split(ft_dict, "\n");
	i = 0;
	while (ft_file[i])
		i++;
	arr = malloc(sizeof(char *) * i + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (ft_file[i])
	{
		arr[i] = ft_split(ft_file[i], ":");
		i++;
	}
	return (arr);
}
