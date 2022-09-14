#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    cout<< v[0]<<" "<<v[1]<<" "<<v[2];
    cout<<"\n";
    cout<<v.size();

v.pop_back();
v.push_back(0);
cout <<"\n";
cout <<v[0]<<" "<<v[1]<<" "<<v[2];
}