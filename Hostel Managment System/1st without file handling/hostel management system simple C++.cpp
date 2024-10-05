#include<iostream>
#include<windows.h>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
class login{
	public:
		string username,passward;
		bool islogin()
		{
		string ch_username="jawad",ch_passward="1234";
	cout<<"Enter username ::\t";
	cin>>username;
	cout<<"Enter passward  ::\t";
	cin>>passward;
	if(username==ch_username&&passward==ch_passward)
	{
			return true;
	}
	else
	{
		return false;
	}
	};	};
int T=0;
struct emplo
{
	string firstname;
    string lastname;
	string dob;
	string city;
	string distract;
    string contactno;
    string passward;
   
}s[20];

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20],arr7[20],arr8[20],arr9[20],arr10[20];

	int total=0,c;
	
 
 void Login( );             //1592
 void employeelogin();      //1532
 void hostellerlogin();     //1461
 void registration();       //1416
 void ashosteller();        //1373
 void manager();            //1306
 void HostellerMenu();      //1248
 void mainmenue();          //1237
 void deleterecord();       //1159
 void update();             //1068
 void search();             //995
 void show();               //945
 void registerhosteller();  //903
 void nusrat(string);       //750
 void jinnah(string);       //590
 void emploMenu();          //532
 void deleteemploy();       //452
 void updateemploy();       //369
 void searchemploy();       //318
 void showemploy();         //279
 void registeremploy();     //204
 void asemploy();           //128
 
int main()

{
	
	SetConsoleTextAttribute(h,10);
	cout<<"\n\n\t\t\t\t  ***************************************************"<<endl;
	cout<<"\t\t\t\t  **************Hostel Managment system**************"<<endl;
	cout<<"\t\t\t\t  *************************************************** \n\n\n"<<endl;
	
	while (true)
	{

	SetConsoleTextAttribute(h,9);	
	int choice;

	char c=15;
	cout<<" "<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<c<<" "<<"1. Manager   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<c<<" "<<"2. Registration   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<c<<" "<<"3. Login   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<c<<" "<<"4. Exit   "<<endl;
	cout<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	cout<<"\n\nEnter your choice _ ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
			manager( );
		}
		break;
		case 2:
		{
			registration( );
	}
		break;
		case 3:
		{
			Login( );
	}
		break;
		case 4:
		{
			exit(0);
	}
			default:
		{
			SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
	} 
}
    }
    
  }
  
  
  
  
  
  
  
  
  void asemploy( )





{ 
if(T==0){
T=T+1;
for(int i=0;i<1;i++)
{
	SetConsoleTextAttribute(h,6);
	cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
    cout<<"\nYou Enter the Data of First Employ\n"<<endl;
    SetConsoleTextAttribute(h,7);
	cout<<"Enter First Name :         ";
	cin>>s[i].firstname;
	cout<<"Enter Last Name :          ";
	cin>>s[i].lastname;
	cout<<"Enter DOB :                ";
	cin>>s[i].dob;
	cout<<"Enter City :               ";
	cin>>s[i].city;
	cout<<"Enter Distract :           ";
	cin>>s[i].distract;
	cout<<"Enter Contact No :         ";
	cin>>s[i].contactno;
	cout<<"Enter passward for login : ";
	cin>>s[i].passward;
	cout<<"\n\n";	
		}
	}

else if(T<7)
{
	
for(int i=T;i<T+1;i++)
{
	SetConsoleTextAttribute(h,6);
	cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
	cout<<"\nyou are Enter the Data of Employ :"<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\nEnter First Name :         ";
	cin>>s[i].firstname;
	cout<<"Enter Last Name :          ";
	cin>>s[i].lastname;
	cout<<"Enter DOB :                ";
	cin>>s[i].dob;
	cout<<"Enter City :               ";
	cin>>s[i].city;
	cout<<"Enter Distract :           ";
	cin>>s[i].distract;
	cout<<"Enter Contact No :         ";
	cin>>s[i].contactno;
	cout<<"Enter passward for login : ";
	cin>>s[i].passward;
	cout<<"\n\n";	
		}	T=T+1;
}
else
{
	SetConsoleTextAttribute(h,12);
 cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
 cout<<"#    Sorry!.....no strength     #"<<endl;
 cout<<"# # # # # # # # # # # # # # # # #\n\n"<<endl;
 }
}





void registeremploy()




