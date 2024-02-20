#include<iostream>

using namespace std;

int x=10;


int repeat(int){
if(x>0){
    x--;
    cout<<"Name : Muhammad Sadeeq"<<endl;
    cout<<"Roll no : 21PWCSE2028\n"<<endl;
    repeat(x);
}
else
    return 0;}


int main(){
repeat(x);
return 0;}
