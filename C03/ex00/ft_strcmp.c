/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaozdemi <kaozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:03:35 by kaozdemi          #+#    #+#             */
/*   Updated: 2024/02/11 17:06:30 by kaozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i] == s2[j] && (s1[i] != '\0' || s2[j] != '\0'))
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
