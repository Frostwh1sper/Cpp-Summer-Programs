/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 *
 * Created on October 25, 2014, 12:01 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>


const int SIZE = 5;

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Seed RNG
    srand(time(0));
    
    //Declare array
    int number[SIZE];
    
    //Give randomly generated values to array memory positions
    for(int i = 0; i < SIZE; i++){
        number[i] = rand()%SIZE;
    }
    
    //Print array values
    for(int i = 0; i < SIZE; i++){
        cout << number[i];
    }
    
    return 0;
}

