#include <iostream>
#include<math.h>
using namespace std;

void grade();
float grade(int marks);
char grade(float percentage);



int main(){
    grade();
return 0;
}

void grade(){
    int marks;
    float percentage;
    char G;
    do{
    cout<<"Enter marks : ";
    cin>>marks;}while(marks>150);//marks are out of 150
    percentage=grade(marks);
    G=grade(percentage);

    cout<<"\n*******************\n";
    cout<<"Grade = "<<G<<endl;
    cout<<"Marks = "<<marks<<endl;
    cout<<"Percentage = "<<percentage<<"%"<<endl;}

char grade(float percentage){
    if(percentage>=80){
    return 'A';
    }
    else if(percentage>=60&&percentage<80){
        return 'B';
    }
    else if(percentage>=50&&percentage<60){
        return 'C';
    }
    else if(percentage>=40&&percentage<50){
        return 'D';
    }
    else if(percentage>=30&&percentage<40){
        return 'E';
    }
    else if(percentage<30){
        return 'F';
    }

}

float grade(int marks){
    float per=0.6666667*marks;
    return per;
}






