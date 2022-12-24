                    //BE20F05F062 --->>  AKASH PRAKASHAN SHRIDHARAN
#include <stdio.h>
int main() {
    int a[20], b[20], c[20], b1, c1;
    int i, j, temp;
    static int barr[20], carr[20];
    printf("\nEnter the number of blocks:");
    scanf("%d", & b1);
    printf("Enter the number of processes:");
    scanf("%d", & c1);
    int lowest = 9999;
    printf("\nEnter the size of the blocks:\n");
    for (i = 1; i <= b1; i++) {
        printf("Block no.%d:", i);
        scanf("%d", & b[i]);
    }
    printf("\nEnter the size of the processes :\n");
    for (i = 1; i <= c1; i++) {
        printf("Process no.%d:", i);
        scanf("%d", & c[i]);
    }
    for (i = 1; i <= c1; i++) {
        for (j = 1; j <= b1; j++) {
            if (barr[j] != 1) {
                temp = b[j] - c[i];
                if (temp >= 0)
                    if (lowest > temp) {
                        carr[i] = j;
                        lowest = temp;
                    }
            }
        }
        a[i] = lowest;
        barr[carr[i]] = 1;
        lowest = 10000;
    }
    printf("\nProcess_no\tProcess"
        "_size\tBlock_no\t"
        "Block_size\tWastage");
    for (i = 1; i <= c1 && carr[i] != 0; i++) {
        printf("\n%d\t\t%d\t\t%d\t\t"
            "%d\t\t%d", i,
            c[i], carr[i], b[carr[i]], a[i]);
    }
    printf("\n");
}

