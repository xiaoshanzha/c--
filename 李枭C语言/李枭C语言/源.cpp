#include<stdio.h>
#include<string.h>
struct stu
{
	char name[40];
	int cla;
	int num;
};
struct stu st[100];
int i = 0;


void add()
{
	printf("������ѧ��������:");
	scanf_s("%s", st[i].name,40);
	printf("������ѧ���İ༶:");
	scanf_s("%d", &st[i].cla);
	printf("������ѧ����ѧ��:");
	scanf_s("%d", &st[i].num);
	i++;
	char b_or_c;
	getchar();
	printf("��'c'�����ù���   ���������˳��ù��ܻص����˵�\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		add();
	}
}



void look()
{
	for (int j = 0; j < i; j++)
	{
		printf("%s  %d  %d\n", st[j].name, st[j].cla, st[j].num);
	}
	
}



void check()
{
	char temp[40];
	int a, b;
	printf("1.����������\n2.���༶��ѧ�Ų���\n");
	scanf_s("%d", &a);
	if (a == 1)
	{
		printf("������Ҫ��ѯѧ��������:");
		scanf_s("%s", temp,40);
		for (int k = 0; k < i; k++)
		{
			if (strcmp(temp,st[k].name)==0)
			{
				printf("%s    %d    %d\n", st[k].name, st[k].cla, st[k].num);
			}
		}
	}
	else if (a == 2)
	{
		printf("������Ҫ��ѯѧ���İ༶��ѧ��:");
		scanf_s("%d", &b);
		for (int k = 0; k < i; k++)
		{
			if (b == st[k].cla || b == st[k].num)
			{
				printf("%s    %d    %d\n", st[k].name, st[k].cla, st[k].num);
			}
		}
	}
	char b_or_c;
	getchar();
	printf("��'c'�����ù���   ���������˳��ù��ܻص����˵�\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		check();
	}
}



void shan()
{
	printf("������Ҫɾ��ѧ��������\n");
	char shan_name[40];
	scanf_s("%s", shan_name, 40);
	int shan_flag;
	for (int k = 0; k < i; k++)
	{
		if (strcmp(shan_name, st[k].name)==0)
		{
			shan_flag = k;
			i--;
			break;
		}
	}
	for (int j = shan_flag; j < i; j++)
	{
		st[j] = st[j + 1];
	}
	printf("ɾ���ɹ�\n");
	char b_or_c;
	getchar();
	printf("��'c'�鿴ɾ�������Ϣ   ���������˳��ù��ܻص����˵�\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		look();
	}
}



void gai()
{
	printf("������Ҫ�޸�ѧ��������\n");
	char gai_name[40];
	int gai_flag;
	scanf_s("%s", gai_name, 40);
	for (int k = 0; k < i; k++)
	{
		if (strcmp(gai_name, st[k].name)==0)
		{
			gai_flag = k;
		}
	}
	printf("����������޸���Ϣ�������:");
	scanf_s("%s", st[gai_flag].name, 40);
	printf("����������޸���Ϣ��İ༶:");
	scanf_s("%d", &st[gai_flag].cla);
	printf("����������޸���Ϣ���ѧ��:");
	scanf_s("%d",&st[gai_flag].num);
	printf("�޸ĳɹ�\n");
	char b_or_c;
	getchar();
	printf("��'c'�鿴�޸ĺ����Ϣ   ���������˳��ù��ܻص����˵�\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		look();
	}
}


void pai()
{
	struct stu temp;
	for (int j = 0; j < i; j++)
	{
		for (int k = j + 1; k < i; k++)
		{
			if (st[k].num < st[j].num)
			{
				temp = st[k];
				st[k] = st[j];
				st[j] = temp;
			}
		}
	}
	printf("������˳��Ϊ:\n");
	look();
}

int n;
void menu()
{
	printf("\t\t\t\t\t\t���˵�\n");
	printf("\t\t\t\t\t   1.���ѧ����Ϣ\n");
	printf("\t\t\t\t\t   2.���ѧ����Ϣ\n");
	printf("\t\t\t\t\t   3.��ѯѧ����Ϣ\n");
	printf("\t\t\t\t\t   4.�޳�ѧ����Ϣ\n");
	printf("\t\t\t\t\t   5.�޸�ѧ����Ϣ\n");
	printf("\t\t\t\t\t   6.����ѧ����Ϣ\n");
	printf("\t\t\t\t\t   7.�˳�ϵͳ\n");
	printf("�����������蹦�ܵ����:");
	
}

int main()
{
	while (true)
	{
		menu();
		scanf_s("%d", &n);
		if (n == 1)
		{
			add();
		}
		else if (n == 2)
		{
			look();
		}
		else if (n == 3)
		{
			check();
		}
		else if (n == 4)
		{
			shan();
		}
		else if (n == 5)
		{
			gai();
		}
		else if (n == 6)
		{
			pai();
		}
		else if (n == 7)
		{
			break;
		}
	}
}