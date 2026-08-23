# include <stdio.h>
void main(){
    int val;
    printf("Enter an Integer:\n");
    scanf("%d",&val);

    // if-statement
    if (val%2==0){
        printf("Even Number\n");
    } 
    else if (val%3==0){
        goto label;
    }
    // if-else statement
    printf("Out of Goto\n");
    return;
    label: printf("Goto In\n");
    switch (val+1){
    case 4: printf("It is 3\n");
    break;
    case 10: printf("It is 9\n");
    break;
    default:
    printf("It is nothing\n");
    }

    // else-if ladder

    // goto statement

    // switch-case

    return;
}