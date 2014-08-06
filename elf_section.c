#include<stdio.h>
#include<memory.h>
#include<fcntl.h>
#include"elf.h"

#define MAX_SIZE 10000000
void read_elf(char *filename);
char temp[MAX_SIZE];

void main(int argc ,char** argv)
{
	if(argc!=2)
	{
		printf("please input the filename!\n");
		return ;
	}else{
		read_elf(argv[1]);
	}
}



void read_elf(char *filename)
{
	int fd=open(filename,O_RDONLY);
	if(fd<0)
	{
		printf("can not open the file!\n");
		return;
	}
	memset(temp,0,MAX_SIZE);	
	read(fd,temp,MAX_SIZE);
	if(temp[0]==0x7f&&temp[1]=='E'&&temp[2]=='L'&&temp[3]=='F')
	{
		printf("ELF file info is as  below!\n...\n...\n");
		/*
		 *	lab1,write your code here!...
		 */
		printf("write your code in %s, at line %d\n\n\n",__FILE__,__LINE__);


	}else{
		printf("This file is not ELF file!\n");
		return;
	}
}
