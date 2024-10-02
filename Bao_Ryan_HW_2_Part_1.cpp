//Ryan Bao
//Homework 2 Part 1  
//10/1/2024

#include <iostream>                                                          //Use std for ease of coding

using namespace std;                                                 //std for ease of coding

int main()                                                                    //initialize main
{ 
    int month;                                                            //initialize variable
    int day; 
    double dob; 

    cout << "What is the month and day you were born? (Format Example: 3 for month and 01 for day)" << endl;                        // Ask for user input
    cin >> month >> day; 
    dob = ( (float(month) * 100) + float(day) )/100;                                             //Convert ints to double format for easier coding 
    cout << endl; 
    
    if (dob >= 3.21 && dob <= 6.20)                                     //Find season
    { 
        cout << "It is now Spring!" << endl; 
    } 
    if (dob >= 6.21 && dob <= 9.22) 
    { 
        cout << "It is now Summer!" << endl; 
    } 
    if (dob >= 9.23 && dob <= 12.21) 
    { 
        cout << "It is now Fall!" << endl; 
    } 
    if (dob >= 12.22 && dob <= 12.31) 
    { 
        cout << "It is now Winter!" << endl; 
    } 
    if (dob >= 1.01 && dob <= 3.20) 
    { 
        cout << "It is now Winter!" << endl; 
    }

    cout << endl; 

    return 0; 
}

/*
What is the month and day you were born? (Format Example: 3 for month and 01 for day)
3 25

It is now Spring!
*/