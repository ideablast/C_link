#include"ALL.h"
/*
*함수 원형: Node * Alloc_new_C_node()
*리턴값: Node *
*설명: Node *temp변수에 node를 초기화 해서 할당한다
*메모:
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
*함수 원형: void Add_C_node_head(Node* head_node, int item)
*리턴값: void
*설명: 헤드 값을 넣어주면 해당 리스트의 가장 앞에 가서 노드를 추가한다. 그리고 정수 값으로 초기화한다.
*메모:
*/
void Add_C_node_head(Node* head_node, int item)
{
	Node *pointing_node = head_node;
	Node *temp = Alloc_new_C_node();
	temp->nData = item;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		pointing_node->pNext = temp;
		temp->pNext = pointing_node->pNext;
	}

	else//리스트의 노드 개수가 1개 이상
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
*함수 원형: void Add_C_node(Node* head_node, int item)
*리턴값: void
*설명: 헤드 값을 넣어주면 해당 리스트의 가장 마지막에 가서 노드를 추가한다. 그리고 정수 값으로 초기화한다.
*메모:
*/
void Add_C_node(Node* head_node, int item, int num)
{
	Node *pointing_node = head_node;
	Node *temp = Alloc_new_C_node();
	temp->num = num;
	temp->nData = item;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		pointing_node->pNext = temp;
		temp->pNext = pointing_node->pNext;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			pointing_node = pointing_node->pNext;
		}
		temp->pNext = pointing_node->pNext;
		pointing_node->pNext = temp;
	}

}
/*
*함수 원형: void Print_Circular_node(Node *head_node)
*리턴값: void
*설명: 리스트의 끝까지 리스트의 내용을 출력한다.
*메모:
*/
void Print_C_node(Node *head_node)
{
	Node *pointing_node = head_node;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		puts("리스트가 비었습니다");
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			printf("%d ", pointing_node->nData);
			pointing_node = pointing_node->pNext;
		}
		printf("%d ", pointing_node->nData);
	}

}
/*
*함수 원형: void Print_C_node_Alphabet(Node *head_node)
*리턴값: void
*설명: 리스트의 끝까지 리스트의 내용을 알파벳으로 출력한다.
*메모:
*/
void Print_C_node_num(Node *head_node)
{
	Node *pointing_node = head_node;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		puts("리스트가 비었습니다");
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
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

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		puts("리스트가 비었습니다");
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			printf("%2c ",  pointing_node->nData);
			pointing_node = pointing_node->pNext;
		}
		printf("%2c ", pointing_node->nData);
	}

}
/*
*함수 원형: int Count_Circular_node(Node *head_node)
*리턴값: int
*설명: 리스트의 끝까지 노드의 갯수를 카운팅하고 리턴한다.
*메모:
*/
int Count_C_node(Node *head_node)
{
	Node *pointing_node = head_node;
	int cnt = 0;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		return cnt;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
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
*함수 원형: int Search_node(Node *head_node, int item)
*리턴값: int
*설명: 노드에서 item을 찾는다. 찾으면 해당 위치를 리턴, 없으면 -1을 리턴
*메모:
*/

int Search_C_node(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	int idx = 0;
	int result = FAIL;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		return result;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				result = idx;
				break;
			}
			pointing_node = pointing_node->pNext;//루프안에서 테일노드까지 이동 한다음 다음에서
			//다음에서 테일 노드는 pNext가 head_node이므로 루프를 빠져나옴
		}
		idx++;
		if (pointing_node->nData == search)
			result = idx;
	}

	return result;
}
/*
*함수 원형 : int SI_node(Node *head_node, int item, int insert_left, int mode)
*리턴값 : int 삽입한 인덱스를 알려준다.
*설명 : 노드에서 item을 찾는다.찾으면 해당 위치에 모드에 따라서에 값을 삽입, 없으면 - 1을 리턴
*메모 : 모드 0은 왼쪽, 1은 오른쪽, 대상을 찾지 못하면 왼쪽 모드는 헤드의 오른쪽에 오른쪽 모드는 헤드의 왼쪽에 값을 삽입
*/

