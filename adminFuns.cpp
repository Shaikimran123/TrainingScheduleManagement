#include <bits/stdc++.h>
#include "tsm.h"

using namespace std;

int batchID, nod, nop;
string technology, startDate, endDate, venueDetail, month;

void admin:: createSchedule()           
{ 
	adminCreateScheduleMenu();
	while(true)
	{
		cout << "\n\t\tEnter the batch id : ";
 		string bid;
		cin >> bid;
        	if(!uniqueBatchID(bid))
        	{
			if((validBatchId(bid)))
			{
				stringstream ss;
				ss<<bid;
				ss>>batchID;
				break; 
			}	
		}
		else 
		{ 
        		cout << "\n\tBatch Number : "<<bid <<" is alredy existed!!"<<endl;
            		cout << "\tNow please enter once again for better result." << endl;
       		}
	}
        cin.ignore();
	
	while(true)
	{
		cout << "\n\t\tEnter the technology name: ";
        	cin>> technology;       
        	if (!techValidateString(technology)) break; else cout<<"\n\n\t\t\t--incorect formate--"<<endl;
	}

    
	while(true)
	{
		cout << "\n\t\tEnter the start date of traning (Use Format {DD-MM-YYYY}) : ";
        	cin>> startDate;
        	int result=check(startDate);
        
       		if (result != 0) { break; } else {
            	cout << "\n\tOops! you have entered wrong date/format." << endl;
            	cout << "\tNow please enter once again for better result." << endl;  
        }}
        
        while(true) 
	{
		cout << "\n\t\tEnter the end date of training (Use Format {DD-MM-YYYY}) : ";
        	cin>>endDate;
		
        	int result = check(endDate); 
        	if (result != 0) { 
		string msg=sdateGreaterThanEdate(startDate,endDate);
		if(!(msg=="success"))
		{
			cout<<msg<<" error!! Please correct the date"<<endl;
			continue;	
		}
		break; } else {
        	cout << "\n\tOops! you have entered wrong date/format." << endl;
            	cout << "\tNow please enter once again for better result." << endl;
        }}
        
	cin.ignore();
 
	while(true)
	{
		cout << "\n\t\tEnter the total number of days : ";
        cin >> nod;
 
        int diff = countNoOfDays(startDate, endDate);
        if (diff != nod)
    	{
		if(!IntValid(nod)) {
            		cout << "\n\tOops! your number of days isn't matching with dates difference." << endl;
            		cout << "\tIt should be : " << diff << " days" << endl;
            		cout << "\tNow please enter once again for better result." << endl;
			}
		}else { break; }
	}
 
        while(true)
	{
		cout << "\n\t\tEnter the venue : ";
        	cin>> venueDetail;
        	if (validateString(venueDetail)){ break; } else { cout<<"\n\n\t\t\t---incorrect--"<<endl;}
	}

    while(true) 
	{
	    	cout << "\n\t\tEnter the total number of participants : ";
        	cin >> nop;
        	if(!IntValid(nop))
		    {
			if(!negativeValidate(nop))
			{
				 cout<<"\n\n\t\t\t---incorrect--"<<endl; continue;
			}
		    break;
		}
	}
	
 
        while(true) 
	{
		cout << "\n\t\tEnter the month of training to be schedule : ";
        	cin >> month;
       		if(validateMonth(startDate,month))
		{
		if (validateString(month)) { break; }} 
		else {
			cout<<"\n\tYou entered wrong month!!Please check once!!!!!"<<endl;
			cout <<"\tNow please enter once again for better result." << endl;

		}
	}

        ofstream f1("schedule.txt", ios::app);
        f1 << batchID << " " << technology << " " << startDate << " " << endDate << " " << nod << " " << venueDetail << " " << nop << " " << month << endl;
	adminCreateScheduleSuccessMsg();        	
        
        string opt;
        cout <<"\nDo you want to create another schdedule (yes/no) : ";
        cin >> opt;
        if (opt == "yes" || opt == "y" || opt == "YES" || opt == "Y")
        {
	    system("clear");
            createSchedule();
        }
        else
        {
	    system("clear");
	    cout<<"\n\nPress 1 to view home page : ";
	    int p;
            cin>>p;
            if(p==1) { system("clear"); adminModules();}
        }
    }

