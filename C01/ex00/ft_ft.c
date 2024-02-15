/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:23:35 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/15 01:42:49 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42; //dereference
}
#include <stdio.h>

int main()
{
	int number;
	ft_ft(&number); //reference
	printf("%d", number);
}