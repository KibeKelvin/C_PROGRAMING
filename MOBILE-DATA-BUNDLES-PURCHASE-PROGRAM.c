//SIMPLE-C-PROGRAM
/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DATE:30/9/25
DESCRIPTION:A PROGRAM TO HELP USER TO BUY MOBILE DATA BUNDLES
*/
#include<stdio.h>
int main(){
    int choice;
    printf("SELECT DATA BUNDLE\n");
    printf("1 .100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 300 KES\n");
    printf("4. 2GB @ 600 KES\n");

    printf("Enter your choice(1-4):");
    scanf("%d",&choice);

    if(choice=1){
            printf("YOU SELECTED 100MB COST = 50 KES\n");

    }
     if(choice=2){
            printf("YOU SELECTED 500MB COST=200 KES\n");

            }
    else if(choice=3){
        printf("YOU SELECTED 1GB COST= 350 KES\n");

    }
    else if(choice=4){
        printf("YOU SELECTED 2GB COST =600 KES\n");

    }
    else{
        printf("Invalid choice");
    }

    return 0;
}
