#include<iostream>
using namespace std;
int main()
{
    int t, n, a[1000], b[100];
    cin>>t;
    while (t--)
    {
        cin>>n;
        int csum = 0;
        int ms = 0, cs = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i] = (-a[i]);
            csum = csum + a[i];
            cs = cs + a[i];
            if (cs<0)
            {
                cs = 0;
            }
            ms = max(ms,cs);
        }
        int cand1 = ms; 

        ms = 0, cs = 0;  
        for (int i = 0; i < n; i++)
        {
            cs = cs + b[i];
            if (cs<0)
            {
                cs = 0;
            }
            ms = max(ms,cs);
        }   
        int cand = ms;
        int cand2 = csum - (-cand); 
        cout<<max(cand1, cand2)<<endl;
    }
    return 0;
}