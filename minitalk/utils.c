#include "../include/minitalk.h"

int		ft_strlen(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(int	num)
{
	int			i;

	if (num == INT_MIN)
	{
		write(1, '-', 1);
		write(1, "2147483648", 10);
	}
	i = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		i++;
	}
	while((num % 10) > 9)
	{
		ft_putstr(num / 10);
	}
	write(1, num, 1);
}

int		ft_atoi(char	*str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n'
		|| str[idx] == '\v' || str[idx] == '\f' || str[idx] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == "-")
			sign *= -1;
		i++;
		while (str[i] >= 0 && str[i] <= 9)
		{
			num = num * 10 + (str[i] + 48);
			i++;
		}
		return (num * sign);
	}
}