//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>//�۰����
//int main()
//{
//	int mid = 0;//ȫ�ֱ���
//	char a[] = { 1, 2, 3, 4, 5 };//�ȶ�������,��ֵ,��ֵ,Ҫ�ҵ���
//	int left = 0;
//	int right = sizeof(a) / sizeof(a[0]) - 1;//[0,4]
//	int to_find = 0;
//	scanf("%d", &to_find); 
//	while (left <= right)//����������ֵС����ֵ
//	{
//		mid = (left + right) / 2;
//		if (to_find <a[mid])
//		{
//			right = mid - 1; //[0,mid-1]
//		}
//		else if (to_find>a[mid])
//		{
//			left = mid + 1;//[mid-1,right]
//		}
//		else break;
//	}
//	if (left<=right)
//		printf("�ҵ����±�Ϊ��%d\n", mid);
//	else printf("-1\n");
	//������Ҫ�����֣��ҵ��󷵻��±��Ҳ�������һ
	//int main()
	//{
	//	int i;
	//	int arr[] = { 0, 9, 8, 7 };
	//	int to_find = 9;
	//	//for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		//{
		//	if (arr[i] == 7)
		//	{
		//		printf("%d\n", i);
	//			break;
	//		}
	//	}
	//	if (i==sizeof(arr) / sizeof(arr[0]))
	//		printf("-1\n");
	//	system("pause");
	//	return 0;
	//}

