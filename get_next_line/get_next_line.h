//
// Created by oguz_ on 19.05.2022.
//

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char 	*ft_strjoin(char *str1, char *str2)
char	*get_line(int fd, char *line);
char 	*clear_and_get_next_start(char *line);
char 	*get_next_line(int fd);

#endif
