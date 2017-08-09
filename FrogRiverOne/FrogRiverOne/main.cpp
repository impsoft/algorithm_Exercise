//
//  main.cpp
//  FrogRiverOne
//
//  Created by 김상영 on 2017. 8. 8..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

bool check[100010];
int cnt;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(vector<int>::size_type i=0; i<A.size(); ++i)
    {
        if(check[A[i]-1] == 0)
        {
            check[A[i]-1] = 1;
            cnt++;
        }
        if(cnt == X) return (int)i;
    }
    
    return -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> A;
    int X = 5;
    
    A.push_back(1);
    A.push_back(3);
    A.push_back(1);
    A.push_back(4);
    A.push_back(2);
    A.push_back(3);
    A.push_back(5);
    A.push_back(4);
    
    cout<<solution(X, A)<<endl;
    

    
    return 0;
}
