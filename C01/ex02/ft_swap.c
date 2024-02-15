/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:34:51 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/15 02:09:47 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int **a, int **b)
{
	int	*tmp;

	*tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int x = "ghshg";
	int y = "hshfg";
	ft_swap(&x,&y);
	printf("%s %s",*x,*y);
}