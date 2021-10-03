/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkasongo <jkasongo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:31:54 by jkasongo          #+#    #+#             */
/*   Updated: 2021/10/03 15:40:57 by jkasongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define SHELL_RED "\033[0;31m"
# define SHELL_YELLOW "\033[0;33m"
# define SHELL_END_COLOR "\033[m"
# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define RED 0xFF0000
# define ORANGE 0xFFA500
# define LIME 0x00FF00
# define BLUE 0x0000FF
# define YELLOW 0xFFFF00
# define CYAN 0x00FFFF
# define MAGENTA 0xFF00FF
# define SILVER 0xC0C0C0
# define GRAY 0x808080
# define MAROON 0x800000
# define OLIVE 0x808000
# define GREEN 0x008000
# define PURPLE 0x800080
# define TEAL 0x008080
# define NAVY 0x000080
# define TEXT_COLOR 0xEAEAEA
# define BACKGROUND 0x222222
# define MENU_BACKGROUND 0x1E1E1E
# define COLOR_DISCO 0x9A1F6A
# define COLOR_BRICK_RED 0xC2294E
# define COLOR_FLAMINGO 0xEC4B27
# define COLOR_JAFFA 0xEF8633
# define COLOR_SAFFRON 0xF3AF3D

// Encoding colors in trbg style t:transparency, r:red g:green, b:blue
int	ft_create_trgb(int t, int r, int g, int b);
// deccoding transparency in trgb
int	ft_get_transparency(int trgb);
int	get_red(int trgb);
int	get_green(int trgb);
int	get_blue(int trgb);

#endif
