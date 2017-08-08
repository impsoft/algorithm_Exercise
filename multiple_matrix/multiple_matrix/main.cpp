//
//  main.cpp
//  multiple_matrix
//
//  Created by 김상영 on 2017. 8. 2..
//  Copyright © 2017년 impsoft. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int A[2][4] = {{5,7,-3,4},{2,-5,3,6}};
    int B[4][3] = {{3,0,8}, {-5,1,-1}, {7,4,4}, {2,4,3}};
    int S[2][3];
    
    int i,j,k;
    int sum;
    
    for(int i=0;i <2; i++)
    {
        for(j=0; j<3; j++)
        {
            sum = 0;
            for(k=0; k<4; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            S[i][j] = sum;
        }
    }
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", S[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
