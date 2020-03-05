#include"ALL.h"

void main()
{
	int i = 0;
	Node *head_node = Alloc_new_C_node();
	srand((unsigned int)time(NULL));

	for (i = 0; i < 33; i++)
	{
		Add_C_node_alphabet(head_node, i);
	}


	Alphabet_game_ver2(head_node);
	puts("");
	system("pause");
}