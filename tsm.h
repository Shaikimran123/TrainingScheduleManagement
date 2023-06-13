// #ifndef TSMA_H
// #define TSMA_H
#include <bits/stdc++.h>
#include <string>
using namespace std;

void adminLogin();
void facultyLogin();
void MainFun();

void fogetPassword(string);

class admin
{
	public:
		void createSchedule();
		void updateSchedule();
		void allotTrainer();
		void generateReport();
		void adminModules();
		void knowStatus();
};

class faculty
{
    public:
        std::string loginId;
        void facultyModules();
        void viewSchedule();
        void AcceptOrCancelSchedule();
    	void acceptASchedule();
 	    void cancelASchedule();
};





string sdateGreaterThanEdate(string,string);
bool validBatchId(string);
bool check(string);
int countNoOfDays(string ,string);
bool validateString(string str);
int IntValid(int n);
bool negativeValidate(int);
bool validateMonth(string , string);
bool facultyFound(string);
bool uniqueBatchID(string);
bool techValidateString(string);
bool facultyFoundInTrainerallot(string);
bool batchAllotmentFound(int,string,string);


void viewAllSchedules(string);
void viewAcceptedSchedules(string); 
void viewCancelSchedules(string); 

bool uniquetrainerAcceptedSchedule(int,string);
bool canotAcceptSchedule(int,string);
bool trainerAcceptedSchedules(int,string);

bool uniquetrainerCancelSchedules(int,string);
bool canotCancelSchedule(int,string); 
bool checkcancelSchedules(int,string);






void homepage();

void adminwelcomepage();
 
void adminLoginErrorMsg();
void adminLoginAccessDeniedMsg();

void facultywelcomepage();

void facultyLoginErrorMsg(); 
void facultyLoginAccessDeniedMsg();

void adminsHomePage();
void adminCreateScheduleMenu();
void adminCreateScheduleSuccessMsg();
void adminUpdateSchedule();
void adminUpdateScheduleSuccessMsg();
void adminalloTrainer();
void adminallottrainerSuccessMsg(int,string,string);
void admingenerateReport();
void adminQuiteAppMsg();

void facultyMenu(string);
void facultyviewSchedule();
void facultyQuitApp();




// #endif
