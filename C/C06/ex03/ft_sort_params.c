/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:36:54 by baroun            #+#    #+#             */
/*   Updated: 2021/09/23 19:57:09 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *tab1, char *tab2)
{
	char	*tmp;

	tmp = tab1;
	tab1 = tab2;
	tab2 = tmp;
}

void	ft_ascii_ordre(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strncmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}	
			j++;
		}
		i++;
	}
}

void	ft_print_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_ascii_ordre(argv);
	ft_print_arg(argc, argv);
	return (0);
}
