/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:44:55 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/05 18:02:50 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int q;

    a = 16;
    b = 3;
    ft_div_mod(a, b, &c, &q);
    printf("%d %d",c,q);
    return 0;
}