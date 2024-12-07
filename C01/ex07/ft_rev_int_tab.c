/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:18:09 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/24 16:48:29 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	cup;

	first = 0;
	while (size > first)
	{
		cup = tab[size - 1];
		tab[size - 1] = tab[first];
		tab[first] = cup;
		first++;
		size--;
	}
}
