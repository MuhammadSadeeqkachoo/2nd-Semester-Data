#include<iostream>

using namespace std;

void check (int,int);
int sum(int,int);

int main(){
    int x,y;
    cout<<"enter x = ";
    cin>>x;
    cout<<"enter y = ";
    cin>>y;
check(x,y);
return 0;
}

void check(int x,int y){
 if(x==0||y==0){
    cout<<"one of the values entered is 0 "<<endl;
 }
 else{
        cout<<"The sum of the entered values is  "<<sum(x,y);
 }
}

int sum(int a ,int b){
return a+b;
}
