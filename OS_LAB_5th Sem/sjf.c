#include<stdio.h>
#include<conio.h>
#include<string.h>
//BE20F05F062 Akash Shridharan
void main()
{
    int et[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],ta[10],A[10][10];
    int totwt=0,totta=0;
    float awt,ata;
    char pn[10][10],t[10];
    //clrscr();
    printf("Enter the number of process:");
    scanf("%d",&n);
    printf("Enter Arrival Time:\n");
	// User Input Burst Time and alloting Process Id.
	for (i = 0; i < n; i++) {
		printf("P%d: ", i + 1);
		scanf("%d", &at[i]);
		A[i][0] = i + 1;
	}
    printf("Enter Burst Time:\n");
	// User Input Burst Time and alloting Process Id.
	for (i = 0; i < n; i++) {
		printf("P%d: ", i + 1);
		scanf("%d", &et[i]);
		A[i][0] = i + 1;
	}
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(et[i]<et[j])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=et[i];
                et[i]=et[j];
                et[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]);
                strcpy(pn[j],t);
            }
        }
    for(i=0; i<n; i++)
    {
        if(i==0)
            st[i]=at[i];
        else
            st[i]=ft[i-1];
        wt[i]=st[i]-at[i];
        ft[i]=st[i]+et[i];
        ta[i]=ft[i]-at[i];
        totwt+=wt[i];
        totta+=ta[i];
    }
    awt=(float)totwt/n;
    ata=(float)totta/n;
    printf("\nPname\tArrivalTime\tExecutionTime\tWaitingTime\tTAT Time");
    for(i=0; i<n; i++)
        printf("\n%d\t%5d\t\t%5d\t\t%5d\t\t%5d",i+1,at[i],et[i],wt[i],ta[i]);
    printf("\nAverage waiting time is: %f ms",awt);
    printf("\nAverage turnaroundtime is: %f ms",ata);
    getch();
}
