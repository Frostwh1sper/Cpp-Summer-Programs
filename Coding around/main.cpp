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
#include <string>
#include <ctime>
using namespace std;

//Global Constants
int SIZE=100;

//Function prototypes
void prntman(int);
void pickwrd(string &);
void checkGuess(int &,string,char,char [],char []);

//Begin Execution
int main(int argc, char** argv) {
    
    //Seed the RNG
    srand(time(0));

    //Declare and initialize variables
    string word;
    int wrong;
    char guess;
    char cont;
    bool game=true;
    
    do{
        wrong=0;
        //Pick random word
        pickwrd(word);
        
        //Assign values to temporary word
        char temp[word.size()];
        for(int i=0; i<word.size(); i++){
            temp[i]='_';
        }
        
        //Create array for tracking guesses
        char guesses[26];
        
        //Print hangman
        prntman(wrong);
        
        //Print word
        for(int i=0; i<word.size(); i++){
            cout << temp[i] << " ";
        }
        cout << endl << endl;
        do{
            game=false;
            
            
            //User guesses
            cout << "Guess your letter: ";
            cin >> guess;
            cout << string(50,'\n');
            
            //Check guess against word
            checkGuess(wrong,word,guess,temp,guesses);
            
            //End game
            for(int i=0; i<word.size(); i++){
                if(word[i]!=temp[i]) game=true;
            }
            if(!game){
                cout << "Well played!!" << endl;
            }
            if(wrong==6){
                cout << "You've run out of guesses, nice try! The word was: " << word << endl;
                game=false;
            }
            //Print hangman
            prntman(wrong);
            
            //Print word
            for(int i=0; i<word.size(); i++){
                cout << temp[i] << " ";
            }
            cout << "     Past guesses: ";
            for(int i=0; i<wrong; i++){
                cout << guesses[i] << " ";
            }
            cout << endl << endl;
            
        }while(game);
        cout << "Would you like to play again? (y/n) ";
        cin >> cont;
    }while(cont=='y');
    
    //Finish him!!
    return 0;
}

void checkGuess(int &wrong, string word, char guess, char temp[], char guesses[]){
    bool miss=true;
    for(int i=0; i<word.size(); i++){
        if(word[i]==guess){
            temp[i]=word[i];
            miss=false;
        }
    }
    if(miss){
        guesses[wrong]=guess;
        wrong++;
    }
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