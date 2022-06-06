#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
    if(n!=0){
        return n*factorial(n-1);
    }
    return 1LL;
    
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}