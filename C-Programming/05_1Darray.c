#include <stdio.h>
void main(){
    int arr[5]={1,2,5};
    printf("Enter your array:\n");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("The Array (Address):\n");
    for(int i=0;i<5;i++){
        printf("%u ",&arr[i]);
    }
    printf("\n");

    printf("The Array (Hex Address):\n");
    for(int i=0;i<5;i++){
        printf("%p ",&arr[i]);
    }
    printf("\n");

    printf("Base Address:%u\n",arr);
    printf ("Address of Last:%u\n",(&arr[4]));
    printf("Size of Elt. of Array:%u\n",sizeof(arr[2]));
    printf("Size of Array:%u\n",sizeof(arr));
    

    return;
}