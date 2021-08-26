#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[20];
	char title[50];
	int page;
} BookInfo;

void RemoveBSN(char str[])
{
	str[strlen(str)-1]=0;
}

int main(void)
{
	BookInfo * books[3];
	int i;

	printf("도서 정보 입력 \n");
	for(i=0; i<3; i++)
	{
		books[i] = (BookInfo *)malloc(sizeof(BookInfo));
		printf("%d번째 책\n", i+1);
		printf("저자 이름 입력: ");
		scanf("%s", books[i]->name);
		getchar();
		printf("제목 입력: ");
		fgets(books[i]->title, sizeof(books[i]->title), stdin);
		RemoveBSN(books[i]->title);
		printf("페이지 수 입력: ");
		scanf("%d", &(books[i]->page));
	}
	printf("\n");

	printf("도서 정보 출력 \n");
	for(i=0; i<3; i++)
	{
		printf("book %d \n", i+1);
		printf("저자: %s \n", books[i]->name);
		printf("제목: %s \n", books[i]->title);
		printf("페이지 수: %d \n", books[i]->page);
		free(books[i]);
	}
	return 0;
}

