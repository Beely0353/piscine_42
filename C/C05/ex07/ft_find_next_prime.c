/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:18:27 by baroun            #+#    #+#             */
/*   Updated: 2021/09/28 15:35:00 by baroun           ###   ########.fr       */
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

int	ft_is_prime(int nb, int i)
{
	int	divider;

	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	divider = 3;
	while (divider <= i)
	{
		if ((nb % divider) == 0)
			return (0);
		divider += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = ft_sqrt(nb) + 1;
	if ((ft_is_prime(nb, i) || nb == 3))
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb, i))
		nb += 2;
	return (nb--);
}
