#include"ALL.h"
/*
*�Լ� ����: Node * Alloc_new_C_node()
*���ϰ�: Node *
*����: Node *temp������ node�� �ʱ�ȭ �ؼ� �Ҵ��Ѵ�
*�޸�:
*/


Node *Alloc_new_C_node()
{
	Node *temp;

	temp = (Node*)malloc(sizeof(Node));
	temp->nData = 0;
	temp->pNext = NULL;

	return temp;
}

/*
*�Լ� ����: void Add_C_node_head(Node* head_node, int item)
*���ϰ�: void
*����: ��� ���� �־��ָ� �ش� ����Ʈ�� ���� �տ� ���� ��带 �߰��Ѵ�. �׸��� ���� ������ �ʱ�ȭ�Ѵ�.
*�޸�:
*/
void Add_C_node_head(Node* head_node, int item)
{
	Node *pointing_node = head_node;
	Node *temp = Alloc_new_C_node();
	temp->nData = item;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		pointing_node->pNext = temp;
		temp->pNext = pointing_node->pNext;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		while (pointing_node->pNext != head_node->pNext)//
		{
			pointing_node = pointing_node->pNext;
		}
		temp->pNext = pointing_node->pNext;
		pointing_node->pNext = temp;
	}

}
/*
*�Լ� ����: void Add_C_node(Node* head_node, int item)
*���ϰ�: void
*����: ��� ���� �־��ָ� �ش� ����Ʈ�� ���� �������� ���� ��带 �߰��Ѵ�. �׸��� ���� ������ �ʱ�ȭ�Ѵ�.
*�޸�:
*/
void Add_C_node(Node* head_node, int item, int num)
{
	Node *pointing_node = head_node;
	Node *temp = Alloc_new_C_node();
	temp->num = num;
	temp->nData = item;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		pointing_node->pNext = temp;
		temp->pNext = pointing_node->pNext;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			pointing_node = pointing_node->pNext;
		}
		temp->pNext = pointing_node->pNext;
		pointing_node->pNext = temp;
	}

}
/*
*�Լ� ����: void Print_Circular_node(Node *head_node)
*���ϰ�: void
*����: ����Ʈ�� ������ ����Ʈ�� ������ ����Ѵ�.
*�޸�:
*/
void Print_C_node(Node *head_node)
{
	Node *pointing_node = head_node;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		puts("����Ʈ�� ������ϴ�");
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			printf("%d ", pointing_node->nData);
			pointing_node = pointing_node->pNext;
		}
		printf("%d ", pointing_node->nData);
	}

}
/*
*�Լ� ����: void Print_C_node_Alphabet(Node *head_node)
*���ϰ�: void
*����: ����Ʈ�� ������ ����Ʈ�� ������ ���ĺ����� ����Ѵ�.
*�޸�:
*/
void Print_C_node_num(Node *head_node)
{
	Node *pointing_node = head_node;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		puts("����Ʈ�� ������ϴ�");
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			printf("%2d ", pointing_node->num);
			pointing_node = pointing_node->pNext;
		}
		printf("%2d ", pointing_node->num);
	}

}

void Print_C_node_Alphabet(Node *head_node)
{
	Node *pointing_node = head_node;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		puts("����Ʈ�� ������ϴ�");
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			printf("%2c ",  pointing_node->nData);
			pointing_node = pointing_node->pNext;
		}
		printf("%2c ", pointing_node->nData);
	}

}
/*
*�Լ� ����: int Count_Circular_node(Node *head_node)
*���ϰ�: int
*����: ����Ʈ�� ������ ����� ������ ī�����ϰ� �����Ѵ�.
*�޸�:
*/
int Count_C_node(Node *head_node)
{
	Node *pointing_node = head_node;
	int cnt = 0;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		return cnt;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			cnt++;
			pointing_node = pointing_node->pNext;
		}
		cnt++;
	}

	return cnt;
}
/*
*�Լ� ����: int Search_node(Node *head_node, int item)
*���ϰ�: int
*����: ��忡�� item�� ã�´�. ã���� �ش� ��ġ�� ����, ������ -1�� ����
*�޸�:
*/

int Search_C_node(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	int idx = 0;
	int result = FAIL;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		return result;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				result = idx;
				break;
			}
			pointing_node = pointing_node->pNext;//�����ȿ��� ���ϳ����� �̵� �Ѵ��� ��������
			//�������� ���� ���� pNext�� head_node�̹Ƿ� ������ ��������
		}
		idx++;
		if (pointing_node->nData == search)
			result = idx;
	}

	return result;
}
/*
*�Լ� ���� : int SI_node(Node *head_node, int item, int insert_left, int mode)
*���ϰ� : int ������ �ε����� �˷��ش�.
*���� : ��忡�� item�� ã�´�.ã���� �ش� ��ġ�� ��忡 ���󼭿� ���� ����, ������ - 1�� ����
*�޸� : ��� 0�� ����, 1�� ������, ����� ã�� ���ϸ� ���� ���� ����� �����ʿ� ������ ���� ����� ���ʿ� ���� ����
*/

