#include <iostream>
#include<vector>
using namespace std;
void checkKey(string str, int i, char key, int n,vector<int>&v)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // 1 case khud

    if (str[i] == key)
    {
        v.push_back(i);
        
    }
     checkKey(str, i + 1, key, n,v);
    
}
int main()
{
    string str = "vvbnmv";
    int i = 0;
    char key = 'v';
    int n = str.size();
    vector<int>v;
    checkKey(str, i, key, n,v);
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}