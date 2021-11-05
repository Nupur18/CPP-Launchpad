#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int no)
{
    int count = 0;
    while (no != 0)
    {
        count ++;
        no = no/10;
    }
    return count;
}

int main()
{
    int t;
    int arr[100] = {0};
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        // like bubble sort
        for (int i = 0; i <= n-2 ; i++)
        {
            for (int j = 0; j <= n-2; j++)
            {
                int a = arr[j];
                int b = arr[j+1];
                int digit_count_a = countDigits(a);
                int digit_count_b = countDigits(b);

                long long int no1 = a*pow(10, digit_count_b) + b;
                long long int no2 = b*pow(10, digit_count_a) + a;
                if (no1 > no2)
                {
                    swap(arr[j], arr[j+1]);
                }
            }   
        }
        // printing number
        for (int i = n-1; i >= 0; i--)
        {
            cout<<arr[i];
        } 
    }
    return 0;
}