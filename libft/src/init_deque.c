/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_deque.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <mesafi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 09:02:49 by mesafi            #+#    #+#             */
/*   Updated: 2020/12/27 09:02:51 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque.h>

void	init_deque(t_deque *deque)
{
	deque->front = NULL;
	deque->rear = NULL;
	deque->size = 0;
}
