#include<stdio.h>
#include<string.h>
#define MAX 100
//stack structure
char stack[MAX];
int top=-1;
//push operation
void push(char c)
{
if(top<MAX-1)
{
stack[++top]=c;
}
}
//pop operation
char pop()
{
if(top>=0)
{
return stack[top--];
}
return'\0';
}
void reversestring(char str[])
{
int i;
//push all characters on the stack
for(i=0;str[i]!='\0';i++)
{
push(str[i]);
}
//pop characters back in the string
for(i=0;str[i]!='\0';i++)
{
str[i]=pop();
}
}
int main()
{
char str[100];
printf("enter a string:");
gets(str);
reversestring(str);
printf("reversed string:%s\n",str);
getch();
return 0;
}
