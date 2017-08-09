//
//  main.cpp
//  MaxCounters
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    vector<int> c(N, 0);
    int max=0, min=0;
    
    for(vector<int>::size_type i=0; i<A.size(); ++i)
    {
        if(A[i] <= N)
        {
            if(c[A[i]-1] < min)
            {
                c[A[i]-1] = min + 1;
            }
            else ++c[A[i]-1];
            
            max = c[A[i]-1] < max ? max : c[A[i]-1];
        }
        else if(A[i] == N+1)
        {
            min = max;
        }
    }
    
    for(int i=0; i<N; ++i)
    {
        if(c[i] < min) c[i] = min;
        
    }
    
    return c;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A, sol;
    int N = 5;
    
    A.push_back(3);
    A.push_back(4);
    A.push_back(4);
    A.push_back(6);
    A.push_back(1);
    A.push_back(4);
    A.push_back(4);
    
    sol = solution(N, A);
    
    cout<<"[";
    for(vector<int>::size_type i=0; i<sol.size(); ++i)
    {
        cout<<sol[i]<<",";
    }
    cout<<"]"<<endl;
    
    return 0;
}
