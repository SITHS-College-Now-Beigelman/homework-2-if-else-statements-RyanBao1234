//Ryan Bao
//Homework 2 Part 2
//10/1/2024

#include <iostream>                                       //io stream for ease of coding

using namespace std;                                      //std for ease of coding

int main()                                                //initialize main
{
    float judge_1;                                          //initialize variable
    float judge_2;   
    float judge_3;   
    float judge_4;   
    float judge_5;   
    float judge_6;                            
    float highest;
    float lowest;
    float average;
    average = 0;
    
    cout << "Judge 1 - What is your score?" << endl;                          // Ask for user input
    cin >> judge_1;  
    cout << "Judge 2 - What is your score?" << endl;               
    cin >> judge_2;
    cout << "Judge 3 - What is your score?" << endl;               
    cin >> judge_3;   
    cout << "Judge 4 - What is your score?" << endl;                          
    cin >> judge_4; 
    cout << "Judge 5 - What is your score?" << endl;                        
    cin >> judge_5;       
    cout << "Judge 6 - What is your score?" << endl;                     
    cin >> judge_6;  
  
    highest = -1;                                                      //Set highest and lowest to integers outside of judges range (0.0 - 10.0)
    lowest = 11;
    
    if (judge_1 < lowest)                                               //Find lowest
        lowest = judge_1;
    if (judge_2 < lowest)
        lowest = judge_2;
    if (judge_3 < lowest)
        lowest = judge_3;
    if (judge_4 < lowest)
        lowest = judge_4;
    if (judge_5 < lowest)
        lowest = judge_5;
    if (judge_6 < lowest)
        lowest = judge_6;
        
    if (judge_1 > highest)                                               //Find highest
        highest = judge_1;
    if (judge_2 > highest)
        highest = judge_2;
    if (judge_3 > highest)
        highest = judge_3;
    if (judge_4 > highest)
        highest = judge_4;
    if (judge_5 > highest)
        highest = judge_5;
    if (judge_6 > highest)
        highest = judge_6;
    
    average = (judge_1 + judge_2 + judge_3 + judge_4 + judge_5 + judge_6) - lowest - highest;
    cout << average/4 << endl;
                                                     

return 0;
}

/*
Judge 1 - What is your score?
10
Judge 2 - What is your score?
8
Judge 3 - What is your score?
7
Judge 4 - What is your score?
6
Judge 5 - What is your score?
5
Judge 6 - What is your score?
4
6.5
*/