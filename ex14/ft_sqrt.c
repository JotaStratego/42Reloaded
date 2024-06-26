/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:44:00 by javialva          #+#    #+#             */
/*   Updated: 2024/06/07 18:22:27 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	pot;

	i = 1;
	pot = 1;
	if (nb < 1)
		return (0);
	else
	{
		while (pot <= nb)
		{
			pot = i * i;
			if (pot == nb)
				return (i);
			i++;
		}
		return (0);
	}
}
