#include<iostream>

using namespace std;

struct{
string rollno,contact,Semester,course,name;
}data[1000];

int total=0;


void enter(){

		int ch=0;

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;

			if(total==0){

			total=ch+total;

			for(int i=0;i<ch;i++){

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>data[i].name;

				cout<<"\nEnter Roll no ";

				cin>>data[i].rollno;

				cout<<"Enter course ";

				cin>>data[i].course;

				cout<<"Enter Semesters ";

				cin>>data[i].Semester;

				cout<<"Enter contact ";

				cin>>data[i].contact;}}

	    	else{

	    		for(int i=total;i<ch+total;i++){

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>data[i].name;

				cout<<"\nEnter Roll no ";

				cin>>data[i].rollno;

				cout<<"Enter course ";

				cin>>data[i].course;

				cout<<"Enter Semesters ";

				cin>>data[i].Semester;

				cout<<"Enter contact ";

				cin>>data[i].contact;}

			    total=ch+total;}}

void show(){

	if(total==0){

		cout<<"No data is entered"<<endl;}

	else{

		for(int i=0;i<total;i++){
	    		cout<<"******************************";

	    		cout<<"\nDATA OF STUDENT NO."<<i+1<<endl;

	    		cout<<"******************************";

	    		cout<<"\nName "<<data[i].name<<endl;

	    		cout<<"Roll no "<<data[i].rollno<<endl;

	    		cout<<"Course "<<data[i].course<<endl;

	    		cout<<"Semesters "<<data[i].Semester<<endl;

	    		cout<<"Contact "<<data[i].contact<<endl;}}}

void search(){

	if(total==0){

		cout<<"No data is entered"<<endl;}

	else{

	string roll_no;

				cout<<"Enter the roll no of student"<<endl;

				cin>>roll_no;

				for(int i=0;i<total;i++){

					if(roll_no==data[i].rollno){

                        cout<<"\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;

						cout<<"Name "<<data[i].name<<endl;

	    	        	cout<<"Roll no "<<data[i].rollno<<endl;

	    		        cout<<"Course "<<data[i].course<<endl;

	    		        cout<<"Semesters "<<data[i].Semester<<endl;

	    	        	cout<<"Contact "<<data[i].contact<<endl;

                        cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";}}}}

void update(){

	if(total==0){

		cout<<"No data is entered"<<endl;}

	else{

		string roll_no;

				cout<<"Enter the roll no of student which you want to update"<<endl;

				cin>>roll_no;

					for(int i=0;i<total;i++){

					if(roll_no==data[i].rollno){

	    		        cout<<"******************************";

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<data[i].name<<endl;

	    	        	cout<<"Roll no "<<data[i].rollno<<endl;

	    		        cout<<"Course "<<data[i].course<<endl;

	    		        cout<<"Semesters "<<data[i].Semester<<endl;

	    	        	cout<<"Contact "<<data[i].contact<<endl;

	    		        cout<<"******************************";

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>data[i].name;

				            cout<<"Enter Roll no ";

				            cin>>data[i].rollno;

			             	cout<<"Enter course ";

				            cin>>data[i].course;

				            cout<<"Enter Semesters ";

				            cin>>data[i].Semester;

				            cout<<"Enter contact ";

				            cin>>data[i].contact;}}}}

void deleterecord(){

	if(total==0){

		cout<<"No data is entered"<<endl;}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1){

					total=0;

					cout<<"All record is deleted..!!"<<endl;}

				else if(a==2){

				string roll_no;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>roll_no;

				for(int i=0;i<total;i++){

					if(roll_no==data[i].rollno){

						for(int j=i;j<total;j++){

						data[j].name=data[j+1].name;

						data[j].rollno=data[j+1].rollno;

					    data[j].course=data[j+1].course;

						data[j].Semester=data[j+1].Semester;

						data[j].contact=data[j+1].contact;}

					total--;

					cout<<"Your required record is deleted"<<endl;}}}

			else{

				cout<<"Invalid input";}}}

main(){

	int value;

	while(true){

	cout<<"\n***********************";

	cout<<"\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to exit"<<endl;

	cout<<"\n***********************"<<endl;

	cin>>value;

    system("cls");

	switch(value){

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;}}}
