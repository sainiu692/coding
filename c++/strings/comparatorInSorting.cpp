#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(char first, char second){
    return first>second;
}
bool compare(int a,int b){
    return a>b;//a>b karne se descending order mein sort hota h
    //a<b krne se ascending order mein sort hota hai
}
    int main(){
        vector<int>v{5,1,2,3,4,6,};
        sort(v.begin(),v.end(),compare);
        for(auto i:v){
            cout<<i;
        }
        // cout<<v;
        cout<<endl;   
        string s="saini";
        sort(s.begin(),s.end(),cmp);
        cout<<s;
           return 0;
    }
