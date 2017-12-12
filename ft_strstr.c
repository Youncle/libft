/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcarstoc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:20:32 by vcarstoc          #+#    #+#             */
/*   Updated: 2017/12/12 23:18:38 by vcarstoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *bg, const char *sm)
{
	int		i;
	int		j;
	int		k;
	int		true;

	if (!ft_strlen(sm))
			return ((char *)bg);
	i = -1;
	true = 0;
	while (bg[++i] && !true)
	{
		if (bg[i] == sm[0])
		{
			j = 0;
			k = i;
			true = 1;
			while (sm[j])
				if (sm[j++] != bg[k++])
					true = 0;
			if (true)
					return ((char *)bg + i);
		}
	}
	return (NULL);
}

