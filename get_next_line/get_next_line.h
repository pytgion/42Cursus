/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:29:52 by oakyuz            #+#    #+#             */
/*   Updated: 2022/09/08 16:40:20 by oakyuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

int			ft_strlen(char *str);
char		*ft_strchr(char *str, int c);
char		*ft_strjoin(char *str1, char *str2);
char		*get_line(char *str);
char		*ft_new_left_str(char *line);
char		*ft_read_to_left_str(int fd, char *str);

char		*get_next_line(int fd);

#endif