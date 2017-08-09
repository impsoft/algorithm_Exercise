//
//  main.cpp
//  TapeEquilibrium
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int preValue=0, postValue=0;
    int sol = 0x3f3f3f3f;
    
    vector<int>::size_type i;
    
    for(i=0; i<A.size(); ++i)
    {
        postValue += A[i];
    }
    
    for(i=1; i<A.size(); ++i)
    {
        preValue += A[i-1];
        int buf = abs(preValue*2-postValue);
        //cout<<preValue<<", "<<postValue<<", "<<buf<<endl;
        if(sol > buf) sol = buf;
    }
    
    return sol;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    
    A.push_back(3);
    A.push_back(1);
    A.push_back(2);
    A.push_back(4);
    A.push_back(3);
    
    cout<<solution(A)<<endl;
    return 0;
}
