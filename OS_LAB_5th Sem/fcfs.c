#include<stdio.h>
#include<conio.h>
//BE20F05F062 Akash Shridharan
struct process
{
int burst,wait;
}p[20]={0,0};
int main()
{
int n,i,totalwait=0,totalturn=0;
printf("\nEnter The No Of Process :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter The Burst Time (in ms) For Process #%2d :",i+1);
scanf("%d",&p[i].burst);
}
printf("\nProcess\t Waiting Time TurnAround Time ");
printf("\n\t (in ms) (in ms)");
for(i=0;i<n;i++)
{
printf("\nProcess # %-12d%-15d%-15d",i+1,p[i].wait,p[i].wait+p[i].burst);
p[i+1].wait=p[i].wait+p[i].burst;
totalwait=totalwait+p[i].wait;
totalturn=totalturn+p[i].wait+p[i].burst;
}
printf("\n\nAVERAGE\n---------");
printf("\nWaiting Time : %f ms",totalwait/(float)n);
printf("\nTurnAround Time : %f ms\n\n",totalturn/(float)n);
return 0;
}
