#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"Difference = "<<(a*b)-(c*d)<<"\n";
    return 0;
}

//the main catch in the problem is the declaration of variable datatype if we declare product of two int is int so we need to use long or long long
