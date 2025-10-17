#include<stdio.h>
 #include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void display();
int stack [MAXSIZE];
int top=-1;
void main()
{
int choice;
while(1)
{
clrscr();
printf("STATIC IMPLEMENTATION OF STACK");
printf("\n____________________");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\n_______________________");
printf("\n\n Enter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch (choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("\n\ninvalid choice");
}
getch();
}
}
void push()
{
int num;
if(top==MAXSIZE-1)
{
printf("\n\nstack is full(stack overflow)");
return;
}
else
{
printf("\n\n enter the elementto be pushed in stack:");
scanf("%d",&num);
top++;
stack[top]=num;
}
}
void pop()
{
int num;
if(top==-1)
{
printf("\n\n stack is empty(stack underflow)");
return;
}
else
{
num=stack[top];
printf("\n\n element popped from stack:%d",num);
top--;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\n\n stack is empty(stack underflow)");
return;
}
else
{
printf("\n\n stack elements are:\n");
for(i=top;i>=0;i--)
printf("stack[%d]:%d\n",i,stack[i]);
}
}

