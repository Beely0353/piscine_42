/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:30:52 by baroun            #+#    #+#             */
/*   Updated: 2021/09/17 11:59:48 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return (str);
}