{
if(T==0){
T=T+1;
for(int i=0;i<1;i++)
{SetConsoleTextAttribute(h,6);
	cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
    cout<<"\nYou Enter the Data of First Employ\n"<<endl;
    SetConsoleTextAttribute(h,7);
	cout<<"Enter First Name :         ";
	cin>>s[i].firstname;
	cout<<"Enter Last Name :          ";
	cin>>s[i].lastname;
	cout<<"Enter DOB :                ";
	cin>>s[i].dob;
	cout<<"Enter City :               ";
	cin>>s[i].city;   
	cout<<"Enter Distract :           ";
	cin>>s[i].distract;
	cout<<"Enter Contact No :         ";
	cin>>s[i].contactno;
	cout<<"Enter passward for login : ";
	cin>>s[i].passward;
	cout<<"\n\n";	
		}
	}

else if(T<7)
{
	
for(int i=T;i<T+1;i++)
{
	SetConsoleTextAttribute(h,6);
	cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
	cout<<"\nyou are Enter the Data of Employ :"<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"\nEnter First Name :         ";
	cin>>s[i].firstname;
	cout<<"Enter Last Name :          ";
	cin>>s[i].lastname;
	cout<<"Enter DOB :                ";
	cin>>s[i].dob;
	cout<<"Enter City :               ";
	cin>>s[i].city;
	cout<<"Enter Distract :           ";
	cin>>s[i].distract;
	cout<<"Enter Contact No :         ";
	cin>>s[i].contactno;
	cout<<"Enter passward for login : ";
	cin>>s[i].passward;
	cout<<"\n\n";	
		}	T=T+1;
}
else
{
	SetConsoleTextAttribute(h,12);
 cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
 cout<<"#    Sorry!.....no strength     #"<<endl;
 cout<<"# # # # # # # # # # # # # # # # #\n\n"<<endl;}
 
	
}





void showemploy()






{
	if (T==0)
{
		 	SetConsoleTextAttribute(h,12);
		   	cout<<"\n\n           No Data is Entered \n\n "<<endl;
}

else{

	for(int j=0;j<T;j++)
{
	SetConsoleTextAttribute(h,6);
    cout<<"\n\n                                        Data of Employ :"<<j+1<<endl;
    SetConsoleTextAttribute(h,13);
    cout<<"Name :                    "<<s[j].firstname<<" "<<s[j].lastname<<endl;

	cout<<"Entered DOB :             "<<s[j].dob<<endl;

	cout<<"Entered City :            "<<s[j].city<<endl;

	cout<<"Entered Distract :        "<<s[j].distract<<endl;

	cout<<"Entered Contact No :      "<<s[j].contactno<<endl;
	
	cout<<"Entered passward :        "<<s[j].passward<<endl;
}
}}





void searchemploy()






{ 
 if (T==0)
{
		 SetConsoleTextAttribute(h,12);	
		 cout<<"\n\n           No Data is Entered \n\n "<<endl;
}

else{
SetConsoleTextAttribute(h,6);
 string Name,NAME;
  	cout<<"Enter First name :";
  	cin>>Name;
  	cout<<"Enter Last name :";
  	cin>>NAME;
  	for(int j=0;j<T;j++)
  	{
	  if(Name==s[j].firstname&&NAME==s[j].lastname)
	  {
	  	SetConsoleTextAttribute(h,6);
	  	 cout<<"\n\n                                        Data of Employ :"<<j+1<<endl;
	  	 SetConsoleTextAttribute(h,13);
    cout<<"Entered First Name :      "<<s[j].firstname<<endl;
	
	cout<<"Entered Last Name :       "<<s[j].lastname<<endl;

	cout<<"Entered DOB :             "<<s[j].dob<<endl;

	cout<<"Entered City :            "<<s[j].city<<endl;

	cout<<"Entered Distract :        "<<s[j].distract<<endl;

	cout<<"Entered Contact No :      "<<s[j].contactno<<endl;
	
	cout<<"Entered passward :        "<<s[j].passward<<endl;
	  }
}
}
}






void updateemploy()