void admin:: updateSchedule()       
    {
	//20463174_ShaikImran
	adminUpdateSchedule();
        
	fstream file,file1,file11;
        vector<string> v,v1,v2;
        
	file.open("schedule.txt", ios::in);
        string details,word;
        while(!file.eof())
        {
            getline(file, details);
            stringstream s(details);
            while (getline(s, word, ' '))
            {
                v.push_back(word);
            }
        }
        file.close();
        
        file1.open("trainerallotment.txt", ios::in);
        string details1,word1;
        while(!file1.eof())
        {
            getline(file1, details1);
            stringstream s(details1);
            while (getline(s, word1, ' '))
            {
                v1.push_back(word1);
            }
        }
        file1.close();
        string updateInTrainerallotBid;
        
        string id;
        cout << "\nEnter batch id for updating the schedule : ";
        cin >> id;
        int i = 0;
        int flag = 0;
        string tech, sdate, edate, venue, mos, nd, np;
        while (i < v.size())
        {
            if (v[i] == id)
            {
                flag = 1;	
	
		while(true)
         	{
                	cout << "\n\t\tEnter the technology (previous : "<<v[i+1]<<" ) new : ";
                	cin>>tech;
                	if (!techValidateString(tech)) break; else cout<<"\n\n\t\t\t--incorect formate--"<<endl;
         	}    
                v[i + 1] = tech;

		while(true)
          	{
                	cout << "\n\tEnter start date (previous : "<<v[i+2] <<" ) new : ";
                	cin>> sdate;
                 	int result=check(sdate);
 
                	if (result != 0) { break; } else {
                 	cout << "\n\tOops! you have entered wrong date/format." << endl;
                	cout << "\tNow please enter once again for better result." << endl;
         	 }}           
                v[i + 2] = sdate;

		while(true)
                {
                         cout << "\n\tEnter start date (previous : "<<v[i+3] <<" ) new : ";
                         cin>> edate;
                         int result=check(edate);

                         if (result != 0) { break; } else {
                         cout << "\n\tOops! you have entered wrong date/format." << endl;
                         cout << "\tNow please enter once again for better result." << endl;
                }}         
                v[i + 3] = edate;




	while(true)
	{
		cout << "\n\t\tEnter the total number of days : ";
        cin >> nd;
        int nod; stringstream ss(nd); ss>>nod;
        int diff = countNoOfDays(sdate, edate);
        if (diff != nod)
    	{
		if(!IntValid(nod)) {
            		cout << "\n\tOops! your number of days isn't matching with dates difference." << endl;
            		cout << "\tIt should be : " << diff << " days" << endl;
            		cout << "\tNow please enter once again for better result." << endl;
			}
		}else { break; }
	}
    v[i + 4] = nd;

                while(true)
 	        {
	                cout << "\n\t\tEnter the venue (previous : " <<v[i+5] <<" ) new : ";
         	       cin>>venue;
                	if (validateString(venue)){ break; } else { cout<<"\n\n\t\t\t---incorrect--"<<endl;}
        	}             
                v[i + 5] = venue;


            while(true)
            {
	        cout << "\n\t\tEnter the total number of participants : ";
        	cin >> np;  int nop; 
        	stringstream ss(np);ss>>nop;
        	if(!IntValid(nop))
		    {
			    if(!negativeValidate(nop))
			    {
				    cout<<"\n\n\t\t\t---incorrect--"<<endl; continue;
			    }
		        break;
		        }
            }
            v[i + 6] = np;




 while(true) 
	{
		cout << "\n\t\tEnter the month of training to be schedule : ";
        	cin >> mos;
       		if(validateMonth(sdate,mos))
		{
		if (validateString(mos)) { break; }} 
		else {
			cout<<"\n\tYou entered wrong month!!Please check once!!!!!"<<endl;
			cout <<"\tNow please enter once again for better result." << endl;

		}
	}





                // cout << "\n\t\tEnter the month of training to be schedule :  (previous : " <<v[i+7] <<" ) new : ";
                // cin >> mos;
                v[i + 7] = mos;
                
                if(facultyFoundInTrainerallot(v[i]))
                {
                    v2.push_back(v[i]);
                    v2.push_back(v[i+1]);
                    v2.push_back(v[i+2]);
                    v2.push_back(v[i+3]);
                    v2.push_back(v[i+4]);
                    v2.push_back(v[i+5]);
                    v2.push_back(v[i+6]);
                    v2.push_back(v[i+7]);
                    updateInTrainerallotBid=v[i];
                }
            }
            i = i + 8;
        }
        
                
        int j=0;
        while(j<v1.size())
        {
            if(v1[j]==updateInTrainerallotBid)
            {
                v1[j]=v2[0];
                v1[j+1]=v2[1];
                v1[j+2]=v2[2];                
                v1[j+3]=v2[3];
                v1[j+4]=v2[4];
                v1[j+5]=v2[5]; 
                v1[j+6]=v2[6];
                v1[j+7]=v2[7];
            }
            j+=9;
        }
	v2.clear();
        file.open("schedule.txt", ios::out | ios::trunc);
        int z = 0;
        while (z < v.size())
        {
        	file << v[z] << " " 
		     << v[z + 1] << " " 
		     << v[z + 2] << " " 
			<< v[z + 3] << " " 
			<< v[z + 4] << " " 
			<< v[z + 5] << " " 
			<< v[z + 6] << " " 
			<< v[z + 7] << endl;
        	z = z + 8;
        }
     	file.close(); 
        file11.open("trainerallotment.txt", ios::out | ios::trunc);
        int a=0;
        while (a < v1.size())
        {
             file11 << v1[a]  << " " 
		<< v1[a + 1] << " " 
		<< v1[a + 2] << " " 
		<< v1[a + 3] << " " 
		<< v1[a + 4] << " " 
		<< v1[a + 5] << " " 
		<< v1[a + 6] << " " 
		<< v1[a + 7] << " " 
		<<v1[a+8]<< endl;
            a = a + 9;
        }
    	file11.close();
  
     
        
         if (flag == 0)
        {
            cout << "\n\tNo Such Record Found for batch_id...!! \n\n\tTaking back you to on your Dashboard" << endl;
        }

  
        adminUpdateScheduleSuccessMsg(); 
        
	string option;
        cout << "\nDo you want to update a schedule again type(yes/no) : ";
        cin >> option;
        if (option == "yes" || option == "Y" || option == "YES" || option == "y")
        {
	    system("clear");
            updateSchedule();
        }
        else
        {
             system("clear");
             cout<<"\n\nPress 1 to view home page : ";
             int p;
             cin>>p;
             if(IntValid(p)) adminModules();
             if(p==1) { system("clear"); adminModules();}	     
        }
    }
