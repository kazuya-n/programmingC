#include <stdio.h>

void bubbleSort( int dt[], int n, int c)
{
    int i, j, temp;
    
    for( i = 0; i < n-1; i++ ) {
        for( j = n-1; j > i; j-- ) {
            if( dt[j-1] > dt[j] ) {
                c++;
                temp = dt[j];
                dt[j] = dt[j-1];
                dt[j-1] = temp;
            }
        }
    }
    
    for( i = 0; i < n; i++ )
        printf("%d ", dt[i]);
    printf("\n%d\n", c);
}

int main(void){
    
    int data[100];
    int n, i, c = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &data[i]);
    bubbleSort(data, n, c);
    
    return 0;
}
