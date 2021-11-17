#include <iostream>
//#include <conio.h> for windows users who will use getch() in switch condition

using namespace std;

int main()
{
    char ch;
    switch(scanf(&ch))
    {
        case 37:
            cout<<"Left Button"<<endl;
            break;
        case 38:
            cout<<"Up Button"<<endl;
            break;
        case 39:
            cout<<"Right Button"<<endl;
            break;
        case 40:
            cout<<"Down Button"<<endl;
            break;
        default:
            break;
    }

    return 0;

}
