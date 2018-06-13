#include"struct.h"

extern struct song son[2];

void finish()
{

	int k = 2;
	printf("排列好的前K的歌曲是：\n");
	for (i = 0; i<k; i++)
	{
		printf("歌名:%s,作曲:%s,演唱:%s,是否流行:%c,粉丝数:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);

		//printf("%d ",son[i]);  
	}

	printf("排列好的后K的歌曲是：\n");
	for (i = N - 1; i >= N - k; i--)
	{
		printf("歌名:%s,作曲:%s,演唱:%s,是否流行:%c,粉丝数:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
	}
}