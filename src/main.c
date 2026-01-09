#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);

	// 1. Parsing
	parse_init(&stack_a, argc, argv);

	// 2. Verifica se já está ordenado
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}

	// 3. Indexação (CRUCIAL para sort_five e sort_radix)
	// Deve ser feita ANTES de escolher o algoritmo
	index_stack(&stack_a);

	// 4. Seleção do Algoritmo
	size = stack_size(stack_a);
	if (size == 2)
		sa(&stack_a, 1);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size <= 5)
		sort_five(&stack_a, &stack_b);
	else
		sort_radix(&stack_a, &stack_b);

	// 5. Limpeza Final
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}