/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:51:03 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/03 13:51:12 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = dst;
	src2 = (unsigned char *)src;
	if (src2 < dst2)
	{
		dst2 += len - 1;
		src2 += len - 1;
		while (len--)
		{
			*dst2 = *src2;
			dst2--;
			src2--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
