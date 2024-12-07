/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:38:09 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/03 02:29:19 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	is_based(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i])
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == 32 || (base[i] <= 13 && base[i] >= 9))
			return (0);
		i++;
	}
	return (i > 1);
}

int	len_gth(char *base)
{
	int	length;

	length = 0;
	while (base[length] != '\0')
		length++;
	return (length);
}

void	ft_putnbr_base_recursive(unsigned int nbr, char *base, int length)
{
	if (nbr >= (unsigned int)length)
		ft_putnbr_base_recursive(nbr / length, base, length);
	ft_putchar(base[nbr % length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	if (!is_based(base))
		return ;
	length = len_gth(base);
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		ft_putnbr_base_recursive(nbr, base, length);
	}
	else if (nbr > length)
	{
		ft_putnbr_base_recursive((nbr / length), base, length);
		ft_putnbr_base_recursive((nbr % length), base, length);
	}
	else if (nbr <= length && nbr >= 0)
		ft_putchar(base[(nbr % length)]);
}

int main()
{
	ft_putnbr_base(-2147483648, "01");
}
