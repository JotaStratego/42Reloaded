/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:06:06 by javialva          #+#    #+#             */
/*   Updated: 2024/06/10 11:33:52 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*array;

	len = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	*array;
	int	i;
	int	len;

	i = 0;
	array = ft_range(0, 10);
	len = 10 - 0;
	while (i < len)
	{
		printf("%i", array[i]);
		if (i < len - 1)
			printf(", ");
		i++;
	}
	return (0);
}*/
