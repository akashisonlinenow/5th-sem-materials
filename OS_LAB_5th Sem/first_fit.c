                                //BE20F05F062 ----->>>  AKASH PRAKASHAN SHRIDHARAN
#include <stdio.h>
int main()
{    int blockSize[100],blocks,i,c=1 ;
    int processSize[100],processes ;
    while(c==1){
        system("CLS");        printf("\t\tFirst-Fit\n");
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
        }        implimentFirstFit(blockSize, blocks, processSize, processes);
        printf("Press 1 to Try Again, else Press 0\nEntry : ");
        scanf("%d",&c);
    }
    printf("\t\tProgram Ended!\n");
    return 0 ;  }
void implimentFirstFit(int blockSize[], int blocks, int processSize[], int processes)
{    int allocate[processes];
    for(int i = 0; i < processes; i++)
    {
		allocate[i] = -1;
    }
    for (int i = 0; i < processes; i++)
    {        for (int j = 0; j < blocks; j++) {
            if (blockSize[j] >= processSize[i])
            {                allocate[i] = j;
                blockSize[j] -= processSize[i];

                break;
            }        }    }

    printf("\nProcess No.\tProcess Size\t\tBlock no.\n");
    for (int i = 0; i < processes; i++)
    {        printf("%d \t\t\t %d \t\t\t", i+1, processSize[i]);
        if (allocate[i] != -1)
            printf("%d\n",allocate[i] + 1);
        else
            printf("Not Allocated\n");
    }
    }
