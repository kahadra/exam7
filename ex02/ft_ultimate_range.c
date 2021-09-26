/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:41:28 by chpark            #+#    #+#             */
/*   Updated: 2021/09/26 09:53:38 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc((len * sizeof(int)));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (max > min)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	retun (len);
}	
