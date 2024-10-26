#include<stdio.h>
void main() {
    char name[100];
    char schoolname[100];
    char fathername[100];
    char mothername[100];
    char b[100]="1st DIVISION";
    char c[100]="2nd DIVISION";
    char d[100]="3rd DIVISION";
    int roll,physics,chemistry,maths,english,computer,total;
    float percentage,x;
    const char a[10]="100/33";
    printf("enter the school name:");
    scanf("%s",&schoolname);
    printf("enter student's name:",&name);
    scanf("%s",name);
    printf("enter father's name: ");
    scanf("%s",&fathername);
    printf("enter mother's name;");
    scanf("%s",&mothername);
    printf("enter roll number");
    scanf("%i",&roll);
    printf("ENTER THE MARKS FOR FOLLOWING SUBJECT \n");
    printf("physics:");
    scanf("%d",&physics);
    printf("chemistry:");
    scanf("%d",&chemistry);
    printf("maths:");
    scanf("%d",&maths);
    printf("english:");
    scanf("%d",&english);
    printf("comuter science:");
    scanf("%d",&computer);
    printf("\n-------------- MARKSHEET --------------------\n");
    printf("\n---------------- %s -----------------------\n",schoolname);
    printf("STUDENT'S NAME:- %s",name);
    printf("\t FATHER'S NAME:- %s \n",fathername);
    printf("MOTHER'S NAME:- %s",mothername);
    printf("\t\t ROLL NUMBER:- %d \n",roll);
    printf("-----------------------------------------------\n");
    printf("SUBJECTS \t");
    printf("MAX/MIN \t");
    printf("MARKS OBTAIN \n");
    printf("-----------------------------------------------\n");
    printf("PHYSICS \t");
    printf("%s \t",a);
    printf("\t %d \n",physics);
    printf("CHEMISTRY \t");
    printf("%s \t",a);
    printf("\t %d \n",chemistry);
    printf("MATHS \t\t");
    printf("%s \t",a);
    printf("\t %d \n",maths);
    printf("ENGLISH \t");
    printf("%s \t",a);
    printf("\t %d \n",english);
    printf("COMPUTER \t");
    printf("%s \t",a);
    printf("\t %d \n",computer);
    printf("-----------------------------------------------\n");
    total = physics + chemistry + maths + english + computer;
    printf("\t\t TOTAL MARKS:- \t %d \n",total);
    if (maths<33||chemistry<33||physics<33||english<33||computer<33) {
        printf("\t\t DIVISION:- \t FAIL \n");
    }else {
        x = (float)total/500;
        percentage = x * 100;
        printf("\t\t PERCENTAGE:- \t %f \n",percentage);

        if (percentage>60.00) {
            printf("\t\t DIVISION:- \t %s \n",b);

        }else if (percentage<60.00 && percentage>45.00){
            printf("\t\t DIVISION:- \t %s \n",c);
        }else {
            printf("\t\t DIVISION:- \t %s \n",d);
        }

        printf("-----------------------------------------------\n");

    }














}