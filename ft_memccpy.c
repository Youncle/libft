/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:25:51 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 23:31:33 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *strdest;
	char *strsrc;

	strsrc = (char*)src;
	strdest = (char*)dest;
	while (n > 0 && *strsrc != c)
	{
		n--;
		*strdest++ = *strsrc++;
	}
	if (n > 0)
	{
		*strdest++ = *strsrc++;
		return ((void*)strdest);
	}
	else
		return (NULL);
}
