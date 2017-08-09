//
//  main.cpp
//  Fibonacci
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
using namespace std;

int func_Factorial(int n)
{
    if(n==1) return 1;
    return n * func_Factorial(n-1);
    
}


int recurv_Fibonacci(int n)
{
    if(n <= 1) return 1;
    return recurv_Fibonacci(n-1) + recurv_Fibonacci(n-2);

}

int repeat_Fibonacci(int n)
{
    int a = 1, b = 1;
    int sum = 0;
    
    if(n <= 2) return 1;
    for(int i=0; i<n-1; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout<<func_Factorial(5)<<endl;
    cout<<recurv_Fibonacci(5)<<endl;;
    cout<<repeat_Fibonacci(5)<<endl;
    
    return 0;
}
