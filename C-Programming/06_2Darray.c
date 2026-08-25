#include <stdio.h>
void main(){
    int arr1[3][3]={1,2,3,3,4,5,5,6,7};
    int arr2[][3]={1,2,3,3,4,5,5,6,7};
    // int arr3[3][]={1,2,3,3,4,5,5,6,7};
    printf("The Array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Thank You\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("Thank You\n");

    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",arr3[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("arr1: %u\n",arr1);//nase-address
    printf("&arr1: %u\n",&arr1);
    printf("arr1+1: %u\n",arr1+1);//address of arr1[1][0]
    printf("&arr1+1: %u\n",&arr1+1);
    printf("&arr1[1][2]: %u\n",&arr1[1][2]);
    printf("&arr1[1][2]+1: %u\n",&arr1[1][2]+1);
    return;
}