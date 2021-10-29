#include "functions.h"
#include "game_locale.h"
using namespace std;

bool checkNumber(string str) 
{
    int n=1;
    if (str[0]=='-')
    {
        n++;
        for (unsigned int i = 1; i < str.length(); i++)
        {
            if (isdigit(str[i]) == false) n = n - 2;
        }
    } 
    
    else 
        for (unsigned int i = 0; i < str.length(); i++)
        {
            if (isdigit(str[i]) == false) n = n - 2;
        }
        if(n<=0) return false;
    return true;
}

void getText(const char file_name_char[50])
{

    string line;
    ifstream file (file_name_char);
    
    if(file.is_open())
    {
        while(getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else cout << Locale::getText(Locale::file_error) << file_name_char << endl;
}