void admin:: allotTrainer()         
    {
	//20463174_ShaikImran
	adminalloTrainer();
      
        string fname;
	while(true)
        {
                cout << "\n\t\tPlease enter a faculty name : ";
		cin>>fname;	
                if (validateString(fname)) { break; } else { cout<<"--\n\n\t\t\t---incorrect--"<<endl;}
         }

 
        if(facultyFound(fname))
        {
		int batchID; string ftech;
	
		while(true)
         	{
                	cout <<" \n\t\tPlease enter a  batchID which you need to allot a stream to "<<fname<<" : ";
                 	cin >> batchID;
                 	if(!IntValid(batchID)) { break; }
                
         	}
	 	
		while(true)
        	{
			cout <<" \n\t\tPlease enter a technology which you need to allot a stream to "<<fname<<" : ";
                	cin>>ftech;
                 	if (!techValidateString(ftech)) { break; } else { cout<<"\n\n\t\t\t---incorrect--"<<endl;}
          	}
	 

		
	   	if(batchAllotmentFound(batchID,ftech,fname))
           	{ 
			adminallottrainerSuccessMsg(batchID,ftech,fname);
           	}
            	else
	    	{ 
			cout<<"Batch Id  and a specific stream is not found " <<endl; 
	    	}
	     
	}
        else
        {
            cout<<"\n\tYouu can't allocate a schedule. Because, "<<fname<<" records not found!!!"<<endl;
        }
        string opt;
        cout << "\n\tDo you want to continue with allotment trainer (yes/no) : ";
        cin >> opt;
        if (opt == "yes" || opt == "Y" || opt == "YES" || opt =="y")
        {
	    system("clear");
            allotTrainer();
        }
        else
        {	
             system("clear");
             cout<<"\n\nPress 1 to view home page : ";
             int p;
             cin>>p;
             if(IntValid(p)) adminModules();
             if(p==1) { system("clear"); adminModules();}
        }
    }
