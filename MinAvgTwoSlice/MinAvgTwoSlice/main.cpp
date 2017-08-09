//
//  main.cpp
//  MinAvgTwoSlice
//
//  Created by 김상영 on 2017. 8. 9..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    double minValue=0x7fffffff;
    int ret=0;
    
    for(vector<int>::size_type i=0; i<A.size()-2; i++)
    {
        if((A[i] + A[i+1]) / 2.0 < minValue)
        {
            minValue = (A[i] + A[i+1]) / 2.0;
            ret = (int) i;
        }
        
        if((A[i] + A[i+1] + A[i+2]) / 3.0 < minValue)
        {
            minValue = (A[i] + A[i+1] + A[i+2]) / 3.0;
            ret = (int) i;
        }
    }
    if((A[A.size()-1] + A[A.size()-2]) / 2 < minValue)
    {
        minValue = (A[A.size()-1] + A[A.size()-2]) / 2;
        ret = (int) A.size() - 2;
    }
    
    return ret;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    
    A.push_back(4);
    A.push_back(2);
    A.push_back(2);
    A.push_back(5);
    A.push_back(1);
    A.push_back(5);
    A.push_back(8);
    
    std::cout<<solution(A)<<std::endl;
    return 0;
}
