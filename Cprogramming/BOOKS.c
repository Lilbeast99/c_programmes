/*WRITE A C PROGRAM THAT USES STRUCTURE(RECORDS)CONSISTING OF name,bcode
BOOK TITLE AND PROGRAMME CODES FOR 100 BOOKS IN A LIBRARY AND ANOTHER USER
DEFINED FUNCTION THAT IS USED TO SELECT BOOK DETAILS OF A GIVEN BOOK AND OUTPUT
DETAILS GIVEN THAT bcodeS ARE WHOLE NUMBERS*/

#include <stdio.h>
#include <stdlib.h>

int x,choice;

struct book
{
	char name[30];
	int bcode;
	char title[30];
	char pcode[10];
	
};
void search(struct book b[]);

int main()
{
	struct book b[5];
	printf("\t>>>BOOK LIBRARY<<<\n");
	printf("  ==============================\n");
	printf("Kindly Input book details below\n\n");
	for(x=0; x<5; x++)
	{
		printf("Enter book [%d] name: ",x+1);
		scanf("%s",b[x].name);
		putchar('\n');
		printf("Enter book [%d] code: ",x+1);
		scanf("%d",&b[x].bcode);
		putchar('\n');
		printf("Enter book [%d] title: ",x+1);
		scanf("%s",b[x].title);
		putchar('\n');
		printf("Enter book [%d] program code: ",x+1);
		scanf("%s",b[x].pcode);
		putchar('\n');
		system("cls");
	}
	
	printf("Book details have been entered Successfully\n\n");
	
	while(choice!=2)
	{
		printf("\nPress <1> to search for a book\n");
		printf("Press <2> to exit\n");
		printf(">> ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				system("cls");
				search(b);
				break;
			}
			case 2:
			{
				system("cls");
				printf("...PROGRAM IS EXITING...\n");
				return 0;
			}
			default:
			{
				printf("Invlaid choice!!...Please try again!!\n");
				break;
			}
		}
	}
	
	return 0;
}

void search(struct book b[])
{
	int searchcode,found;
	printf("Enter the book code of the book you want to search for: ");
	scanf("%d",&searchcode);
	for(x=0; x<5; x++)
	{
		if(searchcode==b[x].bcode)
		{
			found =1;
			system ("cls");
			printf("FOUND BOOK\n\n");
			printf(" Name\t   Book_Code\tBook_Title\tProgram_Code\n");
			printf("  -----------------------------------------------------\n");
			printf(">>%s\t\t%d\t\t%s\t\t%s\n",b[x].name,b[x].bcode,b[x].title,b[x].pcode);
		}
	}
	if(found!=1)
	{
		system("cls");
		printf("\nNo book matching that book code has been found!!\n");
	}
	

}
