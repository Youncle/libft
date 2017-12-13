/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:01:38 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/13 12:17:15 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	if (n==0 || dest == src)
		return (dest);
	str1 = (char *)dest;
	str2 = (char *)src;
	while (--n)
		*str1++ = *str2++;
	*str1 = *str2;
	return (dest);
}
