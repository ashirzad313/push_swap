/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:22:34 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:51:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

int	biggest_index(t_stack **stack_a)
{
	t_stack	*stack_t;
	int		index;

	stack_t = *stack_a;
	index = stack_t->index;
	while (stack_t->next)
	{
		if (index < stack_t->next->index)
			index = stack_t->next->index;
		stack_t = stack_t->next;
	}
	return (index);
}

int	max_index_bits(t_stack **stack_a)
{
	int	index;
	int	max;

	if (!(*stack_a))
		return (0);
	index = count_nodes(stack_a) - 1;
	max = 0;
	while (index >> max)
		max++;
	return (max);
}

int	count_nodes(t_stack **stack_a)
{
	t_stack	*stack_t;
	int		count;

	if (!(*stack_a))
		return (0);
	stack_t = *stack_a;
	count = 0;
	while (stack_t)
	{
		stack_t = stack_t->next;
		count++;
	}
	return (count);
}

void	bring_top(t_stack **stack_a, int index)
{
	if (index <= (count_nodes(stack_a) >> 1))
	{
		while (index-- > 0)
			ra(stack_a, "ra\n");
	}
	else
	{
		while (index++ < count_nodes(stack_a))
			rra(stack_a, "rra\n");
	}
}
