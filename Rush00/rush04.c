/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joemanue <joemanue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:54:55 by mmoura-c          #+#    #+#             */
/*   Updated: 2021/04/04 16:18:54 by mmoura-c         ###   ########.fr       */
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
			if ((h == 1 && w == 1) || (h == y && w == x))
				ft_putchar('A');
			else if ((h == 1 && w == x) || (h == y && w == 1))
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