int SI_node(Node *head_node, int search, int insert, int mode)//
{
	Node *pointing_node = head_node;
	Node *a;
	Node *temp = Alloc_new_C_node();
	temp->nData = insert;

	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		return result;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//���� ����

		while (pointing_node->pNext != head_node->pNext)//����Ʈ ������ ��ȸ
		{
			idx++;
			if (pointing_node->nData == search)//ã������
			{
				if (mode == 0)//���� ����
				{
					if (pointing_node == head_node->pNext)//����Ʈ�� ù��°���� ���� ����
					{
						a = a->pNext;//�ڵ��� ���� ģ���� tail���� �ű���
						while (a->pNext != head_node->pNext)
						{
							idx++;
							a = a->pNext;
						}
						temp->pNext = a->pNext;
						a->pNext = temp;
						result = idx;
						break;
					}
					else
					{
						temp->pNext = a->pNext;
						a->pNext = temp;
						result = idx;
						break;
					}

				}
				else//������ ����
				{
					temp->pNext = pointing_node->pNext;
					pointing_node->pNext = temp;
					result = idx + 1;
					break;
				}
			}
			//�����ȿ��� ���ϳ����� �̵� �Ѵ��� ��������
			//�������� ���� ���� pNext�� head_node�̹Ƿ� ������ ��������
			a = pointing_node;
			pointing_node = pointing_node->pNext;
		}

		//���ϳ�忡���� ó��

		idx++;
		if (pointing_node->nData == search)
		{
			if (mode == 0)//���Ͽ��� ���� ����
			{
				temp->pNext = a->pNext;
				a->pNext = temp;

				result = idx;
			}
			else//���Ͽ��� ������ ����
			{
				temp->pNext = pointing_node->pNext;
				pointing_node->pNext = temp;

				result = idx + 1;
			}
		}
	}
	return result;
}
/*
*�Լ� ����: Free_Circular_node(Node *head_node, int item)
*���ϰ�: void
*����: free�ϰ��� �ϴ� ���� ���� ��带 free���ش�.
*�޸�:
*/
int Free_C_node(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	Node *a;
	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		return result;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				if (pointing_node == head_node->pNext)//����Ʈ�� ù��°���� ���� ����
				{
					a = a->pNext;//�ڵ��� ���� ģ���� tail���� �ű���
					while (a->pNext != head_node->pNext)
					{
						a = a->pNext;
					}
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					head_node->pNext = a->pNext;//��� ���� ������ ������
					result = idx;
					break;
				}

				else
				{
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					result = idx;
					break;
				}


			}
			a = pointing_node;
			pointing_node = pointing_node->pNext;
			//�����ȿ��� ���ϳ����� �̵� �Ѵ��� ��������
			//�������� ���� ���� pNext�� head_node�̹Ƿ� ������ ��������
		}
		idx++;
		if (pointing_node->nData == search)
		{
			a->pNext = pointing_node->pNext;
			free(pointing_node);
			result = idx;
		}
	}

	return result;
}

/*
*�Լ� ����: Add_C_node_alphabet(Node *head_node)
*���ϰ�: void
*����: ���ĺ� ��/�ҹ��ڸ� �̾Ƽ� ����Ʈ�� �־��ش�
*�޸�:
*/
void Add_C_node_alphabet(Node *head_node, int num)
{
	int rand_num;
	int result = 0;

	while (1)
	{
		while (1)
		{
			rand_num = rand() % 58 + 65;//65~122
			if (rand_num <= 90 || rand_num >= 97)
				break;
		}

		result = Search_C_node(head_node, rand_num);
		if (result == FAIL)
			break;
	}
	Add_C_node(head_node, rand_num, num);
}
/*
*�Լ� ����: int Free_C_node_Alphabet(Node *head_node, int search)
*���ϰ�: void
*����: ��尡 ����Ű�� ������ �ΰ� �ռ��� ��带 �����ϰ�
*�޸�:
*/
int Free_C_node_Alphabet(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	Node *a;
	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{
		return result;
	}

	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				if (pointing_node == head_node->pNext)//����Ʈ�� ù��°���� ���� ����
				{
					a = a->pNext;//�ڵ��� ���� ģ���� tail���� �ű���
					while (a->pNext != head_node->pNext)
					{
						a = a->pNext;
					}
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					head_node->pNext = a->pNext;//��� ���� ������ ������
					result = idx;
					break;
				}

				else
				{
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					result = idx;
					break;
				}


			}
			a = pointing_node;
			pointing_node = pointing_node->pNext;
			//�����ȿ��� ���ϳ����� �̵� �Ѵ��� ��������
			//�������� ���� ���� pNext�� head_node�̹Ƿ� ������ ��������
		}
		idx++;
		if (pointing_node->nData == search)
		{
			a->pNext = pointing_node->pNext;
			free(pointing_node);
			result = idx;
		}
	}

	return result;
}
void Alphabet_game(Node *head_node)
{
	Node *next_head_node;
	Node *delete_node;
	Node *delete_backup;

	//��尡 �ϳ� �������� ������ ���� ��ġ�� ����
	next_head_node = find_next_head_node(head_node);
	delete_backup = find_delete_backup(head_node);
	delete_node = find_delete_node(head_node);
	

	Print_C_node_Alphabet(head_node);
	puts("");
	printf("���� �����:%c\n",find_next_head_node(head_node)->nData);
	printf("������ ���󰡴� ���:%c\n", delete_backup->nData);
	printf("������:%c\n", delete_node->nData);

	delete_backup->pNext = delete_node->pNext;
	free(delete_node);
	save_next_head_node(head_node, next_head_node);
	
}


