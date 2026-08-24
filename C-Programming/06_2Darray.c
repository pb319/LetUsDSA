#include <stdio.h>
void main(){
    int arr[4][3]={{1,2,3},{3,4,5}};
    printf("The Array:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Thank You\n");
    return;
}