{
	SetConsoleTextAttribute(h,12);
if (T==0)
{
	
	cout<<"\n\n\nNo data is enterd\n\n\n"<<endl;
}

else

{
	string name1,name2;
	SetConsoleTextAttribute(h,6);
	cout<<"Enter first Name : "<<endl;
	cin>>name1;
	cout<<"Enter last Name  : "<<endl;
	cin>>name2;
	
	
		
	for(int j=0;j<T;j++)
	{
	                                                               
	if(name1==s[j].firstname&&name2==s[j].lastname)
	{
		SetConsoleTextAttribute(h,6);
	 cout<<"\n                                             Previous data of employ  "<<endl; 
    SetConsoleTextAttribute(h,13);
	cout<<"                            "<<endl;
   	
    cout<<"Enter First Name :      "<<s[j].firstname<<endl;
	
	cout<<"Enter Last Name :       "<<s[j].lastname<<endl;

	cout<<"Enter DOB :             "<<s[j].dob<<endl;

	cout<<"Enter City :            "<<s[j].city<<endl;

	cout<<"Enter Distract :        "<<s[j].distract<<endl;

	cout<<"Enter Contact No :      "<<s[j].contactno<<endl;
	
	cout<<"Entered passward :      "<<s[j].passward<<endl;
	   cout<<"\n............................\n"<<endl;
	   
	   SetConsoleTextAttribute(h,6);
	cout<<"Entered new data"<<endl;
	   SetConsoleTextAttribute(h,7);
	cout<<"Enter First Name :         ";
	cin>>s[j].firstname;
	cout<<"Enter Last Name :          ";
	cin>>s[j].lastname;
	cout<<"Enter DOB :                ";
	cin>>s[j].dob;
	cout<<"Enter City :               ";
	cin>>s[j].city;
	cout<<"Enter Distract :           ";
	cin>>s[j].distract;
	cout<<"Enter Contact No :         ";
	cin>>s[j].contactno;
	cout<<"Enter passward for login : ";
	cin>>s[j].passward;
	cout<<"\n\n\n............................................\n\n\n"<<endl;


                 }

    }
  }	                                             													
}






void deleteemploy()







{
	if(T ==0)
	{
		SetConsoleTextAttribute(h,12);
	cout<<"\n\n           No Data is Entered \n\n "<<endl;
	}
	else
	{
	SetConsoleTextAttribute(h,6);
 int a;
 char b=4;
 for(int i=1;i<=30;i++)
 cout<<b;
 cout<<"\n\n\npress 1 to delete all record"<<endl;
 cout<<"press 2 to delete specific record\n\n"<<endl;
 cin>>a;
 if(a==1)


 {
 	SetConsoleTextAttribute(h,12);
 	T = 0;
 	cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
    cout<<"#   All record is deleted !!!   #"<<endl;
    cout<<"# # # # # # # # # # # # # # # # #"<<endl;
	cout<<"\n\n\n...................................................\n\n\n"<<endl;
	
	 }

 if (a==2)
 
 {
 	SetConsoleTextAttribute(h,6);
 	string name1,name2;
 	cout<<"Enter first Name : ";
 	cin>>name1;
 	cout<<"Enter last Name  : ";
 	cin>>name2;
 	for(int i=0;i<T;i++)
 	{
 		if (name1==s[i].firstname&&name2 == s[i].lastname)
 		{
 			for(int j=i;j<T;j++)
			 {
			 s[j].firstname=s[j+1].firstname;
			 s[j].lastname=s[j+1].lastname;
			 
			 s[j].dob=s[j+1].dob;
			 s[j].city=s[j+1].city;
			 s[j].distract=s[j+1].distract;
			 s[j].contactno=s[j+1].contactno;
			 s[j].passward=s[j+1].passward;
			 
			  } 
			  T--;
			  SetConsoleTextAttribute(h,12);
			  cout<<"\n\n\n@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @"<<endl;
			  cout<<"@   your required data is deleted....!!   @"<<endl;
			  cout<<"@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @\n\n\n"<<endl;
		 }
		 
		 
	  }
	}
 }	
}






void emploMenu()






{
	SetConsoleTextAttribute(h,11);
 	cout<<" "<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 employ Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"1. Registration of employee   "<<endl;
    cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "" "<<"2. Show data of employee   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"3. Search data of employee   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"4. Update data of employee   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"5. Delete data of employee  "<<endl;
    cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"6. Back   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"7. to exit   "<<endl;
	cout<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
    int choos;
    cout<<"Enter your choice "<<endl;
    cin>>choos;
 switch(choos)
 {
 	case 1:
 	registeremploy();
	 break;
	 case 2:
	 showemploy();
	 break;
	 case 3:
	 searchemploy();
	 break;
	 case 4:
	 updateemploy();
	 break;
	 case 5:
	 deleteemploy();
	 break;
	 case 6:
	    system("cls");
	break;
	 case 7:
	     exit(0);
	break;
	default:
	{
		SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;	}
	};
	 
 }
		
	



