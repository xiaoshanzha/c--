#include"struct.h"
struct song son[2];
void add()
{
	for (i = 0; i<N; i++)
	{
		printf("\n����:");
		scanf_s("%s",son[i].name,40);
		fflush(stdin);
		printf("\n����:");
		scanf_s("%s", son[i].musical,40);
		fflush(stdin);
		printf("\n�ݳ�:");
		scanf_s("%s", son[i].singer,40);
		fflush(stdin);
		printf("\n�Ƿ�����:");
		scanf_s("%s", son[i].pop,40);
		fflush(stdin);
		printf("\n��˿��:");
		scanf_s("%d", &son[i].num);
	}


}