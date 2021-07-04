#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char ch;
    int x = 0, y = 0;
    ch = cin.get();
    while (ch != '\n')
    {
        if (ch == 'N')
        {
            y++;
        }
        else if (ch == 'E')
        {
            x++;
        }
        else if (ch == 'S')
        {
            y--;
        }
        else 
        {
            x--;
        }
        ch = cin.get();
    }

    // 1st quadrant
    if (x>=0 && y>=0)
    {
        for (int i = 0; i < x; i++)
        {
            cout<<'E';
        }
        for (int i = 0; i < y; i++)
        {
            cout<<'N';
        }
    }
    
    // 2nd quadrant
    else if (x<=0 && y>=0)
    {
        for (int i = 0; i < y; i++)
        {
            cout<<'N';
        }
        for (int i = 0; i < abs(x); i++)
        {
            cout<<'W';
        }
    }

    // 3rd quadrant
    else if (x<=0 && y<=0)
    {
        for (int i = 0; i < abs(y); i++)
        {
            cout<<'S';
        }
        for (int i = 0; i < abs(x); i++)
        {
            cout<<'W';
        }
    }

    // 4th quadrant
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout<<'E';
        }
        for (int i = 0; i < abs(y); i++)
        {
            cout<<'S';
        }
    }
    return 0;
}