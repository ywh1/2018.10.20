#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//Сд��ĸ=��д��ĸ+32
int menu()//����һ���˵��������ѡ��
{
	int choice = 0;
	printf("================\n");
	printf("=====1��ʼ======\n");
	printf("=====0����======\n");
	printf("================\n");
	printf("�������ѡ��");
	scanf("%d", &choice);
	return choice;
}
void game()
{
	char a=0;
	printf("���������ĸ��");
	scanf("%c", &a);
    if (a <= 'z'&&a >= 'a')//�����Сд�����д
   printf("%c\n", a - 32);
   else if (a <= 'Z'&&a >= 'A')
  printf("%c\n", a + 32); //�Ǵ�д�����Сд
}
int main()
{
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			printf("Gameing\n");
			game(); 
			break;
		}
		if (choice == 0)
		{
			printf("Game Over\n");
			break;
		}
		else printf("����������������\n");
	}
 system("pause");
 return 0;
 }