#include<iostream>

using namespace std;

struct{
string rollno,contact,self,name;
int Department,marks;
}data[1000];

int total=0;

int per(int x){
    return x*0.09090909090;
}

int fee(int s,string se){
    int fee;
    if(s==1&&se=="yes"){
        fee=150000;}
    else if(s==2&&se=="yes"){
        fee=60000;}
    else if(s==3&&se=="yes"){
        fee=50000;}
    else if(s==4&&se=="yes"){
        fee=75000;}
    else if(s==5&&se=="yes"){
        fee=100000;}

    if(s==1&&se=="no"){
        fee=84000;}
    else if(s==2&&se=="no"){
        fee=40000;}
    else if(s==3&&se=="no"){
        fee=35000;}
    else if(s==4&&se=="no"){
        fee=45000;}
    else if(s==5&&se=="no"){
        fee=90000;}

        return fee;}

void depart(int x){

switch(x){
    case 1:
    cout<<"Computer systems department";
    break;

    case 2:
    cout<<"Electrical department";
    break;

    case 3:
    cout<<"Mechanical  department";
    break;

    case 4:
    cout<<"Civil department";
    break;

    case 5:
    cout<<"IT department";
    break;
}
}

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

				do{

				cout<<"HSSC Marks = ";

				cin>>data[i].marks;

				if(data[i].marks>1100||data[i].marks<0)

                cout<<"\nincorrect Marks\ntry again\n";

				}while(data[i].marks<0||data[i].marks>1100);

				cout<<"\nEnter Roll no ";

				cin>>data[i].rollno;

                cout<<"\nxxxxxxxxxxxxxxxxxxxx\n1.Computer systems department\n2.Electrical department\n3.Mechanical  department\n4.Civil department\n5.IT department\nxxxxxxxxxxxxxxxxxxxx\n"<<endl;

				while(data[i].Department>5||data[i].Department<=0){

				cout<<"Enter Departments number = ";

				cin>>data[i].Department;

				if(data[i].Department>5||data[i].Department<=0)

                cout<<"invalid Department number\nTry again\n";

				}

                do{

                cout<<"on Self Finance yes or no = ";

                cin>>data[i].self;

                if(data[i].self!="yes"&&data[i].self!="no")

                cout<<"\ntype yes or no\ntry again\n";}while(data[i].self!="yes"&&data[i].self!="no");

				cout<<"Enter contact ";

				cin>>data[i].contact;}}

	    	else{

	    		for(int i=total;i<ch+total;i++){

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>data[i].name;

				do{

				cout<<"HSSC Marks = ";

				cin>>data[i].marks;

				if(data[i].marks>1100||data[i].marks<0)

                cout<<"\nincorrect Marks\ntry again\n";

				}while(data[i].marks<0||data[i].marks>1100);

				cout<<"\nEnter Roll no ";

				cin>>data[i].rollno;

                cout<<"\nxxxxxxxxxxxxxxxxxxxx\n1.Computer systems department\n2.Electrical department\n3.Mechanical  department\n4.Civil department\n5.IT department\nxxxxxxxxxxxxxxxxxxxx\n"<<endl;

				while(data[i].Department>5||data[i].Department<=0){

				cout<<"Enter Departments number = ";

				cin>>data[i].Department;

				if(data[i].Department>5||data[i].Department<=0)

                cout<<"invalid Department number\nTry again\n";

				}

                do{

                cout<<"on Self Finance yes or no = ";

                cin>>data[i].self;

                if(data[i].self!="yes"&&data[i].self!="no")

                cout<<"\ntype yes or no\ntry again\n";}while(data[i].self!="yes"&&data[i].self!="no");

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

                cout<<"HSSC percentage = "<<per(data[i].marks)<<" %"<<endl;

	    		cout<<"Departments ";

	    		depart(data[i].Department);

	    		if(per(data[i].marks)>=90&&per(data[i].marks)<=100){

	    		cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		cout<<"50% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.5<<endl;

	    		cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.5<<endl;

	    		}

	    		else if(per(data[i].marks)>=80&&per(data[i].marks)<90){

                cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		cout<<"25% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.25<<endl;

	    		cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.25<<endl;
	    		}
	    		else{

                cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		cout<<"No Scholarship "<<endl;

	    		cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;
	    		}


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

	    	        	cout<<"HSSC percentage = "<<per(data[i].marks)<<" %"<<endl;

	    		        cout<<"Departments ";

	    		        depart(data[i].Department);

	    		        if(per(data[i].marks)>=90&&per(data[i].marks)<=100){

	    		        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"50% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.5<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.5<<endl;

	    		        }

	    		        else if(per(data[i].marks)>=80&&per(data[i].marks)<90){

                        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"25% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.25<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.25<<endl;
	    		        }
	    		        else{

                        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"No Scholarship "<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;
	    		        }

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

	    	        	cout<<"HSSC percentage = "<<per(data[i].marks)<<" %"<<endl;

	    		        cout<<"Departments ";

	    		        depart(data[i].Department);

	    		        if(per(data[i].marks)>=90&&per(data[i].marks)<=100){

	    		        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"50% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.5<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.5<<endl;

                        }

	    		        else if(per(data[i].marks)>=80&&per(data[i].marks)<90){

                        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"25% Scholarship = Rs "<<fee(data[i].Department,data[i].self)*0.25<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)-fee(data[i].Department,data[i].self)*0.25<<endl;
                        }
	    		        else{

                        cout<<"\nStudent fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;

	    		        cout<<"No Scholarship "<<endl;

	    		        cout<<"total student fee = Rs "<<fee(data[i].Department,data[i].self)<<endl;
	    		        }

	    	        	cout<<"Contact "<<data[i].contact<<endl;

	    		        cout<<"******************************";

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>data[i].name;

                            do{

				            cout<<"HSSC Marks = ";

				            cin>>data[i].marks;

				            if(data[i].marks>1100||data[i].marks<0)

                            cout<<"\nincorrect Marks\ntry again\n";

				            }while(data[i].marks<0||data[i].marks>1100);


				            cout<<"Enter Roll no ";

				            cin>>data[i].rollno;


                            cout<<"\nxxxxxxxxxxxxxxxxxxxx\n1.Computer systems department\n2.Electrical department\n3.Mechanical  department\n4.Civil department\n5.IT department\nxxxxxxxxxxxxxxxxxxxx\n"<<endl;

				            while(data[i].Department>5||data[i].Department<=0){

                            cout<<"Enter Departments number = ";

				            cin>>data[i].Department;

				            if(data[i].Department>5||data[i].Department<=0)

                            cout<<"invalid Department number\nTry again\n";}

                            do{

                            cout<<"on Self Finance yes or no = ";

                            cin>>data[i].self;

                            if(data[i].self!="yes"&&data[i].self!="no")

                            cout<<"\ntype yes or no\ntry again\n";}while(data[i].self!="yes"&&data[i].self!="no");

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

						data[j].Department=data[j+1].Department;

						data[j].self=data[j+1].self;

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
