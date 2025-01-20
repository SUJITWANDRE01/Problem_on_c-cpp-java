/*
    Step1 : Understand the problem statement
    Step2 : Write the algorithm
    Step3 : Decide the programming language
    Step4 : Write the program
    Step5 : Test the program
*/

/*
    Problem Statement : 
    Write a program which is used to perform ADDITION of two numbers.
*/

/*
    Step1 : Understand the problem statement
    User is going to enter the data in decimal format.
    If entered data is negative we have to convert it to positive value.
*/

/*
    Step2 : Write the algorithm

    START
        Accept first input
        Accept second input
        If any of the input is negative then convert it into positive
        Perform the addition of that accepted values
        Display the addition
    STOP
*/

/*
    Step3 : Decide the programming language
    According to the problem statement we selct C programming.
*/

/*
    Step4 : Write the program
*/

#include<stdio.h>

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;
}

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);
    
    fAns = Addition(fNo1, fNo2);

    printf("Addition is : %f\n",fAns);
    
    return 0;
}