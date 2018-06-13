#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 2

struct song
{
	int num;
	char name[40];
	char musical[40];
	char singer[40];
	char pop[40];
};

static int i, j;

void add();
void finish();
void quiry();
void stastic();
