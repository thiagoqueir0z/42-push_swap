#include "../include/push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d ", stack->value);
		stack = stack->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a = NULL;

	if (argc < 2) return (0);

	parse_init(&stack_a, argc, argv);

	ft_printf("Antes: ");
	print_stack(stack_a);

	// TESTE: Rotate A
	ra(&stack_a, 1);

	ft_printf("Depois: ");
	print_stack(stack_a);

	free_stack(&stack_a);
	return (0);
}