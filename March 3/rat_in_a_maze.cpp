#include<iostream>
using namespace std;
int sol[100][100] = {0};

bool rat_in_a_maze(char maze[][10], int i, int j, int m, int n)     // bool isliye as we have to check whether or not the path exists
{
    // base case
    if (i==n-1 && j==m-1)
    {
        sol[i][j] = 1;
        // printing the 2d array
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < m; l++)
            {
                cout<<sol[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        // return true;
        return false; // if sare paths print karane ho to
    }
    
    // recursive case
    sol[i][j] = 1;     // puts 1 at current position

        // check for rightward path
    if((j+1)<m  &&  maze[i][j+1] != 'X')
    {
        bool kya_right_se_path_exist_karta_hai = rat_in_a_maze(maze, i, j+1, m, n);
        if (kya_right_se_path_exist_karta_hai)
        {
            return true;
        }
    }
        // check for downward path
    if((i+1)<n  &&  maze[i+1][j] != 'X')
    {
        bool kya_niche_se_path_exist_karta_hai = rat_in_a_maze(maze, i+1, j, m, n);
        if (kya_niche_se_path_exist_karta_hai)
        {
            return true;
        }
    }
    
    sol[i][j] = 0;
    return false; 
}


int main()
{
    char maze[][10] = {
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    int m = 4, n = 4; // m denotes columns and n denotes rows
    bool ans = rat_in_a_maze(maze, 0, 0, m, n);
    if (ans==false)
    {
        cout<<"Path does not exist";
    }
    return 0;
}