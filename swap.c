/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:31:58 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 19:18:30 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_listsize(*stack) < 2)
		return (1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		ft_error("Error occured while swapping!");
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == 1)
		return (1);
	ft_putendl_fd("\t*\tsa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == 1)
		return (1);
	ft_putendl_fd("\t*\tsb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if ((sa(stack_a) == 1 || sb(stack_b) == 1))
		return (1);
	ft_putendl_fd("\t*\tss", 1);
	return (0);
}
