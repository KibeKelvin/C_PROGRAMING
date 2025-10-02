//SIMPLE-C-PROGRAM
/*
NAME:KIBE KELVIN
REGNO:CT101/G/24702/24
DESCRIPTION:A C PROGRAM THAT CHECKS THE ELIGIBILITY OF A STUDENT FOR FINAL EXAMS
*/
#include<stdio.h>
int main(){
    int Attendance,Average_marks;
    printf("Enter Attendance:");
    scanf("%d\n",&Attendance);

    printf("Enter Average_marks:");
    scanf("%d\n",&Average_marks);

    if(Attendance>=75&&Average_marks>=40){
        printf("ELIGIBLE\n");
    }
    else if(Attendance<75&&Average_marks<40){
        printf("NOT ELIGIBLE\n");
    }

return 0;

}
