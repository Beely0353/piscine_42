/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:10:09 by baroun            #+#    #+#             */
/*   Updated: 2021/09/28 16:01:20 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	max -= min;
	i = 0;
	tab = malloc(max * sizeof(int));
	while (i < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
