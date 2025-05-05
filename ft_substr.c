/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:00:34 by jromann           #+#    #+#             */
/*   Updated: 2025/05/05 14:11:11 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (ft_strlen((char *)s) <= (int)start)
	{
		ptr[0] = 0;
		return (ptr);
	}
	while (++i < (int)len)
		ptr[i] = s[start++];
	ptr[i] = 0;
	return (ptr);
}
