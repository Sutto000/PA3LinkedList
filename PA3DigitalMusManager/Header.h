#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct record
{
	char artist[30];
	char album_title[30];
	char song_title[30];
	char genre[10];
	Duration song_length[2];
	int times_played;
	int rating;
}Record;

typedef struct duration
{
	int minutes;
	int seconds;

}Duration;

typedef struct node
{
	Record data;
	struct node* pNext;
	struct node* pPrev;

}Node;

void main_menu(void);
Node* makeNode(Record newdata);
void initList(Node** pList);
int insertAtFront(Node** pList, Record newData);