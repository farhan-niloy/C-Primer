#include <iostream>

int main(){
    // Exercises Section 1.4.1
    // Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.
 
    int num = 0, sum = 1;
        while(num <= 100)
        {
            sum += num;
            ++num;
        }
        std::cout << "The sum from 50 to 100 is " << sum << std::endl;

   // Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.
    
    int num1 = 10;
    while(num1 >= 0)
    {
        std::cout << num1 << std::endl;
        --num1;
    }

    // Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
    
    
    std::cout<<"Write two int you want to see the range between: " <<std::endl;
    int value=0, value1=0;
    std::cin>>value >>value1;
    
    while(value>=value1){
        value+=value1;
        ++value;
    }
    
    std::cout<<"The range from " <<value " to " <<value1 " is " <<value1-value <<std::endl;
    
    
    
    
    
    return 0;
}
