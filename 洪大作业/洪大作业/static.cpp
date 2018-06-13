#include"struct.h"
extern struct song son[2];
void stastic()
{
	char b[40]; int nub;

	{
		//printf("输入要查询的内容：\n\t0:退出\n\t1:歌名\n\t2:演唱\n\t3:作曲\n\t4:是否流行\n\t5:粉丝数");
		printf("输入要查询的内容：\n\t0:退出\n\t1:歌名\n\t2:演唱\n\t3:作曲\n");
		do {
			scanf_s("%d", &nub);
			if (nub == 1)
				for (i = 0; i<N; i++)
					printf("\t歌名:%s\n", son[i].name);
			else if (nub == 2)
				for (i = 0; i<N; i++)
					printf("\t演唱:%s\n", son[i].singer);
			else if (nub == 3)
				for (i = 0; i<N; i++)
					printf("\t作曲:%s\n", son[i].musical);
			else if (nub == 0) break;
		} while (1);
	}

	song t;
	for (i = 0; i<N - 1; i++)
	{
		for (j = 0; j<N - i - 1; j++)
		{
			if (son[j].num<son[j + 1].num)
			{
				t = son[j + 1];
				son[j + 1] = son[j];
				son[j] = t;
			}
		}
	}


}