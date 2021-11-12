/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:18:14 by baroun            #+#    #+#             */
/*   Updated: 2021/09/28 15:35:42 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	divider;
	int	i;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	i = ft_sqrt(nb) + 1;
	divider = 3;
	while (divider <= i)
	{
		if ((nb % divider) == 0)
			return (0);
		divider += 2;
	}
	return (1);
}
