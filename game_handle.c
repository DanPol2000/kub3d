/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorse <chorse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:50:12 by chorse            #+#    #+#             */
/*   Updated: 2022/11/04 20:44:11 by chorse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"

int	close_game(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	exit(0);
}

void	start_game(t_game *game)
{
	game->win = mlx_new_window(game->mlx, DEF_W, DEF_H, "cub3d");
	draw_game(game);
}
