/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboehm <aboehm@42adel.org.au>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:08:39 by aboehm            #+#    #+#             */
/*   Updated: 2021/12/11 13:24:36 by aboehm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int main()
{
	ft_printf("\nPid is: %d\n", getpid());
	while (1)
	{
		sleep(1);
		ft_printf("\n\n\n\n\n\n\n\n\nWaiting for connection.\n");
		sleep(1);
		ft_printf("\n\n\n\n\n\n\n\n\nI wont sleep no more.\n");
		sleep(1);
	}
}
