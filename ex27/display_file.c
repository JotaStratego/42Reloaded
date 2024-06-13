/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:44:22 by javialva          #+#    #+#             */
/*   Updated: 2024/06/13 16:40:00 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024

void	print_file(char const *name)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_file(argv[1]);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
