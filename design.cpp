#include<bits/stdc++.h>
#include"tsm.h"
using namespace std;

void homepage()
{

		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"                   Training Schedule Management			"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
		cout<<"\t* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
		cout<<"\t*		WELCOME TO HOME PAGE		  *"<<endl;
		cout<<"\t*		~~~~~~~~~~~~~~~~~~~~		  *"<<endl;
		cout<<"\t*\t1:Admin Login		 		  *"<<endl;
		cout<<"\t*\t2:Faculty login				  *"<<endl;
		cout<<"\t*\t3:exit					  *"<<endl;
		cout<<"\t*						  *"<<endl;
		cout<<"\t* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
		//cout<<"\nPlease Enter your choice to proceed: ";
}
void adminwelcomepage()
{
		cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      		cout<<"\t               WELCOME TO ADMIN PAGE           "<<endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"\n    Please Enter admin name and password to login     "<<endl;

}

void adminLoginErrorMsg()
{	
	
		cout<<"\n\t\t* * * * * * * * * * * * * * * *"<<endl;
                cout<<"\t\t*                             *"<<endl;
                cout<<"\t\t    ERROR while logging!!!"<<endl;
                cout<<"\t\t  Please check and try again!"<<endl;
                cout<<"\t\t*                             *"<<endl;
                cout<<"\t\t* * * * * * * * * * * * * * * *\n"<<endl;
}
void adminLoginAccessDeniedMsg()
{
		system("clear");		
		cout<<"\n\n\n\t\t    *****ACCESS DENIED*****\n\t\tNumber of attempts reached the limit!!!!\n\t\t    Try again after some time\n\n\n"<<endl;
}
void facultywelcomepage()
{
		cout<<"\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"\t               WELCOME TO FACULTY PAGE         "<<endl;
	        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       		cout<<"\n     Please Enter Faculty name and password to login"<<endl;
}

void facultyLoginErrorMsg()
{
		cout<<"\n\t\t* * * * * * * * * * * * * * * *"<<endl;
                cout<<"\t\t*                             *"<<endl;
                cout<<"\t\t    ERROR while logging!!!"<<endl;
                cout<<"\t\t  Please check and try again!"<<endl;
                cout<<"\t\t*                             *"<<endl;
                cout<<"\t\t* * * * * * * * * * * * * * * *\n"<<endl;
}

void facultyLoginAccessDeniedMsg()
{	
	system("clear");
	cout<<"\n\t\t    *****ACCESS DENIED*****\n\t\tNumber of attempts reached the limit!!!!\n\t\t    Try again after some time\n\n\n\n"<<endl;
}

void  adminsHomePage()
{
         	system("clear");
		cout<<"\n\n\t\t             ADMIN'S HOME PAGE              "<<endl;
	        cout << "\n\tAdmin's Menu "<< endl;
         	cout << "\n\t\t* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t*    1 . Create New Schedule                  *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t*    2 . Update Existing Schedule             *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t*    3 . Allot A Trainer                      *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t*    4 . Generate Report                      *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t*    5 . Quit From This Session               *" << endl;
         	cout << "\t\t*                                             *" << endl;
         	cout << "\t\t* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
}

void adminCreateScheduleMenu()
{
	        cout << "\n\n\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
        	cout << "\t\t\t\t*                                             *"<<endl;
	        cout << "\t\t\t\t*               Create Schedule               *"<<endl;
        	cout << "\t\t\t\t*                                             *"<<endl;
    		cout << "\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
       		cout << "\n\n\t\t\tBelow are the mandatory details for creating new schedule" << endl;
          	cout << "\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<< endl;
          	cout << "\t\t*                                                                           *" << endl;
          	cout << "\t\t*      1. Batch Id                        2. Technology Name                *" << endl;
          	cout << "\t\t*      3. Start Date                      4. End Date                       *" << endl;
          	cout << "\t\t*      5. Total Number of days            6. Venue Details                  *" << endl;
          	cout << "\t\t*      7. No. of Participants             8. Month                          *" << endl;
          	cout << "\t\t*                                                                           *" << endl;
          	cout << "\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<< endl;
          	cout << "\t\t\t\tplease enter the details carefully." << endl;
}

