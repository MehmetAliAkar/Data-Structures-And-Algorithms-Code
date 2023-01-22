#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* temp=NULL;
struct node* start=NULL;

void sonaEkle(int number)
{
	struct node* element;
	element = (struct node*)malloc(sizeof(node));

	element->data = number;
	element->next = NULL;
	
	if (start == NULL)
	{
		start = element;
	}
	else
	{
		temp = start;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = element;
	}

}

void basaEkle(int number)
{
	struct node* element;
	element = (struct node*)malloc(sizeof(struct node));

	element->data = number;

	if (start == NULL)
	{
		start = element;
		start->next = NULL;
	}

	else
	{
		element->next = start;
		start = element;
	}

}

void arayaEkle(int n1, int num)
{
	bool control=1;
	if (start == NULL)
	{
		printf("\nSayi yoktur");
	}
	else
	{
		struct node* element = (struct node*)malloc(sizeof(struct node));
		temp = start;
		while (temp->next->data != n1 || temp->next != NULL)
		{
			temp = temp->next;
		}
		struct node* temp2;
		temp2 = (struct node*)malloc(sizeof(struct node));
		temp->next = temp2;
		temp->next = element;
		element->next = temp2;

	}
}



void yazdir()
{
	temp = start;
	while (temp != NULL)
	{
		printf(" %d ", temp->data);
		temp = temp->next;
	}
}


int main()
{	
	int secim;
	int num,n1;

	while (1)
	{
		printf("\n1->SONA EKLE");
		printf("\n2->BASA EKLE");
		printf("\n1->INSERT");
		printf("\n4->YAZDIR");
		printf("\n1->INSERT");
		printf("\n6->EXIT");
		printf("\nYapmak istediginiz islemi seciniz:\n"); 
		scanf("%d", &secim);

		switch (secim)
		{
		case 1:
			printf("\nEklemek Istediginiz Sayiyi Giriniz :\n");
			scanf("%d", &num);
			sonaEkle(num);
			break;

		case 2:
			printf("\nEklemek Istediginiz Sayiyi Giriniz:\n");
			scanf("%d", &num);
			basaEkle(num);
			break;

		case 3:
			printf("\nHangi sayidan once eklemek istersiniz:");
			scanf("%d", &n1);
			printf("\nEklemek istediginiz sayiyi giriniz:");
			scanf("%d", &num);
			arayaEkle(n1, num);
			break;

		case 4:
			system("cls");
			yazdir();
			break;

		case 6:
			exit(0);
			break;

		default:
			printf("Lutfen gecerli bir islem giriniz");
			break;
		}

	}


	return 0;
}