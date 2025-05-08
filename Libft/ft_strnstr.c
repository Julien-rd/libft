/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:51:26 by jromann           #+#    #+#             */
/*   Updated: 2025/05/08 13:36:56 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//HelloHello lo  14

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	ii;

	i = 0;
	k = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		if (big[i] == little[k])
		{
			if (!k)
				ii = i;
			k++;
		}
		else
			k = 0;
		if (!little[k])
			return ((char *)&big[ii]);
		i++;
	}
	return (NULL);
}
