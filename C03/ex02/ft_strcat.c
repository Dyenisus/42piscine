/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesoytur <yesoytur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:30:39 by yesoytur          #+#    #+#             */
/*   Updated: 2024/08/26 16:17:28 by yesoytur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	counter_temp;

	counter = 0;
	counter_temp = counter;
	while (dest[counter] != '\0')
		counter++;
	while (src[counter_temp] != '\0')
	{
		dest[counter + counter_temp] = src[counter_temp];
		counter_temp++;
	}
	if (src[counter_temp] == '\0')
		dest[counter + counter_temp] = '\0';
	return (dest);
}
