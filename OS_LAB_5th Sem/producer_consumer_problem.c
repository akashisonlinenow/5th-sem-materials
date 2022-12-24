#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//BE20F05F062 Akash Shridharan
void main()
{
system("CLS");
int ch,n,c1=0,c2=0,produce[23],consume[23];
printf("\t\tProducer-Consumer Problem\nEnter Stack Size : ",n);
scanf("%d",&n);
while(1)
{
 //system("CLS");
 printf("\n\t\tProducer Stack (Stack Size : %d)\n",n);
 display(c1,produce);
 printf("\n\n\t\tConsumer Stack (Stack Size : %d)\n",n);
 display(c2,consume);
 printf("\n\t\tCHOICES\n1.Producer\n2.Consumer\n3.Exit\nEnter your choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 if(c1==n)
 printf("Producer stack is FULL.So Producer goes to SLEEP\n");
 else
 {
 c1++;
 printf("Enter PRODUCED item :");
 scanf("%d",&produce[c1]);
 }
 break;
 case 2:
 if(c2==n)
 printf("Consumer Stack is FULL.So it goes to SLEEP!..........\n\tReset the Consumer Stack\n",c2=0);
 else if(c1==0)
 printf("\tProducer stack is EMPTY\n");
 else
 {
 c2++;
 consume[c2]=produce[c1];
 printf("CONSUMED item %d!",produce[c1]);
 c1--;
 }
 break;
 case 3:
 exit(0);
 default:
 printf("\tIt is Wrong choice,Please enter correct choice!............\n");
 }
 }
}
int display(int c,int stack[])
{
 int i;
 //printf("\n-------------------------------------------------------------------------------\n");
 if(c==0)
 printf("Stack is EMPTY\n(Now It is sleeping)");
 else
 for(i=1;i<=c;i++)
 printf("%d\t",stack[i]);
 //printf("\n-------------------------------------------------------------------------------\n");
 }
