#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int x,y;
    cin>>x>>y;
    long long add = x+y,sub = x-y,mul =x*y;
    cout<<x<<" + "<<y<<" = "<<add<<"\n";
    cout<<x<<" * "<<y<<" = "<<mul<<"\n";
    cout<<x<<" - "<<y<<" = "<<sub<<"\n";
    return 0;
}
