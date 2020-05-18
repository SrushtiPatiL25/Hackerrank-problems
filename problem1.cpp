#include<iostream>
//#include<bits.stdc++.h>

using namespace std;

string maxNum(string n,string m){
    sort(n.begin(),n.end());

    for(int i=0;i<n.size();i++){
        for(int j=i+1;j<n.size;j++){
            string t=n;
            swap(t[j],t[i]);
            sort(t.begin(),t.end());

            if(stoll(t) > stoll(n) && stoll(t) <= stoll(m)){
                swap(n[i],m[j]);
            }
        }
    }
}