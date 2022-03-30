/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:30:34 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/10 17:46:11 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		dst = malloc (0);
		*dst = '\0';
		return (dst);
	}
	else if (len < (ft_strlen(s) + 1 - start))
		dst = malloc(len + 1);
	else
		dst = malloc (ft_strlen(s) + 1 - start);
	if (!dst)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
