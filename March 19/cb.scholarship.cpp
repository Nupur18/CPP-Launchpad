// kisi ko coupon nhi de pa rhe to usne well perform nhi kia
// kisi ko coupon de pa rhe hai to usne well perform kia
#include<iostream>
using namespace std;
# define ll long long int
ll n, m, x, y;     
    // n <- total students, m <- no. of coupons
    // x <- coupons required to get 100% scholarship, y <- coupons to return if you don't perform well

bool kya_mai_mid_no_of_students_ko_scholarship_de_pa_rhi_hu(int ans)
{
    return ( (ans*x) <= (m + (n-ans)*y) );
}

int main()
{
    cin>>n>>m>>x>>y;

    int si = 0;
    int ei = n;
    int ans = 0;
    while (si<=ei)
    {
        int mid = (si + ei)/2;
        if (kya_mai_mid_no_of_students_ko_scholarship_de_pa_rhi_hu(mid))
        {
            ans = mid;
            si = mid + 1;
        }
        else
        {
            ei = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}
// we have to check at max kitne students ko scholarship de sakte hai