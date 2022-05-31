#include <get_next_line.h>

char	*ft_strchr(char *str, int c)
{
	size_t			i;
	char			*dest;

	i = 0;
	while (str[i] != '\0')
	{
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

char	*ft_strjoin(char *str1, char *str2)
{
	char		*merged;
	size_t		i;
	size_t		j;

	merged = malloc((sizeof(char)) *(ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!merged)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		str[i] = merged[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		str2[j] = merged[i];
		j++;
		i++;
	}
	merged[i] = '\0';
	free(str1);
	return (merged);
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
	int			i
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