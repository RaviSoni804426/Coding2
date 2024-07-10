
#include<bits/stdc++.h>
using namespace std;
float n,h,temp;
int main()
{   
    cin>>n>>h;
    for(int i=1;i<n;i++)
    {
        temp=(i*h*h)/n;
        printf("%0.8f ",sqrt(temp));
    }
    return 0;
}