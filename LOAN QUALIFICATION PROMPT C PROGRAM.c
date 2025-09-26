/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DESCRIPTON:A BANK LOAN QUALIFICATION CHECKER PROGRAM
*/
#include<stdio.h>
int main(){
    int age,income;

    printf("Enter your age:\n");
    scanf("%d,&age");

    printf("Enter income:\n");
    scanf("%d,&income");

    if(age>=21 & income>=21000){
        printf("congratulations,you qualify for the loan\n");}
    else{
        printf("Unfortunately,we are unable to offer you a loan at this time\n");
    }
        return 0;
}
