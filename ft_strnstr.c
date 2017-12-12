/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:29:26 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 23:32:21 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bg, const char *sm, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(sm))
		return ((char *)bg);
	while (bg[++i] && i < len)
	{
		j = 0;
		if (bg[i] == sm[0])
		{
			k = i;
			found = 1;
			while (bg[k] && sm[j] && j < len && k < len)
					if (bg[k++] != sm[j++])
							found = 0;
			if (found && !sm[j])
					return ((char *)bg + i);
		}
	}
	return (NULL);
}
