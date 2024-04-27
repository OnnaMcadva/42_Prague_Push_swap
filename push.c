/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:30:54 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 19:17:34 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_listsize(*stack_from) == 0)
		return (1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == 1)
		return (1);
	ft_putendl_fd("\t*\tpa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == 1)
		return (1);
	ft_putendl_fd("\t*\tpb", 1);
	return (0);
}
