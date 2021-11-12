/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:19:40 by baroun            #+#    #+#             */
/*   Updated: 2021/09/23 12:29:57 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_verif(int nbr, char *base)
{
	int	size;

	size = -1;
	while (base[++size])
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1)
			|| (base[size] >= 9 && base[size] <= 13))
			return ;
}
