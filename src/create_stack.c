/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:21:44 by ashirzad          #+#    #+#             */
/*   Updated: 2024/09/15 18:51:23 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	append_stack(t_stack **stack_a, int value)
{
	t_stack	*stack_t;

	stack_t = *stack_a;
	if (!stack_t)
	{
		*stack_a = malloc(sizeof(t_stack));
		(*stack_a)->data = value;
		(*stack_a)->index = -1;
		(*stack_a)->next = NULL;
	}
	else
	{
		while (stack_t->next)
			stack_t = stack_t->next;
		stack_t->next = malloc(sizeof(t_stack));
		stack_t->next->data = value;
		stack_t->next->index = -1;
		stack_t->next->next = NULL;
	}
}

void	create_stack(int args, char **argv, t_stack **stack_a)
{
	int	i;

	i = 1;
	while (i < args)
	{
		append_stack(stack_a, ft_atoi(argv[i]));
		i++;
	}
}
