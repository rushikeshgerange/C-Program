#include<stdio.h>   //Header File


int Addition(int No1,int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}

int Substraction(int Data1,int Data2 )
{
    int Sub = 0;
    Sub = Data1 - Data2;
    return Sub;
}

int Multiplication(int Val1, int Val2)
{
    int Multi = 0;
    Multi = Val1 * Val2;
    return Multi;
}

int Division(int No3, int No4)
{
    int Div =0;
    Div = No3 / No4;
    return Div;
}
int main()          //Main Function
{
    int Value1 =10;
    int Value2 =11;
    int Value3 =500;
    int Value4 =300;
    int Ans = 0;
    

    Ans = Addition(Value1 , Value2);          //Function call
    printf("Addition is : %d\n", Ans);

    Ans = Substraction(Value3 , Value4);       //Function call
    printf("Substraction is : %d\n", Ans);

    Ans = Multiplication(Value1,Value2);        //Function call
    printf("Multiplcation is : %d\n",Ans);

    Ans = Division(Value3,Value1);              //Function call
    printf("Division is : %d\n", Ans);




    return 0;
}