//
//  main.cpp
//  CountDiv
//
//  Created by 김상영 on 2017. 8. 9..
//  Copyright © 2017년 impsoft. All rights reserved.
//
#include <iostream>

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int ret = (B/K) + 1;
    
    if(A != 0) ret-= ((A-1)/K) +1;
    
    return ret;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    std::cout<<solution(6, 11, 2)<<std::endl;
    
    return 0;
}
