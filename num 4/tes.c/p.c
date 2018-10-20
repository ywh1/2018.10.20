#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//小写字母=大写字母+32
int menu()//定义一个菜单输入你的选择
{
	int choice = 0;
	printf("================\n");
	printf("=====1开始======\n");
	printf("=====0结束======\n");
	printf("================\n");
	printf("输入你的选择：");
	scanf("%d", &choice);
	return choice;
}
void game()
{
	char a=0;
	printf("输入你的字母：");
	scanf("%c", &a);
    if (a <= 'z'&&a >= 'a')//如果是小写输出大写
   printf("%c\n", a - 32);
   else if (a <= 'Z'&&a >= 'A')
  printf("%c\n", a + 32); //是大写就输出小写
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
		else printf("输入有误重新输入\n");
	}
 system("pause");
 return 0;
 }