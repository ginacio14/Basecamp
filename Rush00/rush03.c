/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginacio- <ginacio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:49:07 by mmoura-c          #+#    #+#             */
/*   Updated: 2021/04/03 19:48:11 by ginacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			if (w == 1 && (h == 1 || h == y))
				ft_putchar('A');
			else if (w == x && (h == 1 || h == y))
				ft_putchar('C');
			else if (w == 1 || w == x || h == 1 || h == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