int SI_node(Node *head_node, int search, int insert, int mode)//
{
	Node *pointing_node = head_node;
	Node *a;
	Node *temp = Alloc_new_C_node();
	temp->nData = insert;

	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		return result;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//루프 진입

		while (pointing_node->pNext != head_node->pNext)//리스트 루프를 순회
		{
			idx++;
			if (pointing_node->nData == search)//찾았을때
			{
				if (mode == 0)//왼쪽 삽입
				{
					if (pointing_node == head_node->pNext)//리스트의 첫번째에서 왼쪽 삽입
					{
						a = a->pNext;//뒤따라 오는 친구를 tail노드로 옮긴후
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
				else//오른쪽 삽입
				{
					temp->pNext = pointing_node->pNext;
					pointing_node->pNext = temp;
					result = idx + 1;
					break;
				}
			}
			//루프안에서 테일노드까지 이동 한다음 다음에서
			//다음에서 테일 노드는 pNext가 head_node이므로 루프를 빠져나옴
			a = pointing_node;
			pointing_node = pointing_node->pNext;
		}

		//테일노드에서의 처리

		idx++;
		if (pointing_node->nData == search)
		{
			if (mode == 0)//테일에서 왼쪽 삽입
			{
				temp->pNext = a->pNext;
				a->pNext = temp;

				result = idx;
			}
			else//테일에서 오른쪽 삽입
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
*함수 원형: Free_Circular_node(Node *head_node, int item)
*리턴값: void
*설명: free하고자 하는 값을 가진 노드를 free해준다.
*메모:
*/
int Free_C_node(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	Node *a;
	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		return result;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				if (pointing_node == head_node->pNext)//리스트의 첫번째에서 왼쪽 삽입
				{
					a = a->pNext;//뒤따라 오는 친구를 tail노드로 옮긴후
					while (a->pNext != head_node->pNext)
					{
						a = a->pNext;
					}
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					head_node->pNext = a->pNext;//헤드 노드로 부터의 진입점
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
			//루프안에서 테일노드까지 이동 한다음 다음에서
			//다음에서 테일 노드는 pNext가 head_node이므로 루프를 빠져나옴
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
*함수 원형: Add_C_node_alphabet(Node *head_node)
*리턴값: void
*설명: 알파벳 대/소문자를 뽑아서 리스트에 넣어준다
*메모:
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
*함수 원형: int Free_C_node_Alphabet(Node *head_node, int search)
*리턴값: void
*설명: 헤드가 가리키는 곳에서 두개 앞서는 노드를 삭제하고
*메모:
*/
int Free_C_node_Alphabet(Node *head_node, int search)
{
	Node *pointing_node = head_node;
	Node *a;
	int idx = 0;
	int result = 0;

	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{
		return result;
	}

	else//리스트의 노드 개수가 1개 이상
	{
		a = pointing_node;
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			if (pointing_node->nData == search)
			{
				if (pointing_node == head_node->pNext)//리스트의 첫번째에서 왼쪽 삽입
				{
					a = a->pNext;//뒤따라 오는 친구를 tail노드로 옮긴후
					while (a->pNext != head_node->pNext)
					{
						a = a->pNext;
					}
					a->pNext = pointing_node->pNext;
					free(pointing_node);
					head_node->pNext = a->pNext;//헤드 노드로 부터의 진입점
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
			//루프안에서 테일노드까지 이동 한다음 다음에서
			//다음에서 테일 노드는 pNext가 head_node이므로 루프를 빠져나옴
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

	//헤드가 하나 정해지면 다음과 같은 위치가 나옴
	next_head_node = find_next_head_node(head_node);
	delete_backup = find_delete_backup(head_node);
	delete_node = find_delete_node(head_node);
	

	Print_C_node_Alphabet(head_node);
	puts("");
	printf("다음 헤드노드:%c\n",find_next_head_node(head_node)->nData);
	printf("지울노드 따라가는 노드:%c\n", delete_backup->nData);
	printf("지울노드:%c\n", delete_node->nData);

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
	//헤드가 하나 정해지면 다음과 같은 위치가 나옴
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
		printf("다음 헤드노드:%c\n", find_next_head_node_ver2(head_node)->nData);
		printf("지울노드 따라가는 노드:%c\n", delete_backup->nData);
		printf("지울노드:%c\n", delete_node->nData);

		delete_backup->pNext = delete_node->pNext;
		free(delete_node);
		save_next_head_node(head_node, next_head_node);

		if (next_head_node == delete_backup)
		{
			puts("");
			printf("***********\n");
			printf("* 게임종료 *\n");
			printf("***********\n");
			puts("");
			puts("최종결과");
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
	}//리스트 생성 


	if (pointing_node->pNext == NULL)//head_node의 다음 노드가 없을떄: 리스트의 노드개수 0개
	{

	}
	else//리스트의 노드 개수가 1개 이상
	{
		backup_node = pointing_node;
		pointing_node = pointing_node->pNext;//루프 진입
		while (pointing_node->pNext != head_node->pNext)//
		{
			idx++;
			backup_node = pointing_node;
			pointing_node = pointing_node->pNext;
			result = idx;
			//루프안에서 테일노드까지 이동 한다음 다음에서
			//다음에서 테일 노드는 pNext가 head_node이므로 루프를 빠져나옴
		}
		//테일 노드의 처리
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

