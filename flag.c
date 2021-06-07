#include<stdio.h>
#include<conio.h>
struct student 
{
	char name[15];
	
	int roll ;
};
int main()
{
	struct student stu1;
	printf("Welcome To SaAd Assignment::");
	printf("Enter student name::");
	scanf("%s",&stu1.name);
	printf("Enter roll number::");
	scanf("%d",&stu1.roll);
	
	printf("%-10s%10s", "NAME","ROLL NUMBER\n");
	printf("%-10s%10d\n",stu1.name,stu1.roll);
	return 0;
}
