#include <math.h>
#include <stdio.h>


//Truncation
int truncation(double num)
{
    return num;
}

//Rounding
int rounding(double num)
{
    if (num < 0 ) 
        return num - 0.5;
    else 
        return num + 0.5; 
}

//Saturation arithmetic
int saturation(int a, int b, int min, int max,char op)
{
    int result;
    switch (op)
    {
        case '+': 
            result= a+b;
            break;
        case '-': 
            result= a-b;
            break;
        case '*': 
            result= a*b;
            break;
    }
    if(result >= max){
        return max;
    }
    else if (result <= min){
        return min;
    }
    else{
        return result;
    }
}


void main(void)

{	
	double num1;
        int num2,num3,num4;
	num1 = -2.585;
        num2 = truncation(num1);
        num3 = rounding(num1);
        
	printf("num1 = %f \n", num1 );
        printf("num2 = %d \n", num2 );
	printf("num3 = %d \n", num3 );
        
        int min = -100, max=100;
        
        int a = 2;
        int b = 1000;
        
        num4=saturation(a,b,min,max,'-'); // Operation with saturation : a X b
        printf("fp3 = %d \n", num4 );


}