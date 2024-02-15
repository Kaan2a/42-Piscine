/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 01:05:10 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/03 16:03:42 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	rev;

	rev = 0;
	x = 0;
	y = size -1;
	while (x < y)
	{
		rev = tab[x];
		tab[x] = tab[y];
		tab[y] = rev;
		x++;
		y--;
	}
}
