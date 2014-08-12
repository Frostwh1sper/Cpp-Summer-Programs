/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on August 11, 2014, 9:11 PM
 * Purpose: Excute the game Hangman
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

//Global Constants
int SIZE=100;

//Function prototypes
void prntman(int);
void pickwrd(string &);

//Begin Execution
int main(int argc, char** argv) {
    
    //Seed the RNG
    srand(time(0));

    //Declare and initialize variables
    string word;
    int wrong;
    char cont;
    bool game=true;
    
    do{
        wrong=0;
        //Pick random word
        pickwrd(word);
        do{
            //Print hangman
            prntman(wrong);
            wrong++;
        }while(wrong<=6);
        cout << "Would you like to play again? (y/n) ";
        cin >> cont;
    }while(cont=='y');
    
    //Finish him!!
    return 0;
}

void prntman(int wrong){
    switch(wrong){
        case 0:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 1:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 2:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "    |     |" << endl <<
                    "    |     |" << endl <<
                    "          |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 3:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "    |     |" << endl <<
                    "    |     |" << endl <<
                    "   /      |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 4:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "    |     |" << endl <<
                    "    |     |" << endl <<
                    "   / \\    |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 5:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "   /|     |" << endl <<
                    "    |     |" << endl <<
                    "   / \\    |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
        case 6:{
            cout << "    _______" << endl <<
                    "    |     |" << endl <<
                    "    0     |" << endl <<
                    "   /|\\    |" << endl <<
                    "    |     |" << endl <<
                    "   / \\    |" << endl <<
                    "          |" << endl <<
                    "   _______|" << endl;
            break;
        }
    }
}

void pickwrd(string &word){
    int randnum=rand()%109;
    //Open word file
    ifstream input;
    input.open("list.txt"); //109 words in text file
    for(int i=0; i<randnum; i++){
        input >> word;
    }
    //Close word file
    input.close();
}