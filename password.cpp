#include "password.h"

using namespace std;
 
std::string takePasswdFromUser()
{
    // Stores the password
    string passwd = "";
    char ch_ipt,sp='*';
 
    // Until condition is true
    while (true) {
 
        ch_ipt = getch();
 
        // if the ch_ipt
        if (ch_ipt == IN::IN_RET) {
            cout << endl;
            return passwd;
        }
        else if (ch_ipt == IN::IN_BACK
                 && passwd.length() != 0) {
            passwd.pop_back();
 
            // Cout statement is very
            // important as it will erase
            // previously printed character
            cout << "\b \b";
 
            continue;
        }
 
        // Without using this, program
        // will crash as \b can't be
        // print in beginning of line
        else if (ch_ipt == IN::IN_BACK
                 && passwd.length() == 0) {
            continue;
        }
 
        passwd.push_back(ch_ipt);
        cout << sp;
    }
}
 

