#include"struct.h"

extern struct song son[2];

void finish()
{

	int k = 2;
	printf("���кõ�ǰK�ĸ����ǣ�\n");
	for (i = 0; i<k; i++)
	{
		printf("����:%s,����:%s,�ݳ�:%s,�Ƿ�����:%c,��˿��:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);

		//printf("%d ",son[i]);  
	}

	printf("���кõĺ�K�ĸ����ǣ�\n");
	for (i = N - 1; i >= N - k; i--)
	{
		printf("����:%s,����:%s,�ݳ�:%s,�Ƿ�����:%c,��˿��:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
	}
}