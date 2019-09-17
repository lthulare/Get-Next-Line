#include "libft/libft.h"
#include "get_next_line.h"

char	*ft_strcut(char **ret, char *tmp, int c)
{
	int i;
	int p;

	p = 0;
	i = 0;
	while(tmp[i] != c)
	{
		(*ret)[i] = tmp[i];
		i++;
	}
	(*ret)[i] = '\0';
	while(tmp[i])
		tmp[p++] = tmp[i++];
	tmp[p] = '\0';
	return(tmp);
}


int	get_next_line(int fd, char **line)
{
	static char *hold;
	char *buff;
	int ret;
	char *tmp;
 
	if (fd < 0 || read(fd, buff, 0) < 0 ||  !line)
		return (-1);
	if(!(*line))
		*line = ft_memalloc(100000);
	if(!hold)
		hold = (char *)malloc(BUFF_SIZE + 1);
	buff = (char *)malloc(BUFF_SIZE + 1);
	if(hold[0])
		hold = ft_strcut(line, hold, '\n');	
	if(hold[0])
		return(1);
	while((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff = ft_strcut(line, buff, '\n');
		if (buff[0])
			break;
	}
	buff = ft_strcut(&hold, buff, '\0');
	if(ret == 0 && !hold[0])
		return(0);
	return(1);
}

