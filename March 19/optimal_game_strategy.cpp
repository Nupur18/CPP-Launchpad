#include<iostream>
using namespace std;
# define ll long long int 
int coins[40];

ll optimal_game_strategy(int i, int j)
{
    // base case 
    if (i>j)
    {
        return 0;   // dono ko koi sikka nhi milega 
    }
    
    // recursive case
        // case 1 (4 1 3 2)
        ll first_pick = coins[i] + min(optimal_game_strategy(i+2, j), optimal_game_strategy(i+1, j-1));

        // case 2 (1 2 3 4)
        ll last_pick = coins[j] + min(optimal_game_strategy(i, j-2), optimal_game_strategy(i+1, j-1));

    return max(first_pick, last_pick);
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    cout<<optimal_game_strategy(0, n-1);
    return 0;
}