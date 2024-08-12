#include<iostream>
#include<vector>
using namespace std;
void printSubSequence(vector<string>&arr,string str,string output,int i){
    //base case
    if(i>=str.length()){
    //    cout<<output<<endl;
    // vectore mein store krayenge
    arr.push_back(output);
    return;
          }

// //include
//     output.push_back(str[i]);
//     printSubSequence(arr,str,output,i+1);
//     output.pop_back();

// // agar include upar likh rahe hai to strinng 
// // m se pop bhi krvana pdega,,kyuki vhi string niche use krva rahe hai


    //exclude
    printSubSequence(arr,str,output,i+1);

    //include
    output.push_back(str[i]);
    //above line we can write as output = output+str[i];

    printSubSequence(arr,str,output,i+1);


}
int main(){
    string str = "abc";
    string output = "";
    vector<string>arr;
    int i=0;
    printSubSequence(arr,str,output,i);
    cout<<"printing all sunsequences"<<endl;
    for(auto val:arr){
        cout<<val<<endl;
    }
     cout<<"size of vector is "<<arr.size()<<endl;
    return 0;
}