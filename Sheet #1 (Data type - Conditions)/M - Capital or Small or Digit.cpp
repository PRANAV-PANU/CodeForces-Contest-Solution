#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char c;
    cin>>c;
    int ascii = (int)c;
    if(ascii>47 && ascii<=57)
    cout<<"IS DIGIT"<<"\n";
    else if(ascii >64 && ascii<=90)
    cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<<"\n";
    else
    cout<<"ALPHA"<<"\n"<<"IS SMALL"<<"\n";
    return 0;
}
