/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:31:14 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 19:18:07 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_listsize(*stack) < 2)
		return (1);
	head = *stack;
	tail = ft_listlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == 1)
		return (1);
	ft_putendl_fd("\t*\tra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == 1)
		return (1);
	ft_putendl_fd("\t*\trb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ra(stack_a) == 1 || rb(stack_b) == 1))
		return (1);
	ft_putendl_fd("\t*\trr", 1);
	return (0);
}
