#include <stdio.h>
struct record {
	char rollno[20];
	char name[30];
	char phone[20];
};
typedef struct record DATA;
int main()
{
	DATA student;
	//clrscr();
	printf("Enter student details:\n");
	printf("Roll No.: ");
	//scanf("%s", student.rollno);
	gets(student.rollno);
	printf("Name: ");
	//scanf("%s", student.name);
	gets(student.name);
	printf("Contact: ");
	//scanf("%s", student.phone);
	gets(student.phone);
	printf("Following are the details of student:");
	printf("\nRoll No: ");
	puts(student.rollno);
	printf("\nName: ");
	puts(student.name);
	printf("\nContact: ");
	puts(student.phone);
	//getch();
}
