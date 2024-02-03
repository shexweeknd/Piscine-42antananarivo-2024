/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:06:49 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/20 08:18:03 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
adresse X64 a afficher
*/

void	ft_put_addr(void *addr)
{
	unsigned int	i;
	char			b_data[sizeof(int *)];
	char			data[2];
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < sizeof(int *))
	{
		b_data[i] = ((char *)&addr)[i];
		i++;
	}
	i = sizeof(int *);
	while (i > 0)
	{
		data[0] = hex[((char)b_data[i - 1] >> 4) & 0xf];
		data[1] = hex[(char)b_data[i -1] & 0xf];
		write(1, data, 2);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_c_to_hex(int c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c >= 10)
	{
		write(1, &hex[c / 16], 1);
		write(1, &hex[c % 16], 1);
	}
	else if (c < 10 && c > 0)
	{
		write(1, "0", 1);
		write(1, &hex[c], 1);
	}
	else
		write(1, "00", 2);
}

void	ft_put_hex(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = addr;
	while (i < size)
	{
		if (str[i] != '\0')
		{
			ft_c_to_hex(str[i]);
			ft_c_to_hex(str[i + 1]);
		}
		else if (str[i] == '\0')
			write(1, "    ", 4);
		write(1, " ", 1);
		i += 2;
	}
}

void	ft_put_txt(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = addr;
	while (i < size)
	{
		if (str[i] != '\0')
		{
			if (str[i] < 32 || str[i] > 127)
				write(1, ".", 1);
			else
				write(1, &str[i], 1);
		}
		else if ((str[i] == '\0') && (str[i - 1] != '\0'))
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;	

	i = 0;
	while ((i < size) && (size != 0))
	{
		ft_put_addr(&addr[i]);
		ft_put_hex(&addr[i], 16);
		ft_put_txt(&addr[i], 16);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	char	*ptr;

	ptr = "Bonjour les aminches\t\n\tc\a est 
		fou\ttout\tce qu on peut faire avec\t\n\tprint_
		memory\n\n\n\tlol.lol\n \0";
	ft_print_memory(ptr, 96);
	return (0);
}
*/
