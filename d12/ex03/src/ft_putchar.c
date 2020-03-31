/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:46:56 by amalliar          #+#    #+#             */
/*   Updated: 2020/03/21 22:20:05 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_hexdump.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
