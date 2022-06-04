#include<iostream>
using namespace std;
int grid[10][10], sum = 0, n, N = 10, ans = INT_MIN;
int dx[8] = {1,1,2,-2,-1,-1,2,-2};
int dy[8] = {2,-2,1,-1,2,-2,-1,1};

void input()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>grid[i][j];
            if (grid[i][j] == 1)
            {
                sum ++;
            }
        }
    }
}

void knight(int x, int y, int cnt)
{
    ans = max(ans, cnt);
    for (int i = 0; i < 8; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 and xx < N and yy >= 0 and yy<N and grid[xx][yy] == 1)
        {
            grid[xx][yy] = 0;
            knight(xx, yy, cnt + 1);
            grid[xx][yy] = 1;   // bcktrcking
        }
    }
}

int main()
{
    cin>>n;
    input();
    grid[0][0] = 0;
    knight(0,0,1);  // x-axis, y-axis, jump
    cout<<sum-ans;
    return 0;
}