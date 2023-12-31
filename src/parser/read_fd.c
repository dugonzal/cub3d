/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:50:57 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/07/26 11:20:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

static int	len_fd(int fd, t_game *game)
{
	char	*line;
	int		i;

	line = get_next_line(fd);
	if (!line)
		free_error(game, "Invalid file: No line");
	i = 0;
	while (line)
	{
		i++;
		free(line);
		line = NULL;
		line = get_next_line(fd);
	}
	close(fd);
	return (i);
}

void	read_fd(t_game *game, int fd, char *av)
{
	char	*line;
	int		i;
	int		len;

	len = len_fd(fd, game);
	game->map->buffer = ft_calloc(sizeof(char *), len + 1);
	if (!game->map->buffer)
		free_error(game, "Invalid file: No buffer");
	fd = ft_open(av, 0);
	if (fd < 0)
		free_error(game, "Invalid file: fd < 0");
	line = get_next_line(fd);
	i = -1;
	while (line)
	{
		game->map->buffer[++i] = ft_strdup(line);
		free(line);
		line = NULL;
		line = get_next_line(fd);
	}
	i = 0;
	while (game->map->buffer[i])
		i++;
	free (line);
	close(fd);
}