void *save_next_head_node(Node *head_node, Node *node)
{
	head_node->pNext = node;
}

Node *find_next_head_node(Node *head_node)
{
	Node *pointing_node = head_node;

	pointing_node = pointing_node->pNext;
	while (pointing_node->pNext != head_node->pNext)
	{
		pointing_node = pointing_node->pNext;
	}

	return pointing_node;
}

Node *find_delete_backup(Node *head_node)
{
	Node *pointing_node=head_node;
	Node *delete_backup;
	pointing_node = pointing_node->pNext;
	pointing_node = pointing_node->pNext;

	delete_backup = pointing_node;

	return delete_backup;

}
Node *find_delete_node(Node *head_node)
{
	Node *pointing_node = head_node;
	Node *delete_node;
	pointing_node = pointing_node->pNext;
	pointing_node = pointing_node->pNext;
	pointing_node = pointing_node->pNext;

	delete_node = pointing_node;

	return delete_node;
}

/*-------------------------------------------------------*/


Node *find_next_head_node_ver2(Node *head_node)
{
	Node *pointing_node = head_node;
	Node *next_head_node;
	pointing_node = pointing_node->pNext;
	pointing_node = pointing_node->pNext;
	pointing_node = pointing_node->pNext;

	next_head_node = pointing_node;

	return next_head_node;

}


Node *find_head_node_back_ver2(Node *head_node)
{
	Node *pointing_node = head_node;

	pointing_node = pointing_node->pNext;
	while (pointing_node->pNext != head_node->pNext)
	{
		pointing_node = pointing_node->pNext;
	}

	return pointing_node;

}

void Alphabet_game_ver2(Node *head_node)
{
	//��尡 �ϳ� �������� ������ ���� ��ġ�� ����
	Node *next_head_node;
	Node *delete_node;
	Node *delete_backup;

	find_next_head_node_ver2(head_node);
	find_head_node_back_ver2(head_node);
	while (1)
	{
		delete_node = head_node;
		delete_node = delete_node->pNext;
		next_head_node = find_next_head_node_ver2(head_node);
		delete_backup = find_head_node_back_ver2(head_node);

		Print_C_node_num(head_node);
		puts("");
		Print_C_node_Alphabet(head_node);
		puts("");
		printf("���� �����:%c\n", find_next_head_node_ver2(head_node)->nData);
		printf("������ ���󰡴� ���:%c\n", delete_backup->nData);
		printf("������:%c\n", delete_node->nData);

		delete_backup->pNext = delete_node->pNext;
		free(delete_node);
		save_next_head_node(head_node, next_head_node);

		if (next_head_node == delete_backup)
		{
			puts("");
			printf("***********\n");
			printf("* �������� *\n");
			printf("***********\n");
			puts("");
			puts("�������");
			Print_C_node_Alphabet(head_node);
			puts("");
			break;
		}

		system("pause");
		puts("");
	}
	
}


#ifdef GO

void Alphabet_game(Node * head_node)
{
	int i;
	int result, idx = 0;
	Node *pointing_node = head_node;
	Node *backup_node;
	Node *delete_node;
	for (i = 0; i < 33; i++)
	{
		Add_C_node_alphabet(head_node);
	}//����Ʈ ���� 


	if (pointing_node->pNext == NULL)//head_node�� ���� ��尡 ������: ����Ʈ�� ��尳�� 0��
	{

	}
	else//����Ʈ�� ��� ������ 1�� �̻�
	{
		backup_node = pointing_node;
		pointing_node = pointing_node->pNext;//���� ����
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			backup_node = pointing_node;
			pointing_node = pointing_node->pNext;
			result = idx;
			//�����ȿ��� ���ϳ����� �̵� �Ѵ��� ��������
			//�������� ���� ���� pNext�� head_node�̹Ƿ� ������ ��������
		}
		//���� ����� ó��
		idx++;
		if (pointing_node->nData == search)
		{
			backup_node->pNext = pointing_node->pNext;
			free(pointing_node);
			result = idx;
		}
	}

	return result;
}
#endif

