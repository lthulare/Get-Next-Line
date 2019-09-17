#include "get_next_line.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

int			main(int argc, char **argv)
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
	//sleep(30);
	return (0);
}