void jinnah(string x="jinnah hostel")





{
	int c;
    SetConsoleTextAttribute(h,8);
cout<<"how many students yo want to enter"<<endl;
cin>>c;	


//.......enter data first time


if(total==0){

total=total+c;

if(c<=5){
	SetConsoleTextAttribute(h,13);
	cout<<"\n\n        .........................Jinnah hostel.........................        \n\n";
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
	
for(int i=0;i<c;i++)
{
	
    
    arr10[i]=x;
    SetConsoleTextAttribute(h,6);
	cout<<"\nEntered data of student :  "<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
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
	cout<<"Enter Passward for login :       ";
	cin>>arr9[i];
	cout<<"Hostel :                         ";
	cout<<arr10[i];
	
	cout<<"\n\n\n...............................\n\n\n";
}

}
else

{
cout<<"\nYou can enter 5 student at one time \n"<<endl;
}
 }
 
 //........enter data second time
 
 else
 
 {
 	
 	
 	//...i use 7 because our hostel room apasity is 7
 	
 	
 	if(total<7){
 		
 		
	 //i use 1 that second time we enter the data of only one student 
	 SetConsoleTextAttribute(h,13);
	 		 
 if(c<=1){
 	cout<<"\n\n        .........................Jinnah hostel.........................        \n\n";
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;	


for(int i=total;i<total+c;i++)

{

	
	arr10[i]=x;
	SetConsoleTextAttribute(h,6);
	cout<<"\nEnter data of student : "<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"           "<<endl;
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
	cout<<"Enter Passward for login :       ";
	cin>>arr9[i];
	cout<<"Hostel :                         ";
	cout<<arr10[i];
	
	cout<<"\n\n\n...............................\n\n\n";
}


//.......i use this to update total value
 total=total+c;
 
}


else

cout<<"\nYou can enter 1 student at one time \n"<<endl;	
 }
 
 
 else
 
 
 {
 	SetConsoleTextAttribute(h,12);
 cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
 cout<<"#    Sorry!.....no strength     #"<<endl;
 cout<<"# # # # # # # # # # # # # # # # #\n\n"<<endl;}
 }
 
	




	
	
}





void nusrat(string y="Nusrat Hostel")





{
	int c;
SetConsoleTextAttribute(h,8);
cout<<"how many students yo want to enter"<<endl;
cin>>c;	


//.......enter data first time


if(total==0){

total=total+c;

if(c<=5){
	SetConsoleTextAttribute(h,13);
	cout<<"\n\n        .........................Nusrat hostel.........................        \n\n";
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;
	
for(int i=0;i<c;i++)

{
  
    arr10[i]=y;
    SetConsoleTextAttribute(h,6);
	cout<<"\nenter data of student :  "<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
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
	cout<<"Enter Passward for login :       ";
	cin>>arr9[i];
	cout<<"Hostel :                         ";
	cout<<arr10[i];
	cout<<"\n\n\n...............................\n\n\n";
}

}


else

cout<<"\nYou can enter 5 student at one time \n"<<endl;

 }
 
 //........enter data second time
 
 else
 
 {
 	
 	
 	//...i use 7 because our hostel room cpasity is 7
 	
 	
 	if(total<7){
 		
 		
	 //i use 1 that second time we enter the data of only one student 
	 
	 		 
 if(c<=1){
 	SetConsoleTextAttribute(h,13);
 	cout<<"\n\n        .........................Nusrat hostel.........................        \n\n";
    cout<<"\n* * * * * * * * * *"<<endl;
	cout<<"*    Enter data   *"<<endl;
	cout<<"* * * * * * * * * *"<<endl;	


for(int i=total;i<total+c;i++)
{

	arr10[i]=y;
	SetConsoleTextAttribute(h,6);
	cout<<"\nEnter data of student : "<<i+1<<endl;
	SetConsoleTextAttribute(h,7);
	cout<<"           "<<endl;
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
	cout<<"Enter Passward for login :       ";
	cin>>arr9[i];
	cout<<"Hostel :                         ";
	cout<<arr10[i];
	cout<<"\n\n\n...............................\n\n\n";
}


//.......i use this to update total value
 total=total+c;
 
}


else


cout<<"\nYou can enter 1 student at one time \n"<<endl;	
 }


 else


 {
 	SetConsoleTextAttribute(h,12);
 cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
 cout<<"#    Sorry!.....no strength     #"<<endl;
 cout<<"# # # # # # # # # # # # # # # # #\n\n"<<endl;}
 }
 
		
}





