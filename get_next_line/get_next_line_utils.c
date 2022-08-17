#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	size_t			i;
	char			*dest;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		write(1, "m", 1);
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*get_line(int fd, char *line)
{
	char		*s;
	int			i;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	s = malloc (sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		s[i] = line[i];
		i++;
	}
	if (line[i] == '\n') {
		s[i] = line[i];
	}
	s[i] = '\0';
	return (s);
}

char	*clear_and_get_next_start(char *line)
{
	int			i;
	int			j;
	char		*s;

	i = 0;
	while(line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	s = malloc (sizeof(char) * (ft_strlen(line) -1) + i);
	if (!s)
		return (NULL);
	i++;
	j = 0;
	while (line[i])
		s[j++] = line[i++];
	s[j] = '\0';
	free(line);
	return (s);
}