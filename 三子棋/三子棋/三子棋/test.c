#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	int input = 0;
	welcome();
	//system("color f0");
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}