void registerhosteller()







{ 
SetConsoleTextAttribute(h,6);
	int hostel;
	cout<<" 1: Jinnah hostel "<<endl;
	cout<<" 2: Nusrat hostel "<<endl;
	cin>>hostel;

	switch(hostel)
	{
		case 1:
			jinnah();
			break;
		case 2:
			nusrat();
			break;
			default:
				SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
		
	}

 
 }









void show()







 {
 	if (total==0)
 
 
 
 
 	{
 		SetConsoleTextAttribute(h,12);
 		cout<<"\n\n\n No data is entered\n\n\n"<<endl;
	 }
	 
	 
	 
	 else
	
	{
   for(int i=0;i<total;i++)
   {
SetConsoleTextAttribute(h,6);
    cout<<"\n                                               data of Hosteller : "<<i+1<<endl; 
    SetConsoleTextAttribute(h,13);
    cout<<"                            "<<endl;
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"passward for login :  "<<arr9[i]<<endl;
   	cout<<"hostel :              "<<arr10[i]<<endl;
   	cout<<"\n............................\n"<<endl;
   	
   	}	
           }
                  }





void search()





{
	if(total==0)



	{
		cout<<" \n\n\nNo data is entered\n\n\n"<<endl;
	}



	else

	{
		SetConsoleTextAttribute(h,6);
	string name,roomno;
	
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Room No : ";
	cin>>roomno;
	if(total==0)
	
	
	
	{
		SetConsoleTextAttribute(h,12);
		cout<<"\nNo data is entered\n"<<endl;
	}



	else
	
	
	
	for(int i=0;i<total;i++)
	{
	                                                               
	if(name==arr1[i]&&roomno==arr5[i])
	{
		SetConsoleTextAttribute(h,6);
	 cout<<"\n                                               data of Hosteller : "<<i+1<<endl; 
	 SetConsoleTextAttribute(h,13);
    cout<<"                            "<<endl;
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"passward for login :  "<<arr9[i]<<endl;
   	cout<<"hostel :              "<<arr10[i]<<endl;
   	cout<<"\n............................\n"<<endl;	
	}
}
}
 }







void update()






{
	SetConsoleTextAttribute(h,12);
if (total==0)

{
	
	cout<<"\n\n\nNo data is enterd\n\n\n"<<endl;
}

else

{
	SetConsoleTextAttribute(h,6);
	string name,roomno;
	
	cout<<"Enter Name : "<<endl;
	cin>>name;
	cout<<"Enter Room No"<<endl;
	cin>>roomno;
	SetConsoleTextAttribute(h,12);
	if(total==0)
	{
		
		cout<<"\nNo data is entered\n"<<endl;
	}
	
	else
	
		
	for(int i=0;i<total;i++)
	{
	                                                               
	if(name==arr1[i]&&roomno==arr5[i])
	{
		SetConsoleTextAttribute(h,6);
	 cout<<"\n                                             Previous data of student  "<<endl; 
    SetConsoleTextAttribute(h,13);
	cout<<"                            "<<endl;
   	
	   cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"passward for login :  "<<arr9[i]<<endl;
   	cout<<"Hostel :              "<<arr10[i]<<endl;
   	cout<<"\n............................\n"<<endl;
   	SetConsoleTextAttribute(h,6);
	   cout<<"Enter new data"<<endl;
	   SetConsoleTextAttribute(h,7);
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
	cout<<"Enter Passward for login :       ";
	cin>>arr9[i];	
	cout<<"\n\n\n............................................\n\n\n"<<endl;
		
}
   }
 }
 }







void deleterecord()







