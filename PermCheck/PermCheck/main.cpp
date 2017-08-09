//
//  main.cpp
//  PermCheck
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    for(vector<int>::size_type i=0; i<A.size(); ++i)
    {
        if((int)i+1!=A[i]) return 0;
    }
    
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    
    A.push_back(4);
    A.push_back(1);
    A.push_back(3);
    A.push_back(2);
    
    cout<<solution(A)<<endl;

    return 0;
}
