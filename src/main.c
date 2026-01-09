#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);

	// 1. Parsing
	parse_init(&stack_a, argc, argv);

	// 2. Se já estiver ordenado, sai
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}

	// 3. Indexação (CRUCIAL para o Radix)
	index_stack(&stack_a);

	// 4. Seleção do Algoritmo
	if (stack_size(stack_a) == 2)
		sa(&stack_a, 1);
	else if (stack_size(stack_a) == 3)
		sort_three(&stack_a);
	else
		sort_radix(&stack_a, &stack_b);

	// 5. Limpeza
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}