#include "functions.h"
using namespace std;

bool checkNumber(string str) 
{
    int n=1;
    if (str[0]=='-')
    {
        n++;
        for (int i = 1; i < str.length(); i++)
            if (isdigit(str[i]) == false) n = n-2;    
    } 
    
    else for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false) n = n-2;
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
    else cout << "!!!-ERROR-!!! - Unable to open file: " << file_name_char << endl;
}


