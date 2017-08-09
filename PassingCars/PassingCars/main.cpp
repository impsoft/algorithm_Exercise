//
//  main.cpp
//  PassingCars
//
//  Created by 김상영 on 2017. 8. 9..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long long sol = 0;
    long cnt = 0;
    
    for(vector<int>::size_type i=0; i<A.size(); ++i)
    {
        if(A[i] == 0){ cnt++; continue; }
        else sol += cnt;
    }
    
    if(sol > 1000000000) return -1;
    
    return (int)sol;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    
    A.push_back(0);
    A.push_back(1);
    A.push_back(0);
    A.push_back(1);
    A.push_back(1);
    
    cout<<solution(A)<<endl;
    
    return 0;
}
