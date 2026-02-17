
#include <stdio.h>

int main()
{
    int BEE, FAI, MATHS2, EGD, ETC;
    int totalMarks = 500;
    int obtainedMarks;
    float per;

    printf("Please enter the marks of BEE: ");
    scanf("%d", &BEE);

    printf("Please enter the marks of FAI: ");
    scanf("%d", &FAI);

    printf("Please enter the marks of MATHS-2: ");
    scanf("%d", &MATHS2);

    printf("Please enter the marks of EGD: ");
    scanf("%d", &EGD);

    printf("Please enter the marks of ETC: ");
    scanf("%d", &ETC);

    obtainedMarks = BEE + FAI + MATHS2 + EGD + ETC;

    per = (obtainedMarks * 100.0) / totalMarks;

    printf("\nTotal Obtained Marks = %d", obtainedMarks);
    
    if(per<40.0)
       printf("fail");
    else if(per>=40.0 && per<=60)
       printf("D");
    else if(per>=60.0 && per<=75)
       printf("C");
    else if(per>=75.0 && per<90) 
        printf("B"); 
    else if (per>=90.0)
    printf("A");
       return 0;
}