void admin:: generateReport()           
    {
	//20463174_ShaikImran
	admingenerateReport();
     
        string mon, tname;
        int count = 1;
        cout << "\n\tPlease enter a month for which you want to generate report : ";
        cin >> mon;
        if (!validateString(mon)) {
            generateReport();
        }

        ifstream f3("schedule.txt");
        while (f3 >> batchID >> technology >> startDate >> endDate >> nod >> venueDetail >> nop >> month)
        {
	    string month1=month.substr(0,3); mon=mon.substr(0,3);
            transform(month1.begin(), month1.end(), month1.begin(), ::tolower);
            transform(mon.begin(), mon.end(), mon.begin(), ::tolower); 
            if (month1 == mon)
            {
                cout << "\n\n\t\t\tSchedule --> " << count << endl;
                cout << "\n\t\t\t\tBatch Id                :            " << batchID 
                    << "\n\t\t\t\tTechnology              :            " << technology 
                    << "\n\t\t\t\tStart Date              :            " << startDate 
                    << "\n\t\t\t\tEnd Date                :            " << endDate 
                    << "\n\t\t\t\tNumber of Days          :            " << nod 
                    << "\n\t\t\t\tVenue Details           :            " << venueDetail 
                    << "\n\t\t\t\tNumber of Participants  :            " << nop 
		    << "\n\t\t\t\tMonth                   :            " << month << endl;
                count++;
            }
        }
        if (count == 1)
        {
            cout << "\n\tYou haven't created a schedule for this month. Please create schedule for this month and try to generate report." << endl;
        }
        string opt;
        cout << "\nDo you want to continue with the session (yes/no) : ";
        cin >> opt;
        if (opt == "yes" || opt == "y" || opt == "YES" || opt == "Y")
        {
	    system("clear");
            generateReport();
        }
        else
        {
             system("clear");
             cout<<"\n\nPress 1 to view home page : ";
             int p;
             cin>>p;
             if(IntValid(p)) adminModules();
             if(p==1) { system("clear"); adminModules();}
        }
        
        
    }
void admin:: adminModules()
    {
        
 	//20463174_ShaikImran       
        adminsHomePage();
        while(true){
	string choice;
        cout << "\n\nPlease enter your choice : ";
        cin >> choice;
        if (validBatchId(choice))
	{
	stringstream ss(choice); int ch; ss>>ch; 
        switch (ch)
	{
            case 1: system("clear"); createSchedule(); break;
            case 2: system("clear"); updateSchedule(); break;
            case 3: system("clear"); allotTrainer(); break;
            case 4: system("clear"); generateReport(); break;
            case 5: system("clear"); MainFun(); break;                 
	    default: cout << "Please choose valid Option" << endl; break;
        }
	}else { continue;}}
 }