{
	if( total ==0)
	{
		SetConsoleTextAttribute(h,12);
		cout<<"\n\n\nNo data entered\n\n\n"<<endl;
	}else{
	SetConsoleTextAttribute(h,6);
 int a;
 char b=4;
 for(int i=1;i<=30;i++)
 cout<<b;
 cout<<"\n\n\npress 1 to delete all record"<<endl;
 cout<<"press 2 to delete specific record\n\n"<<endl;
 cin>>a;
 if(a==1)


 {
 	total = 0;
 	SetConsoleTextAttribute(h,12);
 	cout<<"\n\n# # # # # # # # # # # # # # # # #"<<endl;
    cout<<"#   All record is deleted !!!   #"<<endl;
    cout<<"# # # # # # # # # # # # # # # # #"<<endl;
	cout<<"\n\n\n...................................................\n\n\n"<<endl;
	
	 }

 if (a==2)
 
 {
 string name,roomno;
 SetConsoleTextAttribute(h,2);
	
	
	cout<<"\n\nEnter Name     : ";
	cin>>name;
	cout<<"Enter Room No  : ";
	cin>>roomno;
 	for(int i=0;i<total;i++)
 	{
 		if (name==arr1[i]&roomno == arr5[i])
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
			  SetConsoleTextAttribute(h,12);
			  cout<<"\n\n\n@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @"<<endl;
			  cout<<"@   your required data is deleted....!!   @"<<endl;
			  cout<<"@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @\n\n\n"<<endl;
		 }
	  }
	}
 }	
}





void mainmenue()
{
	
	
}






void HostellerMenu()






{
	SetConsoleTextAttribute(h,11);

		cout<<" "<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Hosteller Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"1. Registration of hosteller   "<<endl;
    cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "" "<<"2. Show data of hosteller   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"3. Search data of hosteller   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"4. Update data of hosteller   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"5. Delete data of hosteller   "<<endl;
    cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"6. Back   "<<endl;
	cout<<"\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 "<<" "<<"7. to exit   "<<endl;
	cout<<"\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"<<endl;

	int value;
	cin>>value;
     
	switch (value)
	{
	case 1:
	     registerhosteller();
	break;
	case 2:
	     show();
	break;
	case 3:
	     search();
	break;
	case 4:
	     update( );
	break;
	case 5:
	     deleterecord();
	break;
	case 6:
	    system("cls");
	break;
	case 7:
	     exit(0);
	break;
	default:
		SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
}}






void manager()

	






{
	

	SetConsoleTextAttribute(h,2);
		cout<<"\n\n\n\t\t\t\t  Login "<<endl;
	
		{
				login l;
	bool s=l.islogin();
	if(s)
	{
	

	SetConsoleTextAttribute(h,13);
char z=2;
cout<<"\n\n\n\t\t\t\t"<<z<<z<<z<<"   Congratulation.....Your enter password is correct   "<<z<<z<<z<<endl;
            cout<<"\t\t\t\t"<<"      _________________________________________________"<<endl;
while (true){
int data;
SetConsoleTextAttribute(h,6);
      cout<<"\n\n\n\n\t\t\t\t\t\t\xdb\xdb\xdb\xb2  1 :Hosteller Menu\n"<<endl;
      cout<<"\t\t\t\t\t\t\xdb\xdb\xdb\xb2  2 :Employ Menu\n"<<endl;
      cout<<"\t\t\t\t\t\t\xdb\xdb\xdb\xb2  3 :Main Menu"<<endl;
      cin>>data;
      switch(data)
{
	case 1:
		HostellerMenu();
	break;
	case 2:
		emploMenu();
	break;
	case 3:
		system("cls");
		 main();
	break;
	default:
		SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;	
}
}}
else
	{
		SetConsoleTextAttribute(h,12);
		cout<<"\n\n\t\t Invalid username or passward! \n\n";
	}		
	}
	
		}
		







void ashosteller()







{
	SetConsoleTextAttribute(h,6);
	
	int hostel;
	cout<<" 1: Jinnah hostel "<<endl;
	cout<<" 2: Nusrat hostel "<<endl;
	cout<<" 3: Main menue"<<endl;
	cin>>hostel;
	switch(hostel)
	{
		case 1:
			jinnah();
			break;
		case 2:
			nusrat();
			break;
		case 3:
	    system("cls");
	break;
			default:
				SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
		
	}

}
 






void registration()






{
	
	SetConsoleTextAttribute(h,6);
	cout<<"1 :Registration of hosteller"<<endl;
	cout<<"2 :Registration of Employ"<<endl;
	cout<<"3 :Mian menue"<<endl;
	int cho;
	cin>>cho;
	switch(cho)
	{
		case 1:
			ashosteller();
		break;
		case 2:
			asemploy();
		break;
		case 3:
	    system("cls");
	break;
		default:
		{
			SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
	      } 
	}
}










