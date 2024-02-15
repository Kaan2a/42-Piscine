/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 05:50:32 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/14 02:15:31 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_sqrt(int nb)
{
	long	index;
	long	x;

	x = nb;
	if (x <= 0)
		return (0);
	if (x == 1)
		return (1);
	index = 2;
	if (x >= 2)
	{
		while (index * index <= x)
		{
			if (index * index == x)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
