/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:35:24 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/02 21:01:48 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_small(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (0);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0' && s2[i] != '\0')
		return (0);
	else
		return (1);
}

void	ft_reorder_elements(char **av, int ac)
{
	int		j;
	int		is_swapped;
	char	*temp;

	is_swapped = 1;
	while (is_swapped)
	{
		is_swapped = 0;
		j = 1;
		while (j < ac - 1)
		{
			if (ft_is_small(av[j], av[j + 1]))
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
				is_swapped = 1;
			}
			j++;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		ft_reorder_elements(av, ac);
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				ft_putchar(av[i][j]);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
