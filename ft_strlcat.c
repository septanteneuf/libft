/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:52:21 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/15 18:34:31 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (dstsize == 0 || sizedst >= dstsize)
		return (sizesrc + dstsize);
	while (*dst != '\0' && --dstsize > 0)
		dst++;
	while (*src != '\0' && --dstsize > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (sizedst + sizesrc);
}
