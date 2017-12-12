
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sgn;

	i = 0;
	nb = 0;
	sgn = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sgn = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i]>= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i] - '0');
	return (nb * sgn);
}
