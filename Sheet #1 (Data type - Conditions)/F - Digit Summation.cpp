#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,m;
    cin>>n>>m;
    
    while(m>10){
        m %= 10;
    }
    
    while(n>10){
        n %= 10;
    }
    
    cout <<m+n<<"\n";
}
