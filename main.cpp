#include<bits/stdc++.h>
#include "tsm.h"
using namespace std;




int main()
{
MainFun();
}

void MainFun()
{	
    homepage();	
	string choice;
	while(true)
	{
		cout<<"\nPlease Enter your choice to proceed: ";	
		cin>>choice;
		if(validBatchId(choice)) {
		stringstream ss(choice); int ch; ss>>ch;
		switch(ch)
		{
			case 1: system("clear"); adminLogin();break;
			case 2: system("clear"); facultyLogin();break;
			case 3: system("clear"); adminQuiteAppMsg(); exit(0); break;
			default:cout<<"\n\tInvalid!! please select valid option from the given menu\n"<<endl;
			continue;
		}}else{continue;}
	}
}
void adminLogin()
{
    int num=0; 
	class admin adm;
	string userId="admin";
	string password="12345";
	string id,pass;
	adminwelcomepage();
	cout<<"\n\tEnter admin name: ";
	cin>>id;
	cout<<"\n\tEnter admin password: ";
	cin>>pass;
	transform(id.begin(),id.end(),id.begin(),::tolower);
	if(userId==id && password==pass)
	{
		adm.adminModules(); 
	}
	else
	{
		adminLoginErrorMsg();
		num=num+1;
		cout<<"you have "<<abs(num-3)<<" chances."<<endl;
		if(num==3)
		{
			adminLoginAccessDeniedMsg();
			exit(0);
		}
		else
		{
			while(true){
			cout<<"\nPress 1 to relogin";
			int p; cin>>p; 
			if(!IntValid(p)) {	
			if(p==1) 
			{	
				system("clear");
				adminLogin();break;
			}
			else{ cout<<"plz enter only 1";}
			}}
		}
	}
}
void facultyLogin()
{
    int num=0;
	class faculty fac;
	int count=0;
	string id,pass,userid,password,k;
	facultywelcomepage();
	cout<<"\n\tEnter Faculty name: ";
	cin>>userid;
	cout<<"\n\tEnter password: ";
	cin>>password;
	
	if(facultyFound(userid))
	{
    	fstream input("facultyLogin.txt");
    	while(input >> id >> pass)
    	{
    		if(id==userid && pass==password )
    		{
    			count=1;
    		}
    	}
    	input.close();
    	if(count==1)
    	{
    		system("clear");
    		
    		fac.set_loginId(userid);
            k=fac.get_loginId();
            faculty ff(k);
    		fac.facultyModules();
    	}
    	else
    	{
    		facultyLoginErrorMsg();
    		num=num+1;
    		cout<<"you have "<<abs(num-3)<<" chances."<<endl;
    		if(num==3)
                    {
    			facultyLoginAccessDeniedMsg();
                            exit(0);
     	        }
    		else
    		{
    			 while(true){
                             cout<<"\n\t1.relogin\n\t2.forget passwor"; cout<<"\nEnter your choice : ";
                             int p; cin>>p;
                             if(!IntValid(p)) {
                             if(p==1)
                             {
                                     system("clear");
                                     facultyLogin();break;
                             }else if(p==2) { fogetPassword(k); facultyLogin();}
                             else{ cout<<"invalid choice";}
                             }}
    
    		}
    	}
	}
	else
	{
	    cout<<"Register"<<endl;
	    while(true){
	    string nm,pss,cpss;
	    cout<<"Enter your name: "; cin>>nm;
	    cout<<"Enter password: "; cin>>pss;
	    cout<<"Confirm password: ";cin>>cpss;
	    ofstream f("facultyLogin.txt",ios::app);
	    if(passwordValidation(nm,pss,cpss))
	    {
	        f<<nm<<" "<<pss<<endl;
	        f.close();
	        break;
	    }
	    else
	    {
	        cout<<"incorect password"<<endl; continue;
	    }
	    }
	} 
}
