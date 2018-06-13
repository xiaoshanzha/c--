#include"struct.h"	
extern struct song son[2];
void quiry()
{
	char a[40];
		printf("输入要查询的歌名或作曲或演唱名：");
		scanf_s("%s", a,40);
		for (i = 0; i<N; i++)
		{
			if (strcmp(son[i].name, a) == 0)
				printf("歌名:%s,作曲:%s,演唱:%s,是否流行:%s,粉丝数:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
			else if (strcmp(son[i].musical, a) == 0)
				printf("歌名:%s,作曲:%s,演唱:%s,是否流行:%s,粉丝数:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
			else if (strcmp(son[i].singer, a) == 0)
				printf("歌名:%s,作曲:%s,演唱:%s,是否流行:%s,粉丝数:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
		}
}