#include<iostream>
using namespace std;

struct point{
int x,y;
}rec;

int main(){
	cout << "\nPlease Enter the Total Number of Rectangle x    =  ";
	cin >> rec.x;

	cout << "\nPlease Enter the Total Number of Rectangle y =  ";
	cin >> rec.y;

	cout << "\n-----Rectangle Pattern-----\n";
	for(int i = 1; i <= rec.x; i++){
        for(int j = 1; j <= rec.y; j++){
			if(i == 1 || i == rec.x || j == 1 || j == rec.y){
				cout << "*";}
			else{
				cout << " ";}}
        cout << "\n";}
 	return 0;}
