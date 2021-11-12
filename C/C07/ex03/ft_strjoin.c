/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:43:36 by baroun            #+#    #+#             */
/*   Updated: 2021/09/30 18:18:03 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_add(char *tab1, char **tab2, char *tab3, int size)
{
	int	i;
	int	j;
	int	h;

	j = 0;
	h = 0;
	while (j < size)
	{
		i = 0;
		while (tab2[j][i])
		{
			tab1[h] = tab2[j][i];
			i++;
			h++;
		}
		i = 0;
		while (tab3[i] && j < size - 1)
		{
			tab1[h] = tab3[i];
			i++;
			h++;
		}
		j++;
	}
	tab1[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		h;

	i = 0;
	h = 0;
	while (i > size)
	{
		h += ft_strlen(strs[i]);
		i++;
	}
	j = ft_strlen(sep);
	tab = malloc(h * sizeof(char *) * j);
	ft_add(tab, strs, sep, size);
	return (tab);
}
