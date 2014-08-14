/* 
 * File:   main.cpp
 * Author: Patrick Glenning
 * Created on August 14, 2014, 1:54 AM
 * Purpose: To display recommended talent builds for heroes in Heroes of the Storm
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void cntinue();
void heroMenu1();
void heroMenu2();
void heroMenu3();
void heroMenu4();
void Rehgar();
void Zegara();
void Murky();
void Brightwing();
void Tychus();
void LiLi();
void Stitches();
void Arthas();
void Diablo();
void Tyrael();
void ETC();
void Sonya();
void Muradin();
void Kerrigan();
void Nova();
void Falstad();
void Valla();
void Illidan();
void Raynor();
void Zeratul();
void Uther();
void Malfurion();
void Tassadar();
void Tyrande();
void Nazeebo();
void Gazlowe();
void Abathur();
void SgtHammer();

//Begin Execution
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool run=true;
        heroMenu1();
    //Finish him!!
    return 0;
}

void heroMenu1(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Heroes of the Storm Talent Builds     *" << endl <<
            "*                                        *" << endl <<
            "*  1) Abathur                            *" << endl <<
            "*  2) Arthas                             *" << endl <<
            "*  3) Brightwing                         *" << endl <<
            "*  4) Diablo                             *" << endl <<
            "*  5) E.T.C.                             *" << endl <<
            "*  6) Falstad                            *" << endl <<
            "*  7) Gazlowe                            *" << endl <<
            "*  8) Illidan                            *" << endl <<
            "*  9) Next 7 heroes                      *" << endl <<
            "* 10) Exit Program                       *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    switch(x){
        case 1:{
            Abathur();
            break;
        }
        case 2:{
            Arthas();
            break;
        }
        case 3:{
            Brightwing();
            break;
        }
        case 4:{
            Diablo();
            break;
        }
        case 5:{
            ETC();
            break;
        }
        case 6:{
            Falstad();
            break;
        }
        case 7:{
            Gazlowe();
            break;
        }
        case 8:{
            Illidan();
            break;
        }
        case 9:{
            heroMenu2();
            break;
        }
        default:{
            break;
        }
    }
}

void heroMenu2(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Heroes of the Storm Talent Builds     *" << endl <<
            "*                                        *" << endl <<
            "*  1) Kerrigan                           *" << endl <<
            "*  2) Zegara                             *" << endl <<
            "*  3) Li Li                              *" << endl <<
            "*  4) Malfurion                          *" << endl <<
            "*  5) Muradin                            *" << endl <<
            "*  6) Murky                              *" << endl <<
            "*  7) Nazeebo                            *" << endl <<
            "*  8) Next 7 heroes                      *" << endl <<
            "*  9) Exit Program                       *" << endl <<
            "*                                        *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    switch(x){
        case 1:{
            Kerrigan();
            break;
        }
        case 2:{
            Zegara();
            break;
        }
        case 3:{
            LiLi();
            break;
        }
        case 4:{
            Malfurion();
            break;
        }
        case 5:{
            Muradin();
            break;
        }
        case 6:{
            Murky();
            break;
        }
        case 7:{
            Nazeebo();
            break;
        }
        case 8:{
            heroMenu3();
            break;
        }
        default:{
            break;
        }
    }
}

void heroMenu3(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Heroes of the Storm Talent Builds     *" << endl <<
            "*                                        *" << endl <<
            "*  1) Nova                               *" << endl <<
            "*  2) Raynor                             *" << endl <<
            "*  3) Rehgar                             *" << endl <<
            "*  4) Sgt Hammer                         *" << endl <<
            "*  5) Sonya                              *" << endl <<
            "*  6) Stitches                           *" << endl <<
            "*  7) Tassadar                           *" << endl <<
            "*  8) Next 7 heroes                      *" << endl <<
            "*  9) Exit Program                       *" << endl <<
            "*                                        *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    switch(x){
        case 1:{
            Nova();
            break;
        }
        case 2:{
            Raynor();
            break;
        }
        case 3:{
            Rehgar();
            break;
        }
        case 4:{
            SgtHammer();
            break;
        }
        case 5:{
            Sonya();
            break;
        }
        case 6:{
            Stitches();
            break;
        }
        case 7:{
            Tassadar();
            break;
        }
        case 8:{
            heroMenu4();
            break;
        }
        default:{
            break;
        }
    }
}

void heroMenu4(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Heroes of the Storm Talent Builds     *" << endl <<
            "*                                        *" << endl <<
            "*  1) Tychus                             *" << endl <<
            "*  2) Tyrael                             *" << endl <<
            "*  3) Tyrande                            *" << endl <<
            "*  4) Uther                              *" << endl <<
            "*  5) Valla                              *" << endl <<
            "*  6) Zegara                             *" << endl <<
            "*  7) Zeratul                            *" << endl <<
            "*  8) First 7 heroes                     *" << endl <<
            "*  9) Exit Program                       *" << endl <<
            "*                                        *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    switch(x){
        case 1:{
            Tychus();
            break;
        }
        case 2:{
            Tyrael();
            break;
        }
        case 3:{
            Tyrande();
            break;
        }
        case 4:{
            Uther();
            break;
        }
        case 5:{
            Valla();
            break;
        }
        case 6:{
            Zegara();
            break;
        }
        case 7:{
            Zeratul();
            break;
        }
        case 8:{
            heroMenu1();
            break;
        }
        default:{
            break;
        }
    }
}

void Rehgar(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Rehgar Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Zegara(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Zegara Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void Murky(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Murky Talent Builds                   *" << endl <<
            "*                                        *" << endl <<
            "*  1) Hero and Tower Harass              *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - Bigger Slime" << endl <<
                    " Level 4  - Gathering Power" << endl <<
                    " Level 7  - Slimy End" << endl <<
                    " Level 10 - March of the Murlocs" << endl <<
                    " Level 13 - Hidden Assault" << endl <<
                    " Level 16 - Compressed Air" << endl <<
                    " Level 20 - Never-ending Murlocs" << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Brightwing(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Brightwing Talent Builds              *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Tychus(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Tychus Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void LiLi(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Li Li Talent Builds                   *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Stitches(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Stitches Talent Builds                *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Arthas(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Arthas Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Diablo(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Diablo Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Tyrael(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Tyrael Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void ETC(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  E.T.C. Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Sonya(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Sonya Talent Builds                   *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Muradin(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Muradin Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Kerrigan(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Kerrigan Talent Builds                *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Nova(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Nova Talent Builds                    *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - Ambush Snipe" << endl <<
                    " Level 4  - FN92 Sniper Rifle" << endl <<
                    " Level 7  - Follow Through" << endl <<
                    " Level 10 - Triple Tap" << endl <<
                    " Level 13 - Advanced Cloaking" << endl <<
                    " Level 16 - Crippling Shot" << endl <<
                    " Level 20 - Fast Reload" << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Falstad(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Falstad Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Valla(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Valla Talent Builds                   *" << endl <<
            "*                                        *" << endl <<
            "*  1) Basic Attack Damage                *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - Rancor" << endl <<
                    " Level 4  - Manticore" << endl <<
                    " Level 7  - Battle Momentum" << endl <<
                    " Level 10 - Strafe" << endl <<
                    " Level 13 - Giant Killer" << endl <<
                    " Level 16 - Executioner/Tumble" << endl <<
                    " Level 20 - Fury of the Storm" << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void Illidan(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Illidan Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Raynor(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Raynor Talent Builds                  *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Zeratul(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Zeratul Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Perfect Assassin                   *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - Seasoned Marksman" << endl <<
                    " Level 4  - Gathering Power" << endl <<
                    " Level 7  - Follow Through" << endl <<
                    " Level 10 - Shadow Assault" << endl <<
                    " Level 13 - Assassin\'s Blade" << endl <<
                    " Level 16 - Executioner" << endl <<
                    " Level 20 - Nerazim Fury" << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void Uther(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Uther Talent Builds                   *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void Malfurion(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Malfurion Talent Builds               *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Tassadar(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Tassadar Talent Builds                *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void Tyrande(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Tyrande Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu4();
        }
        default:{
            heroMenu4();
        }
    }
}

void Nazeebo(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Nazeebo Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu2();
        }
        default:{
            heroMenu2();
        }
    }
}

void Gazlowe(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Gazlowe Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void Abathur(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Abathur Talent Builds                 *" << endl <<
            "*                                        *" << endl <<
            "*  1) Bursty Single Target               *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - " << endl <<
                    " Level 4  - " << endl <<
                    " Level 7  - " << endl <<
                    " Level 10 - " << endl <<
                    " Level 13 - " << endl <<
                    " Level 16 - " << endl <<
                    " Level 20 - " << endl;
            cntinue();
            heroMenu1();
        }
        default:{
            heroMenu1();
        }
    }
}

void SgtHammer(){
    int x;
    cout << " ________________________________________ " << endl <<
            "*                                        *" << endl <<
            "*  Sgt Hammer Talent Builds              *" << endl <<
            "*                                        *" << endl <<
            "*  1) Extreme Range                      *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*                                        *" << endl <<
            "*  Press any other key to return to menu *" << endl <<
            "*________________________________________*" << endl <<
            "   Make your selection: ";
    cin >> x;
    cout << string(50,'\n');
    cin.ignore();
    switch(x){
        case 1:{
            cout << " Level 1  - Advanced Artillery" << endl <<
                    " Level 4  - Vampiric Assault/Focused Attack" << endl <<
                    " Level 7  - Hover Siege Mode" << endl <<
                    " Level 10 - Blunt Force Gun" << endl <<
                    " Level 13 - Crucio X-2 Cannon" << endl <<
                    " Level 16 - Graduating Range" << endl <<
                    " Level 20 - Orbital BFG" << endl;
            cntinue();
            heroMenu3();
        }
        default:{
            heroMenu3();
        }
    }
}

void cntinue(){
    char x;
    cout << "Press enter to continue";
    cin.get(x);
    cout << string(50,'\n');
}