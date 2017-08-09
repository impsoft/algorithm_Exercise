//
//  main.cpp
//  MissingInteger
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int check[100010];

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(vector<int>::size_type i=0; i<A.size(); ++i)
    {
        if(A[i] > 0 && A[i] <= 100010) check[A[i]-1] = 1;
        
    }
    
    for(vector<int>::size_type i=0; i<=A.size(); ++i)
    {
        if(check[i] == 0) return (int) i+1;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    
    A.push_back(1);
    A.push_back(3);
    A.push_back(6);
    A.push_back(4);
    A.push_back(1);
    A.push_back(2);
    
    cout<<solution(A)<<endl;
    
    return 0;
}
