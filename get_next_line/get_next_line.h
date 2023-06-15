/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:51:05 by masla-la          #+#    #+#             */
/*   Updated: 2021/12/01 10:58:55 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strchr(char *s, int c);

size_t	ft_strlen(char *s);

char	*ft_save(char *g);

#endif
