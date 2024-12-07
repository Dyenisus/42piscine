/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:33:07 by yesoytur          #+#    #+#             */
/*   Updated: 2024/09/01 13:34:14 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i_upper;

	i = 0;
	i_upper = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i_upper == 1)
				str[i] -= 32;
			i_upper = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i_upper = 0;
		else
			i_upper = 1;
		i++;
	}
	return (str);
}
