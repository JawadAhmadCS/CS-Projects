#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void color(int y){
	SetConsoleTextAttribute(h,y);
}
int main();
int total=0,c;
class record{
	int c;
	string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20],arr7[20],arr8[20],arr9[20],arr10[20];
	public:
	void book();
	void show();
	void update();
	void del();
	void search();
	void savefile();
	void loadfile();	
	}o1;
void record::book()
{
	color(15);
	color(11);
cout<<"\n\nhow many students yo want to enter :"<<endl;
cin>>c;	
if(total==0){
total=total+c;
if(c<=5){
	color(13);
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
for(int i=0;i<c;i++)
{
	color(13);
	cout<<"\nenter data of student :  "<<i+1<<endl;
	color(15);
	cout<<"Enter Name :                     ";
	cin>>arr1[i];
	cout<<"Enter Father Name :              ";
	cin>>arr2[i];
	cout<<"Enter Registration no :          ";
	cin>>arr3[i];
	cout<<"Enter Floor :                    ";
	cin>>arr4[i];
	cout<<"Enter Room no :                  ";
	cin>>arr5[i];
	cout<<"Enter Location :                 ";
	cin>>arr6[i];
	cout<<"Enter your contact number :      ";
	cin>>arr7[i];
	cout<<"Enter father contact number :    ";
	cin>>arr8[i];
	cout<<"Enter Program :                  ";
	cin>>arr9[i];
	cout<<"\n\n\n...............................\n\n\n";
}
}
else
color(15);
cout<<"\nYou can enter 5 student at one time \n"<<endl;
color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
 }
 else
 {  color(13);
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;	
for(int i=total;i<total+c;i++)
{
	cout<<"\nenter data of student : "<<i+1<<endl;
	cout<<"           "<<endl;
	color(15);
	cout<<"Enter Name :                     ";
	cin>>arr1[i];
	cout<<"Enter Father Name :              ";
	cin>>arr2[i];
	cout<<"Enter Registration no :          ";
	cin>>arr3[i];
	cout<<"Enter Floor :                    ";
	cin>>arr4[i];
	cout<<"Enter Room no :                  ";
	cin>>arr5[i];
	cout<<"Enter Location :                 ";
	cin>>arr6[i];
	cout<<"Enter your contact number :      ";
	cin>>arr7[i];
	cout<<"Enter father contact number :    ";
	cin>>arr8[i];
	cout<<"Enter Program :                  ";
	cin>>arr9[i];
	cout<<"\n\n\n...............................\n\n\n";
}
 total=total+c;
}
}
void record::show(){
 	if (total==0)
 	{
 		color(6);
 		cout<<"\n\n\n No data is entered\n\n\n"<<endl;
 		color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	 }else{
   for(int i=0;i<total;i++)
   {
   	color(13);
    cout<<"\n                                               data of student : "<<i+1<<endl; 
    cout<<"                            "<<endl;
    color(15);
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"Program :             "<<arr9[i]<<endl;
   	cout<<"\n............................\n"<<endl;
   	}
}
color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
}
void record::update(){	
if (total==0)
{
	color(6);
	cout<<"\n\n\nNo data is enterd\n\n\n"<<endl;
}else{
	color(3);
	string name,roomno;	
	cout<<"Enter Name : "<<endl;
	cin>>name;
	cout<<"Enter Room No"<<endl;
	cin>>roomno;
		for(int i=0;i<total;i++)
	{	                                                               
	if(name==arr1[i]&&roomno==arr5[i])
	{
		color(13);
	 cout<<"\n                                             previous data of student : "<<endl; 
	 color(15);
    cout<<"                            "<<endl;
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"Program :             "<<arr9[i]<<endl;
   	cout<<"\n............................\n"<<endl;
   	color(13);
	   cout<<"enter new data"<<endl;
	   color(15);
	   	cout<<"Enter Name :                     ";
	cin>>arr1[i];
	cout<<"Enter Father Name :              ";
	cin>>arr2[i];
	cout<<"Enter Registration no :          ";
	cin>>arr3[i];
	cout<<"Enter Floor :                    ";
	cin>>arr4[i];
	cout<<"Enter Room no :                  ";
	cin>>arr5[i];
	cout<<"Enter Location :                 ";
	cin>>arr6[i];
	cout<<"Enter your contact number :      ";
	cin>>arr7[i];
	cout<<"Enter father contact number :    ";
	cin>>arr8[i];
	cout<<"Enter Program :                  ";
	cin>>arr9[i];	
	cout<<"\n\n\n............................................\n\n\n"<<endl;
}
  }
    }
    color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
}
void record::del(){
	
	if( total ==0)
	{
		color(6);
		cout<<"\n\n\nNo data entered\n\n\n"<<endl;
		color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}else{
	color(8);	
 int a;
 char b=4;
 for(int i=1;i<=30;i++)
 cout<<b;
 cout<<"\n\n\npress 1 to delete all record"<<endl;
 cout<<"press 2 to delete specific record\n"<<endl;
 cin>>a;
 if(a==1)
 {
 	total = 0;
 	color(15);
    cout<<"All record is deleted successfully"<<endl;
	cout<<"\n\n\n...................................................\n\n\n"<<endl;
	color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	 }
 if (a==2)
 {
 	color(15);
 	string name,roomno;
 	cout<<"Enter Name : ";
 	cin>>name;
 	cout<<"enter room no : ";
 	cin>>roomno;
 	for(int i=0;i<total;i++)
 	{
 		if (name==arr2[i]&roomno == arr5[i])
 		{
 			for(int j=i;j<total;j++)
			 {
			 	arr1[j]=arr1[j+1];
			 	arr2[j]=arr2[j+1];
			 	arr3[j]=arr3[j+1];
			 	arr4[j]=arr4[j+1];
			 	arr5[j]=arr5[j+1];
			 	arr6[j]=arr6[j+1];
			 	arr7[j]=arr7[j+1];
			 	arr8[j]=arr8[j+1];
			 	arr9[j]=arr9[j+1];
			  } 
			  total--;
			  color(8);
			  cout<<"\n\n\n@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @"<<endl;
			  cout<<"@   your required data is deleted....!!   @"<<endl;
			  cout<<"@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @\n\n\n"<<endl;
		 }
	  }
	}
 }	
}
void record::search(){
	if(total==0)
	{
		cout<<" \n\n\nNo data is entered\n\n\n"<<endl;
		color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}
	else
	{
	string name,roomno;
	
	cout<<"Enter Name : "<<endl;
	cin>>name;
	cout<<"Enter Room No"<<endl;
	cin>>roomno;
	if(total==0)
	{
		cout<<"\nNo data is entered\n"<<endl;
	}
	else
	for(int i=0;i<total;i++)
	{
	                                                               
	if(name==arr1[i]&&roomno==arr5[i])
	{
	 cout<<"\n                                               data of student : "<<i+1<<endl; 
    cout<<"                            "<<endl;
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"Program :             "<<arr9[i]<<endl;
   	cout<<"hostel :              "<<arr10[i]<<endl;
   	cout<<"\n............................\n"<<endl;	
}
}
color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
}
}
void record::savefile(){
	ofstream my("hosteldata.txt",ios::out);
	if(my.is_open()){
		for(int i=0;i<total;i++)
		{
		my<<arr1[i]<<endl;
		my<<arr2[i]<<endl;
		my<<arr3[i]<<endl;
		my<<arr4[i]<<endl;
		my<<arr5[i]<<endl;
		my<<arr6[i]<<endl;
		my<<arr7[i]<<endl;
		my<<arr8[i]<<endl;
		my<<arr9[i]<<endl;
		}
		my.close();
		color(800);
		cout<<"\ndata saves successfully\n"<<endl;
		color(12);
	cout<<"\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}else{
		cout<<"\n\nfile....not open\n\n";
		color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}
}
void record::loadfile(){
	int tota=total;
	ifstream my("hosteldata.txt",ios::in);
	if(my.is_open()){
		while(!my.eof()){
			getline(my,arr1[tota]);
			getline(my,arr2[tota]);
			getline(my,arr3[tota]);
			getline(my,arr4[tota]);
			getline(my,arr5[tota]);
			getline(my,arr6[tota]);
			getline(my,arr7[tota]);
			getline(my,arr8[tota]);
			getline(my,arr9[tota]);
			tota++;
		}
		total=tota-1;
		my.close();
		color(11);
		cout<<"\nsuccessfully loaded\n"<<endl;
		color(15);
	}
	else{
		cout<<"\n\nfile....not open\n\n";
		color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}
}
class manager:public record{
	private:
	int n;
	int passwrd;
	public:
	void wardan(){
		color(2);
	cout<<"Enter passward : ";
	cin>>passwrd;
	if(passwrd==1234){
	while(true){
		color(9);
		cout<<"\n\n...................................."<<endl;
		cout<<"............Wardan Menu............"<<endl;
		cout<<"....................................\n\n"<<endl;
		color(11);
	cout<<"\n\n1: Enter Data"<<endl;
	cout<<"2: Search Data"<<endl;
	cout<<"3: Show Data"<<endl;
	cout<<"4: Update Data"<<endl;
	cout<<"5: Delete Data"<<endl;
	cout<<"6: Save Changes"<<endl;
	cout<<"7: Main Menu"<<endl;
	cout<<"8: Exit"<<endl;
	cout<<"enter choice : ";
	cin>>n;
	switch(n){
		case 1:
			system("cls");
			o1.book();
			o1.savefile();
		break;
		case 2:
			system("cls");
		    o1.search();
		break;
		case 3:
			system("cls");
		    o1.show();
		break;
		case 4:
			system("cls");
			o1.update();
		break;
		case 5:
			system("cls");
			o1.del();
		break;
		case 6:
			o1.savefile();
		break;
		case 7:
			system("cls");
			main();
		break;
		case 8:
			exit(0);
		break;
	}}}else{
		color(12);
		cout<<"\nIncorrect passward\n\n";
	}
	color(12);
	cout<<"\n\nPress any key to continue...";
	getch();
	color(15);
	system("cls");
	}
}o2;
int main(){
	o1.loadfile();
	while(true){
		color(10);
color(9);
    cout<<"1: Wardan"<<endl;
	cout<<"2: Canditate"<<endl;
	int n1;
	cin>>n1;
	switch(n1){
		case 1:
		o2.wardan();
		break;
		case 2:
		system("cls");
		o1.book();
		o1.savefile();
		break;	
	}
}}
