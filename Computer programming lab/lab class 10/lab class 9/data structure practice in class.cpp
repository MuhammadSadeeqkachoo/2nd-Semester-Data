#include <iostream>

using namespace std;


  struct movies{
  int date;
  float rate;
  string title;
  };

  void display(movies arr[3]){
  for(int i=0;i<3;i++){
    cout<<"title : "<<arr[i].title<<endl;
    cout<<"release date : "<<arr[i].date<<endl;
    cout<<"rate : "<<arr[i].rate<<endl;

  }
  }

int main()
{    movies ar[3];
    for(int i=0;i<3;i++){
        cout<<"\nEnter movie title :";
        cin>>ar[i].title;
        cout<<"\nEnter movie release date :";
        cin>>ar[i].date;
        cout<<"\nEnter movie rate  :";
        cin>>ar[i].rate;
    }
    display(ar);
return 0;}
