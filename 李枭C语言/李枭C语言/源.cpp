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
	printf("请输入学生的姓名:");
	scanf_s("%s", st[i].name,40);
	printf("请输入学生的班级:");
	scanf_s("%d", &st[i].cla);
	printf("请输入学生的学号:");
	scanf_s("%d", &st[i].num);
	i++;
	char b_or_c;
	getchar();
	printf("按'c'继续该功能   按其他键退出该功能回到主菜单\n");
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
	printf("1.按姓名查找\n2.按班级或学号查找\n");
	scanf_s("%d", &a);
	if (a == 1)
	{
		printf("请输入要查询学生的姓名:");
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
		printf("请输入要查询学生的班级或学号:");
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
	printf("按'c'继续该功能   按其他键退出该功能回到主菜单\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		check();
	}
}



void shan()
{
	printf("请输入要删除学生的姓名\n");
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
	printf("删除成功\n");
	char b_or_c;
	getchar();
	printf("按'c'查看删除后的信息   按其他键退出该功能回到主菜单\n");
	b_or_c = getchar();
	if (b_or_c == 'c')
	{
		look();
	}
}



void gai()
{
	printf("请输入要修改学生的姓名\n");
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
	printf("请输入该生修改信息后的名字:");
	scanf_s("%s", st[gai_flag].name, 40);
	printf("请输入该生修改信息后的班级:");
	scanf_s("%d", &st[gai_flag].cla);
	printf("请输入该生修改信息后的学号:");
	scanf_s("%d",&st[gai_flag].num);
	printf("修改成功\n");
	char b_or_c;
	getchar();
	printf("按'c'查看修改后的信息   按其他键退出该功能回到主菜单\n");
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
	printf("排完后的顺序为:\n");
	look();
}

int n;
void menu()
{
	printf("\t\t\t\t\t\t主菜单\n");
	printf("\t\t\t\t\t   1.添加学生信息\n");
	printf("\t\t\t\t\t   2.浏览学生信息\n");
	printf("\t\t\t\t\t   3.查询学生信息\n");
	printf("\t\t\t\t\t   4.剔除学生信息\n");
	printf("\t\t\t\t\t   5.修改学生信息\n");
	printf("\t\t\t\t\t   6.排列学生信息\n");
	printf("\t\t\t\t\t   7.退出系统\n");
	printf("请输入你所需功能的序号:");
	
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