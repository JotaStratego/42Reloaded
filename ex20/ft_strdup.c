/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javialva <javialva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:28:33 by javialva          #+#    #+#             */
/*   Updated: 2024/06/10 01:03:39 by javialva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	len;
	char			*dup;

	len = 0;
	while (src[len] != '\0')
		len++;
	dup = (char *)malloc(sizeof(*dup) * (len + 1));
	len = 0;
	while (src[len] != '\0')
	{
		dup[len] = src[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
