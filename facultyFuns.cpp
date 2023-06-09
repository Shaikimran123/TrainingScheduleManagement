#include <bits/stdc++.h>
#include "tsm.h"
using namespace std;

void faculty:: facultyModules()
{
	facultyMenu(faculty::loginId);	
	while(true){
	string choice;
	cout<<"\nplease enter your choice : ";
	cin>>choice;
	if(validBatchId(choice))
	{
	stringstream ss(choice); int ch; ss>>ch;
	switch(ch)
	{
		case 1: system("clear"); viewSchedule(); break;
		case 2: system("clear"); AcceptOrCancelSchedule(); break;
		case 3: system("clear"); MainFun(); break; //facultyQuitApp(); exit(0);break;
		default: cout<<"\nPlease enter correct input value"<<endl; break; //facultyModules();
	}
	}else{continue;}
	}
}

void faculty:: viewSchedule()
{
        facultyviewSchedule();	
	while(true)
	{
	string choice;
	cout<<"\nenter ur choice: ";
	cin>>choice;
	if(validBatchId(choice)) 
	{  
	stringstream ss(choice); int ch; ss>>ch;
	switch(ch)
	{
		case 1 : system("clear"); viewAllSchedules(faculty::loginId); break;
		case 2 : system("clear"); viewAcceptedSchedules( faculty::loginId); break;
		case 3 : system("clear"); viewCancelSchedules(faculty::loginId); break;
		case 4 : system("clear"); facultyModules(); break;
		default : cout<<"\nPlease enter correct input value"<<endl;
	}	
	string p; cout<<"\ndo u want to continue (yes)/ homepage (no)"; cin>>p; 
	if(p=="yes" || p=="YES" || p=="y" || p=="Y") { system("clear"); viewSchedule();} 
	else { system("clear");  facultyModules(); }
	}else{continue;} }
}


void faculty:: AcceptOrCancelSchedule()
{
	string ac;
	cout<<"Enter ur choice to accept or cancel(A/C) : ";
	cin>>ac;
	if(ac=="A" || ac=="a")
	{
		acceptASchedule();
	}
	else if(ac=="C" || ac=="c")
	{
		cancelASchedule();
	}
	else
	{
		cout<<"\nEnter only (A/C)"<<endl;
		AcceptOrCancelSchedule();
	}
	string p; cout<<"\nDo u want to continue (yes) / homepage (no)"; cin>>p;
	if(p=="yes" || p=="YES" || p=="y" || p=="Y") {system("clear"); AcceptOrCancelSchedule(); } else {system("clear"); facultyModules();}
}



void faculty :: acceptASchedule()
{
while(true)
{
	int bid;cout<<"Enter the specific batch id to accept the schedule: ";
        cin>>bid; 
	
        if(!uniquetrainerAcceptedSchedule(bid,faculty::loginId))
        {
	    if(canotAcceptSchedule(bid,faculty::loginId))
	    {
		cout<<"\n\nYou've already canceled your schedule.Now you can't accept it."<<endl;
	        break;
	    }
	    else
	    {
            	if(trainerAcceptedSchedules(bid,faculty::loginId))
            	{
                	cout<<"\n\t\tYour request has been processed for acepting the schedule."<<endl;
            		break;
	    	}
            	else
            	{
                	cout<<"\n\t\tAdmin didn't alloted a schedule for you."<<endl;
			break;
            	}
	   }
        }
        else
        {
            cout<<"You can not accept multiple times"<<endl;
            break;
        }
    }
}


void faculty:: cancelASchedule()
{
while(true)
{
        int cid;    
        cout<<"Enter the specific batch id to cancel the schedul: " ;
        cin>>cid; 
        if(!uniquetrainerCancelSchedules(cid,faculty::loginId))
        {
            if(canotCancelSchedule(cid,faculty::loginId))
            {
                cout<<"\n\nYou've already accepted your schedule.Now you cannot cancel it."<<endl;
            	break;
	    }
            else
            {
                if(checkcancelSchedules(cid,faculty::loginId))
                {
                    cout<<"\n\t\t\tSuccessfully cancel"<<endl; break;
                }
                else 
                {
                    cout<<"\nAdmin did not allot a schedule to you :)"<<endl; break;
                }
            }
        }
        else
        {
            cout<<"\nYou can't cancel multiple times"<<endl;
            break;
        }

}
}	
