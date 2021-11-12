/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboughan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:55:25 by yboughan          #+#    #+#             */
/*   Updated: 2021/09/12 19:02:33 by yboughan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizontal(int h)
{
	int	i;

	i = 0;
	ft_putchar(111);
	if (h == 1 )
	{
		return ;
	}
	while (i < h - 2)
	{
		ft_putchar(45);
		i++;
	}
	ft_putchar(111);
}

void	vertical(int h)
{
	int	j;

	j = 0;
	ft_putchar(124);
	if (h == 1)
	{
		return ;
	}
	while (j < h - 2)
	{
		ft_putchar(32);
		j++;
	}
	ft_putchar(124);
}

int	check_pos(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}

void	rush(int x, int y)
{
	int	k;

	k = 0;
	if (x == 0 || y == 0)
	{
		return ;
	}
	x = check_pos(x);
	y = check_pos(y);
	horizontal(x);
	ft_putchar(10);
	if (y == 1)
	{
		return ;
	}
	while (k < y - 2)
	{
		vertical(x);
		ft_putchar(10);
		k++;
	}
	horizontal(x);
	ft_putchar(10);
}
