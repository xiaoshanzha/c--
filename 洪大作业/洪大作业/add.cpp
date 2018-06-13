#include"struct.h"
struct song son[2];
void add()
{
	for (i = 0; i<N; i++)
	{
		printf("\n歌名:");
		scanf_s("%s",son[i].name,40);
		fflush(stdin);
		printf("\n作曲:");
		scanf_s("%s", son[i].musical,40);
		fflush(stdin);
		printf("\n演唱:");
		scanf_s("%s", son[i].singer,40);
		fflush(stdin);
		printf("\n是否流行:");
		scanf_s("%s", son[i].pop,40);
		fflush(stdin);
		printf("\n粉丝数:");
		scanf_s("%d", &son[i].num);
	}


}