#include"struct.h"
extern struct song son[2];
void stastic()
{
	char b[40]; int nub;

	{
		//printf("����Ҫ��ѯ�����ݣ�\n\t0:�˳�\n\t1:����\n\t2:�ݳ�\n\t3:����\n\t4:�Ƿ�����\n\t5:��˿��");
		printf("����Ҫ��ѯ�����ݣ�\n\t0:�˳�\n\t1:����\n\t2:�ݳ�\n\t3:����\n");
		do {
			scanf_s("%d", &nub);
			if (nub == 1)
				for (i = 0; i<N; i++)
					printf("\t����:%s\n", son[i].name);
			else if (nub == 2)
				for (i = 0; i<N; i++)
					printf("\t�ݳ�:%s\n", son[i].singer);
			else if (nub == 3)
				for (i = 0; i<N; i++)
					printf("\t����:%s\n", son[i].musical);
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