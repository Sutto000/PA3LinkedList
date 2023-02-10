#include "Header.h"
void main_menu(Record Newdata, Node*pHead)
{
	printf("Welcome to the main menu of your Digital Music Manager!\n");
	printf("Enter a number to select that option.\n");

	printf("(1) Load \n");
	printf("(2) Store\n");
	printf("(3) Display\n");
	printf("(4) Insert\n");
	printf("(5) Delete\n");
	printf("(6) Edit\n");
	printf("(7) Sort\n");
	printf("(8) Rate\n");
	printf("(9) Play\n");
	printf("(10) Shuffle\n");
	printf("(11) Exit\n");

	int user = 0;
	scanf("%d", user);
	if (user == 1)
	{
		makeNode(Newdata);
		insertAtFront(&pHead, Newdata);
	}
	else if (user == 2)
	{

	}
	else if (user == 3)
	{
		printf("Would you like to display the entire playlist or display by artist?\n");
		int user2 = 0;
		if (user2 == 1)
		{

		}
		else
		{

		}
	}
	else if (user == 4)
	{

	}
	else if (user == 5)
	{

	}
	else if (user == 6)
	{

	}
	else if (user == 7)
	{

	}
	else if (user == 8)
	{

	}
	else if (user == 9)
	{

	}
	else if (user == 10)
	{

	}
	else
	{
		printf("Exiting your Digital Music Manager.\n");
	}




}
Node* makeNode(Record Newdata)
{
	Node* pMem = (Node*)malloc(sizeof(Node));

	if (pMem != NULL)
	{
		strcpy(pMem->data.artist, Newdata.artist);
		strcpy(pMem->data.album_title, Newdata.album_title);
		strcpy(pMem->data.song_title, Newdata.song_title);
		strcpy(pMem->data.genre, Newdata.genre);
		//pMem->data.song_length = Newdata.song_length;
		pMem->data.times_played = Newdata.times_played;
		pMem->data.rating = Newdata.rating;

		pMem->pNext = NULL;
		pMem->pPrev = NULL;

		return pMem;
	}

	
}
void initList(Node** pList)
{
	*pList = NULL;
}
int insertAtFront(Node** pList, Record Newdata)
{
	int success = 0;
	Node* pMem = makeNode(Newdata);
	if (pMem != NULL)
	{
		success = 1;
		if (*pList == NULL)
		{
			*pList = pMem;
		}
		(*pList)->pPrev = pMem;
		pMem->pNext = *pList;
		
	}
	return success;
}
void printList(Node* pList)
{
	Node* pCur = pList; 

	printf("--> "); 
	while (pCur != NULL) 
	{
		//printf("%c, %c, %c, %c, %d, %d, %d, %d --> ", pCur->data.artist, pCur->data.album_title,pCur->);
		pCur = pCur->pNext; 
	}
	putchar('\n');
}