#include <iostream>
#include<math.h>

using namespace std;

float grade(int marks);
char grade(float percentage);

void grade(){
            float per;
            int marks1;


            cout<<"Enter marks ";
            cin>>marks1;
            grade(marks1);
            cout<<"percentage : "<<grade(marks1)<<"%"<<endl;
            cout<<"grade : "<<grade(grade(marks1));


}

float grade(int marks){
    float per;
    per =(marks*100/150);
    return per;
}

char grade(float percentage){
    char grade1;
    if(percentage<100&&percentage>=90){
        return 'A';
    }
    else if(percentage<90&&percentage>=80){
        return 'B';
    }
    else if(percentage<80&&percentage>=70){
        return 'C';
    }
    else if(percentage<70&&percentage>=60){
        return 'D';
    }
    else if(percentage<60){
        return 'F';
    }
}

int main()
{
   grade();
    return 0;
}
