#include "get_next_line.h"

char	*ft_read_to_left_str(int fd, char *line)
{
	char		*buff;
	int			rd_bytes;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(line, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if(rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		
		buff[rd_bytes] = '\n';
		line = ft_strjoin(buff, line);
	}
	free(buff);
	return (line);
}

char	*get_next_line(int fd)
{
	static char		*line;
	char			*s;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_read_to_left_str(fd, line);
	if (!line)
		return (NULL);
	s = get_line(fd, line);
	line = clear_and_get_next_start(line);
	return (s);
}