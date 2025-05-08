/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:21:52 by jromann           #+#    #+#             */
/*   Updated: 2025/04/24 13:01:19 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;
	int	k;

	i = -1;
	k = -1;
	while (str[++i])
	{
		if (str[i] == chr)
			k = i;
	}
	if (k >= 0)
		return ((char *)&str[k]);
	if (str[i] == chr)
		return ((char *)&str[i]);
	return (0);
}
