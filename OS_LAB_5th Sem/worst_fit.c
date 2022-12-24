                //BE20F05F062 ----->>>  AKASH PRAKASHAN SHRIDHARAN
#include <stdio.h>
int main()
{    int blockSize[100],blocks,i,c=1 ;
    int processSize[100],processes ;
    while(c==1){        system("CLS");        printf("\t\tWorst-Fit\n");
        printf("Enter the no. of Blocks : ");        scanf("%d",&blocks);
        printf("Enter the Size of Blocks\n");
        for(i=0;i<blocks;i++){
            printf("Block No. %d : ",i+1);
            scanf("%d",&blockSize[i]);
        }        printf("Enter the no. of Processes : ");        scanf("%d",&processes);
        printf("Enter the Size of Processes\n");
        for(i=0;i<processes;i++){
            printf("Process No. %d : ",i+1);
            scanf("%d",&processSize[i]);
        }        implimentWorstFit(blockSize, blocks, processSize, processes);
        printf("Press 1 to Try Again, else Press 0\nEntry : ");
        scanf("%d",&c);
    }    printf("\t\tProgram Ended!\n");
    return 0 ;
}
void implimentWorstFit(int blockSize[], int blocks, int processSize[], int processes)
{    int allocation[processes];
    for(int i = 0; i < processes; i++){
        allocation[i] = -1;
    }
    for (int i=0; i<processes; i++)
    {        int indexPlaced = -1;
        for (int j=0; j<blocks; j++)
        {
            if (blockSize[j] >= processSize[i])
            {F   if (indexPlaced == -1)
                    indexPlaced = j;
                else if (blockSize[indexPlaced] < blockSize[j])
                    indexPlaced = j;
            }        }
        if (indexPlaced != -1)
        {            allocation[i] = indexPlaced;
            blockSize[indexPlaced] -= processSize[i];
        }    }
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < processes; i++)
    {        printf("%d \t\t\t %d \t\t\t", i+1, processSize[i]);
        if (allocation[i] != -1)            printf("%d\n",allocation[i] + 1);
        else            printf("Not Allocated\n");
    }   }


