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
	while (1)
	{
		printf("\n1->SONA EKLE");
		printf("\n2->INSERT");
		printf("\n1->INSERT");
		printf("\n4->YAZDIR");
		printf("\n1->INSERT");
		printf("\n6->EXIT");
		printf("\nYapmak istediginiz islemi seciniz");
		scanf("%d", &secim);

		switch (secim)
		{
		case 1:
			int num;
			printf("\nEklemek Istediginiz Sayiyi Giriniz ");
			scanf("%d", &num);
			sonaEkle(num);
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