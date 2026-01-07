#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*temp;

	stack_a = NULL;
	if (argc < 2)
		return (0);
	parse_init(&stack_a, argc, argv);
	ft_printf("Stack A criada com sucesso:\n");
	temp = stack_a;
	while (temp)
	{
		ft_printf("%d\n", (int)temp->value);
		temp = temp->next;
	}
	free_stack(&stack_a);
	return (0);
}