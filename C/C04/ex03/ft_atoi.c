/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:06:26 by baroun            #+#    #+#             */
/*   Updated: 2021/09/20 17:03:27 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (sign * result);
		else
			result = result * 10 + *str - 48;
		str++;
	}
	return (sign * result);
}
