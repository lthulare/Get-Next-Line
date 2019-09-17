/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthulare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:34:05 by lthulare          #+#    #+#             */
/*   Updated: 2019/08/28 13:47:56 by lthulare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "get_next_line.h"
#include "libft/libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*s;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &s))
	{
		ft_putendl(s);
		free(s);
	}
	return (0);
}
