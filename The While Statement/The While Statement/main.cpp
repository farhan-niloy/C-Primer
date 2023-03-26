//
//  main.cpp
//  The While Statement
//
//  Created by Farhan Niloy on 26/3/23.
//

#include <iostream>
int main()
{
    int sum1=0, sum2=1;
    
    while (sum2<=10){
        sum1+=sum2;
        ++sum2;
    }
    
    std::cout<<"The sum is:"<<sum1 <<std::endl;
    return 0;
    
}
