#include<iostream>
using namespace std;
char result(int marks);
int main(){
    // int grade;
    // cout<<"enter the grade of a student : ";
    // cin>>grade;
    for(int i=0;i<=100;i++){
        char show= result(i);
   cout<<"Grade for  marks"<<i<< "is: "<<show<<endl; 

    }
//    char show= result(grade);
//    cout<<show<<endl;
}
char result(int marks){
// if(marks>=90)
// return'A' ;
// else if(marks>=80)
// return 'B';
// else if(marks>=70)
// return 'C';
// else if(marks>=60)
// return 'D';
// else
// return'E';

switch( marks/10)
{
    case 10:
    case 9:
    return 'A';break;
    case 8:
    return 'B';break;
    case 7:
    return 'C';break;
    case 6:
    return 'D';break;
    default:
    return 'E';
}
}
