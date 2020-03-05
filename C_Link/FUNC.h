#pragma once
#include"ALL.h"

#ifndef __FUNC_H__
#define __FUNC_H__
/*Circular linked list*/
Node *Alloc_new_C_node();
void Add_C_node_head(Node* head_node, int item);
void Add_C_node(Node* head_node, int item, int num);
void Print_C_node(Node *head_node);
int Count_C_node(Node *head_node);
int Search_C_node(Node *head_node, int item);
int SI_node(Node *head_node, int search, int insert, int mode);
int Free_C_node(Node *head_node, int search);

/*Alphabet game*/
void Alphabet_game(Node *head_node);
void Add_C_node_alphabet(Node *head_node,int num);
void Print_C_node_Alphabet(Node *head_node);
void Print_C_node_num(Node *head_node);
void *save_next_head_node(Node *head_node, Node *node);
Node *find_next_head_node(Node *head_node);
Node *find_delete_backup(Node *head_node);
Node *find_delete_node(Node *head_node);

/*Alphabet game_ver2*/
void Alphabet_game_ver2(Node *head_node);
Node *find_head_node_back_ver2(Node *head_node);
Node *find_next_head_node_ver2(Node *head_node);

#endif
