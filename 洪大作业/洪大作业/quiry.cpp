#include"struct.h"	
extern struct song son[2];
void quiry()
{
	char a[40];
		printf("����Ҫ��ѯ�ĸ������������ݳ�����");
		scanf_s("%s", a,40);
		for (i = 0; i<N; i++)
		{
			if (strcmp(son[i].name, a) == 0)
				printf("����:%s,����:%s,�ݳ�:%s,�Ƿ�����:%s,��˿��:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
			else if (strcmp(son[i].musical, a) == 0)
				printf("����:%s,����:%s,�ݳ�:%s,�Ƿ�����:%s,��˿��:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
			else if (strcmp(son[i].singer, a) == 0)
				printf("����:%s,����:%s,�ݳ�:%s,�Ƿ�����:%s,��˿��:%d\n", son[i].name, son[i].musical, son[i].singer, son[i].pop, son[i].num);
		}
}