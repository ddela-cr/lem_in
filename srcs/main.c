/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddela-cr <ddela-cr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 13:49:45 by ddela-cr          #+#    #+#             */
/*   Updated: 2016/06/03 13:52:10 by ddela-cr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int main(void)
{
	t_lem_in	*data;

	data = ft_get_data();
	if (data == NULL)
	{
		ft_printf("ERROR\n");
		return (-1);
	}
	return (0);
}