void adminCreateScheduleSuccessMsg()
{
	     	cout <<"\n\n\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *"<< endl;
                cout <<"\t\t\t*                                               *"<< endl;
                cout <<"\t\t\t*       New Schedule Has Been Created.          *"<< endl;
                cout <<"\t\t\t*                                               *"<< endl;
                cout <<"\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *"<< endl;
}

void  adminUpdateSchedule()
{
		cout<<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
         	cout<<"\t\t*                                             *"<<endl;
 	        cout<<"\t\t*                updateSchedule               *"<<endl;
        	cout<<"\t\t*                                             *"<<endl;
     	    	cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}
void adminUpdateScheduleSuccessMsg()
{
	     	cout<<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
         	cout<<"\t\t*                                                 *"<<endl;
         	cout<<"\t\t*        Your schedule has been updated.          *" << endl;
        	cout<<"\t\t*                                                 *"<<endl;
         	cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}


void adminalloTrainer()
{
     		cout<<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
         	cout<<"\t\t*                                             *"<<endl;
         	cout<<"\t\t*                allotTrainer                 *"<<endl;
         	cout<<"\t\t*                                             *"<<endl;
         	cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}

void adminallottrainerSuccessMsg(int batchID,string ftech,string fname)
{
		cout<<"\n\n"<<endl;
             	cout<<"\t\t\t* * * * * * * * * * * * * * * *"<<endl;
                cout<<"\t\t\t*                             *"<<endl;
                cout<<"\t\t\t*   Successfully Alloted      *"<<endl;
                cout<<"\t\t\t*                             *"<<endl;
                cout<<"\t\t\t* * * * * * * * * * * * * * * *"<<endl;
		cout<<"\n\tBelow are the short details that you alloted : "<<endl;
		cout<<"\n\t\tBatchId   : "<<batchID<<endl;
		cout<<"\t\tFacultyName : "<<fname<<endl;
		cout<<"\t\tTechnology  : "<<ftech<<endl;
} 

void  admingenerateReport()
{
     		cout<<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
         	cout<<"\t\t*                                             *"<<endl;
         	cout<<"\t\t*                generateReport               *"<<endl;
         	cout<<"\t\t*                                             *"<<endl;
         	cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}


void  adminQuiteAppMsg()
{
                 cout <<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
                 cout <<"\t\t*                                           *"<<endl;
	         cout <<"\t\t*               Thank you                   *"<<endl;
                 cout <<"\t\t*                                           *"<<endl;
                 cout <<"\t\t* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
                 cout << "See you again\n\n\n\n" << endl;
}




void facultyMenu(string fname)
{
               cout << "\n\n\t\t             FACULTY'S HOME PAGE              "<<endl;
               cout << "\n\tFaculty's Menu		 		Faculty Name: "<<fname << endl;
               cout << "\n\t\t* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
               cout << "\t\t*                                             *" << endl;
               cout << "\t\t*          1 . View Schedule                  *" << endl;
               cout << "\t\t*                                             *" << endl;
               cout << "\t\t*          2 . Cancel Schedule                *" << endl;
               cout << "\t\t*                                             *" << endl;
               cout << "\t\t*          3 . Quite Application              *" << endl;
               cout << "\t\t*                                             *" << endl;
               cout << "\t\t* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
}


void facultyviewSchedule()
{
              cout<<"\n\tView Schedule Menu "<<endl;
	      cout<<"\n\n"<<endl;
	      cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
              cout<<"\t\t*                                             *"<<endl;
              cout<<"\t\t*          1 . view all schedules             *"<<endl;
              cout<<"\t\t*                                             *"<<endl;
	      cout<<"\t\t*	   2 . view accepted schedules	      *"<<endl;
	      cout<<"\t\t*					      *"<<endl;
	      cout<<"\t\t*	   3 . viewCancelSchedules            *"<<endl;
	      cout<<"\t\t*                                             *"<<endl;
	      cout<<"\t\t*	   4 . view homepage		      *"<<endl;
	      cout<<"\t\t*                                             *"<<endl;
              cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}


void facultyQuitApp()
{
             cout <<"\n\n\t\t* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
             cout <<"\t\t*                                           *"<<endl;
             cout <<"\t\t*               Thank you                   *"<<endl;
             cout <<"\t\t*                                           *"<<endl;
             cout <<"\t\t* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
             cout << "See you again\n\n\n" << endl;
}

