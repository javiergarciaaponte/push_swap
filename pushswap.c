/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiegar <javiegar@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:57:33 by javiegar          #+#    #+#             */
/*   Updated: 2022/09/09 15:08:47 by javiegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	ft_atoi(const char *str);
	unsigned int	nb;
	int				value;
	int				positive;

	nb = 0;
	value = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\r'
		|| *str == '\f' || *str == '\t')
		str++;
	if (*str == '-')
		positive = -1;
	else
		positive = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	while (ft_isdigit(*str) && *str != '\0')
	{
		nb = (int)(*str - '0');
		value = (value * 10) + nb;
		str++;
	}
	return (value * positive);
}