void hostellerlogin()












{
int k=0;
 	if(total==0)



	{
		SetConsoleTextAttribute(h,12);
		cout<<" \n\n\n No data is entered\n\n\n"<<endl;
	}



	else

	{
		SetConsoleTextAttribute(h,2);
	string name,passward;
	cout<<"\n\n\t\t\tLogin\n"<<endl;
	
	cout<<"Enter Name ::         ";
	cin>>name;
	cout<<"Enter passward ::     ";
	cin>>passward;
	for(int i=0;i<total;i++)
	{
	                                                               
	if(name==arr1[i]&&passward==arr9[i])
	{
		SetConsoleTextAttribute(h,6);
	 cout<<"\n                                               data of Hosteller : "<<i+1<<endl; 
	 SetConsoleTextAttribute(h,13);
    cout<<"                            "<<endl;
   	cout<<"Name :                "<<arr1[i]<<endl;
   	cout<<"Father Name :         "<<arr2[i]<<endl;
   	cout<<"Registration No :     "<<arr3[i]<<endl;
   	cout<<"Floor :               "<<arr4[i]<<endl;
   	cout<<"Room No :             "<<arr5[i]<<endl;
   	cout<<"Location :            "<<arr6[i]<<endl;
   	cout<<"contact No :          "<<arr7[i]<<endl;
   	cout<<"Father Contact No :   "<<arr8[i]<<endl;
   	cout<<"Passward for login :  "<<arr9[i]<<endl;
   	cout<<"hostel :              "<<arr10[i]<<endl;
   	cout<<"\n............................\n"<<endl;	
	}
	  else
{

	k++;
	{
	if(T==k)
	{
			SetConsoleTextAttribute(h,4);
	cout<<"\n\t\tinvalid Username or passward\n";
	}
}
}
}
}
}










void employeelogin()









{
int g=0;
 if (T==0)
{
		 SetConsoleTextAttribute(h,12);	
		 cout<<"\n\n           No Data is Entered \n\n "<<endl;
}

else if(T>0) {
	
SetConsoleTextAttribute(h,2);
 string Name,NAME,pas;
    cout<<"\n\n\n\t\t\t    Login "<<endl;
   
  	cout<<"Enter First and Last name ::      ";
  	cin>>Name>>NAME;
  	cout<<"Enter passward ::                 ";
  	cin>>pas;
  	for(int j=0;j<T;j++)
  	{
	  if(Name==s[j].firstname&&NAME==s[j].lastname&&pas==s[j].passward)
	  {
	  	SetConsoleTextAttribute(h,6);
	  	 cout<<"\n\n                                        Data of Employee :"<<j+1<<endl;
	  	 SetConsoleTextAttribute(h,13);
    cout<<"Entered First Name :      "<<s[j].firstname<<endl;
	
	cout<<"Entered Last Name :       "<<s[j].lastname<<endl;

	cout<<"Entered DOB :             "<<s[j].dob<<endl;

	cout<<"Entered City :            "<<s[j].city<<endl;

	cout<<"Entered Distract :        "<<s[j].distract<<endl;

	cout<<"Entered Contact No :      "<<s[j].contactno<<endl;
	
	cout<<"Entered passward :        "<<s[j].passward<<endl;
	  }
	  else
{

	g++;
	{
	if(T==g)
	{
			SetConsoleTextAttribute(h,4);
	cout<<"\n\t\tinvalid Username or passward\n";
	}
}
}
}

}
}









void Login()











{   
SetConsoleTextAttribute(h,6);
int choic;
	cout<<" 1: Hosteller login"<<endl;
	cout<<" 2: Employee login"<<endl;
	cout<<" 3: Main Menu"<<endl;
	cout<<"Enter your choic ";
	cin>>choic;
switch (choic)	
{
	case 1:
		hostellerlogin();
		break;
	case 2:
		employeelogin();
		break;	
		case 3:
			system("cls");
			
			break;
			default:
		{
			SetConsoleTextAttribute(h,12);
		cout<<"\n# # # # # # # # # # # # # # # # "<<endl;
		cout<<"#         Invalid Input       #"<<endl;
		cout<<"# # # # # # # # # # # # # # # #\n"<<endl;
	} 
}
}

