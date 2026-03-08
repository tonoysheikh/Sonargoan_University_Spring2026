#include<stdio.h>

int main()
{
    int marks;
    float gpa;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 80 && marks <= 100)
    {
        gpa = 5.00;
        printf("Grade: A+  GPA: %.2f", gpa);
    }
    else if(marks >= 70)
    {
        gpa = 4.00;
        printf("Grade: A  GPA: %.2f", gpa);
    }
    else if(marks >= 60)
    {
        gpa = 3.50;
        printf("Grade: A-  GPA: %.2f", gpa);
    }
    else if(marks >= 50)
    {
        gpa = 3.00;
        printf("Grade: B  GPA: %.2f", gpa);
    }
    else if(marks >= 40)
    {
        gpa = 2.00;
        printf("Grade: C  GPA: %.2f", gpa);
    }
    else if(marks >= 33)
    {
        gpa = 1.00;
        printf("Grade: D  GPA: %.2f", gpa);
    }
    else
    {
        gpa = 0.00;
        printf("Grade: F  GPA: %.2f", gpa);
    }

    return 0;
}