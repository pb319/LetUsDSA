#include <stdio.h>
void main()
{
    int  *pt1, *pt2;
    int val1, val2;
    printf("Enter an Integer\n");
    scanf("%d%d",&val1, &val2);
    pt1 = &val1;
    pt2 = &val2;
    printf("Your Input: %d\n",val1);
    printf("Address of Input: %d\n",pt1);
    printf("Address of Input: %d\n",pt2);
    printf("Difference: %d\n", pt2 - pt1);
    
    printf("--- Integer Types ---\n");
    printf("char      : %zu byte(s)\n", sizeof(char));
    printf("int       : %zu byte(s)\n", sizeof(int));

    printf("\n--- Floating-Point Types ---\n");
    printf("float     : %zu byte(s)\n", sizeof(float));
    
    printf("\n--- Pointer Types ---\n");
    printf("int*      : %zu byte(s)\n", sizeof(int*));
    printf("char*     : %zu byte(s)\n", sizeof(char*));

    return 0;
}