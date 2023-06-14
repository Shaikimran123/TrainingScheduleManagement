#include<bits/stdc++.h>
#include "tsm.h"

using namespace std;

int IntValid(int n)
{
	if(cin.fail())
	{ 
		cin.clear();
		cin.ignore(256,'\n');
		cout<<"\n\twrong input.."<<endl;
		cout<<"\tplease enter once again!!!\n"<<endl;
		return 1;
	} 
	else 
	{
		 return 0; 
	}
}
bool validBatchId(string s)
{
	int size=0;
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			size++;
		}
	}
	if(s.size()==size)
		return 1;
	else 
	{
		cout<<"\n\t\tIncorrect Format\n";
	return 0;
	}
}	
bool check(string s)
{
	stringstream ss(s);
	int y,m,d;char c;
	ss>>d>>c>>m>>c>>y;
	if(d>29 && m==2) return false;
        if((d>0 && d<32 ) && (m>0 && m<13) && (y>2022))	return true; else return false;
}

string sdateGreaterThanEdate(string sdate,string edate)
{
    stringstream sdss(sdate),edss(edate);
    int d1,m1,y1,d2,m2,y2; char c;
    sdss>>d1>>c>>m1>>c>>y1; 
    edss>>d2>>c>>m2>>c>>y2;
    
    if(y1>y2)
    {
        return "year";
    }
    else if(y1==y2 && m1>m2)
    {
        return "month";
    }
    else if( y1==y2 && m1==m2 && d1>d2)
    {
        return "date";
    }
    else
    {
        return "success";
    }
}
int  countNoOfDays(string sd,string ed)
{
	int d1,m1,y1,d2,m2,y2;char sp1,sp2;
	stringstream s(sd),ss(ed);
	s>>d1>>sp1>>m1>>sp1>>y1;
	ss>>d2>>sp2>>m2>>sp2>>y2;
	int days=0;
	while(d1!= d2 || m1!= m2 || y1!=y2)
	{
		days++; 
		d1++;
		
		if(d1>31)
		{
			d1=1;
			m1++; 
		}
		if(m1>12)
		{
			m1=1;
			y1++;
		}
 	}
	return days+1;
 }
bool validateString(string s) {
    bool result = true;
    for (int c=0;s[c]!='\0';c++) {
         if (!(isalpha(s[c]) || s[c]==' ')) {
             result=false;
        }
    }
     return result;
 }
bool techValidateString(string s){
    bool result = false;
    for (int c=0;s[c]!='\0';c++) {
         if (!(isalpha(s[c]) || s[c]=='#' || s[c]=='.' || s[c]=='+')) {
             result=true;
        }
    }
     return result;
 }
bool negativeValidate(int n)
{
	if(n>0){ return true; }
	return false;
}
bool validateMonth(string sd,string month)
{
	int startMonthNumber,mm,y; char sp;
	stringstream ss(sd); ss>>startMonthNumber>>sp>>mm>>sp>>y;
	map<int , string> m;
	m.insert(make_pair(1,"jan")); 
	m.insert(make_pair(2,"feb"));
	m.insert(make_pair(3,"mar"));
	m.insert(make_pair(4,"apr"));
	m.insert(make_pair(5,"may"));
 	m.insert(make_pair(6,"jun"));
	m.insert(make_pair(7,"jul"));
	m.insert(make_pair(8,"aug"));
	m.insert(make_pair(9,"sep"));
	m.insert(make_pair(10,"oct"));
	m.insert(make_pair(11,"nov"));
	m.insert(make_pair(12,"dec"));
 	
	string mn=month.substr(0,3);
	transform(mn.begin(), mn.end(),mn.begin(),::tolower);


	map<int,string>::iterator it=m.begin();
	int flag=0;
	while(it != m.end())
	{
		if(mm==it->first && mn==it->second)
		{
			flag=1;
		}++it;
	}
	if(flag==0) return false; else return true;
}


bool facultyFound(string name)
{
    ifstream f("facultyLogin.txt");
    string fname,fpass;
    while(f>>fname>>fpass)
    {
        if(name==fname)
        {
            return true;
        }
    }
    return false;
}


bool uniqueBatchID(string s)
{
int n;
stringstream ss;ss<<s;ss>>n;
    ifstream f("schedule.txt");
    int batchID, nod, nop;
    string technology, startDate, endDate, venueDetail, month;
    while(f>>batchID>>technology>>startDate>>endDate>>nod>>venueDetail>>nop>>month)
    {
        if(n==batchID)
        {
            return true;
        }
    }
    return false;
}


bool facultyFoundInTrainerallot(string id)
{
   string batchId, nd,np;
   string tech,sd,ed,ve,name,month;
   fstream f("trainerallotment.txt");
   while(f>>batchId>>tech>>sd>>ed>>nd>>ve>>np>>month>>name)
   {
       if(batchId==id)
       {
           return true;
       }
   }
   return false;
}


bool batchAllotmentFound(int bid, string stream,string fname)
{
	bool result=false;     
	int  batchId,  nd,np;
	string tech,sd,ed,ve,month,name;
	fstream f("schedule.txt");
	ofstream ff("trainerallotment.txt",ios::app);

	while(f>>batchId>>tech>>sd>>ed>>nd>>ve>>np>>month)
	{
		if(batchId==bid && tech==stream)
		{ 
			ff<<batchId<<" "<<tech<<" "<<sd<<" "<<ed<<" "<<nd<<" "<<ve<<" "<<np<<" "<<month<<" "<<fname<<endl;		 
			result =true;
		}
	}
	return result;
}	

void viewAllSchedules(string fname)
{
	ifstream f1("trainerallotment.txt");
	int batchID,nop,nod,count=1,flag=0;
	string technology,startDate,endDate,venueDetail,month,facultyName;
	cout<<"\nBelow are the details of your schedule"<<endl;
	while(f1>>batchID>>technology>>startDate>>endDate>>nod>>venueDetail>>nop>>month>>facultyName)
	{
		if(fname==facultyName)
		{
                	 cout<<"\n\n\t\tSchedule-->"<<count<<endl;
	                 cout<<"\n\t\t\tbatch Id\t\t:\t\t "<<batchID
        	             <<"\n\t\t\tTechnology\t\t:\t\t"<<technology
                	     <<"\n\t\t\tStart Date\t\t:\t\t"<<startDate
	                     <<"\n\t\t\tEnd Date\t\t:\t\t"<<endDate
	                     <<"\n\t\t\tNumber of Days\t\t:\t\t"<<nod
       	 	             <<"\n\t\t\tVenue Details\t\t:\t\t"<<venueDetail
	                     <<"\n\t\t\tNumber of Participants\t:\t\t"<<nop
	                     <<"\n\t\t\tMonth\t\t\t:\t\t"<<month
        	             <<endl;
                	count++;
			flag=1;
         	 }
	}
	if(flag==0)
	{
		cout<<"\n\tyou don't have any schedules"<<endl;
	}
}

void viewAcceptedSchedules(string fname)
{
	int batchid,nop,nd,flag=0,count=1; string tech,sd,ed,ve,m,name;
	fstream f("trainerAcceptedSchedules.txt");
	cout<<"Below are the details of your accepted schedules"<<endl;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
		if(fname==name)
		{
			cout<<"\n\n\t\tSchedule-->"<<count<<endl;
			cout<<"\n\t\t\tbatch Id\t\t:\t\t "<<batchid
	    		<<"\n\t\t\tTechnology\t\t:\t\t"<<tech
    			<<"\n\t\t\tStart Date\t\t:\t\t"<<sd
    			<<"\n\t\t\tEnd Date\t\t:\t\t"<<ed
	    		<<"\n\t\t\tNumber of Days\t\t:\t\t"<<nd
    			<<"\n\t\t\tVenue Details\t\t:\t\t"<<ve
    			<<"\n\t\t\tNumber of Participants\t:\t\t"<<nop
	    		<<"\n\t\t\tMonth\t\t\t:\t\t"<<m
    			<<endl;
			count++;
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"\n\tYou did't accepted any schedule yet!!"<<endl;
	}
}

void viewCancelSchedules(string fname)
{
	int batchid,nop,nd,flag=0,count=1; string tech,sd,ed,ve,m,name;
	fstream f("trainerCancelShedules.txt");
	cout<<"Below are the details of your canceled schedules"<<endl;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
		if(fname==name)
		{
			cout<<"\n\n\t\tSchedule-->"<<count<<endl;
			cout<<"\n\t\t\tbatch Id\t\t:\t\t "<<batchid
    			<<"\n\t\t\tTechnology\t\t:\t\t"<<tech
    			<<"\n\t\t\tStart Date\t\t:\t\t"<<sd
	    		<<"\n\t\t\tEnd Date\t\t:\t\t"<<ed
    			<<"\n\t\t\tNumber of Days\t\t:\t\t"<<nd
	    		<<"\n\t\t\tVenue Details\t\t:\t\t"<<ve
    			<<"\n\t\t\tNumber of Participants\t:\t\t"<<nop
    			<<"\n\t\t\tMonth\t\t\t:\t\t"<<m
    			<<endl;
			count++;
			flag=1;
		}	
	}
	if(flag==0)
	{
		cout<<"\n\tNo canceled Schedules"<<endl;
	}
}



bool trainerAcceptedSchedules(int bid,string fname)
{ 
	fstream f("trainerallotment.txt");
	int batchid,nop,nd; string tech,sd,ed,ve,m,name;
	ofstream ff("trainerAcceptedSchedules.txt",ios::app);
	bool res=false;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
		if(batchid==bid && fname==name)
		{    
			res=true;
			ff<<batchid<<" "<<tech<<" "<<sd<<" "<<ed<<" "<<nd<<" "<<ve<<" "<<nop<<" "<<m<<" "<<name<<endl;
		}
	}
	return res;
}


bool uniquetrainerAcceptedSchedule(int bid,string fname)
{
	fstream f("trainerAcceptedSchedules.txt");
	int batchid,nop,nd; string tech,sd,ed,ve,m,name;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
		if(batchid==bid && fname==name)
		{
		return true;
		}
	}
	return false;
}



bool uniquetrainerCancelSchedules(int bid,string fname)
{
	fstream f("trainerCancelShedules.txt");
	int batchid,nop,nd; string tech,sd,ed,ve,m,name;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
        	 if(batchid==bid && fname==name)
         	{
	         	return true;
         	}
	}
	return false;
}


bool canotCancelSchedule(int cid,string fname)
{
	fstream f("trainerAcceptedSchedules.txt");
	bool res=false;
	int batchid,nop,nd; string tech,sd,ed,ve,m,name;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
     		if(batchid==cid && fname==name)
     		{    
         		res=true;
         
     		}
	}
	return res;
}


bool canotAcceptSchedule(int bid,string fname)
{
	fstream f("trainerCancelShedules.txt");
	bool res=false;int batchid,nop,nd; string tech,sd,ed,ve,m,name;
	while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
	{
		if(batchid==bid && fname==name)
		{
			res=true;
		}
	}
	return res;
}


bool checkcancelSchedules(int cid,string fname)
{

    fstream f("trainerallotment.txt");
    bool res=false;
    int batchid,nop,nd; string tech,sd,ed,ve,m,name;
    ofstream ff("trainerCancelShedules.txt",ios::app);
    while(f>>batchid>>tech>>sd>>ed>>nd>>ve>>nop>>m>>name)
    {
    	if(batchid==cid && fname==name)
       	{    
           ff<<batchid<<" "<<tech<<" "<<sd<<" "<<ed<<" "<<nd<<" "<<ve<<" "<<nop<<" "<<m<<" "<<name<<endl;	   
           res=true;           
        }
    }
    return res;
}

void fogetPassword(string uid)
{
        
    fstream f("facultyLogin.txt");
    string line,w;
    std::vector<string>v ;
    while(!f.eof())
    {
        getline(f,line);
        stringstream ss(line);
        while(getline(ss,w,' '))
        {
            v.push_back(w);
        }
    }
    while(true){
    string userid,npass,cpass,id,p;
    cout<<"Enter user Id";
    cin>>userid;
    cout<<"Enter new pass";
    cin>>npass; 
    cout<<"Enter confirm password";
    cin>>cpass;
    if((uid != userid) || (npass!=cpass)) { cout<<"miss match"<<endl; continue;}
    else if(npass.size()<7) { cout<<"password length should be 8 or more"<<endl; continue;}
    else{
    int i=0;
    while(i<v.size())
    {
        if(v[i]==uid)
        {
            v[i+1]=npass;
        }
        i+=2;
    }}break;}
    
    fstream ff("facultyLogin.txt",ios::out | ios::trunc);
    int j=0;
    while(j<v.size())
    {
        ff<<v[j]<<" "<<v[j+1]<<endl;
        j+=2;
    }
    cout<<"Successfully fogetPassword\n now relogin:";
}

void acceptCancelledSchedule(int bid,string fname)
{
    vector<string> v;
    string line,w; fstream f("trainerCancelShedules.txt");
    while(!f.eof())
    {
        getline(f,line);
        stringstream ss(line);

        while(getline(ss,w,' '))
        {
            v.push_back(w);
        }
    } f.close();
    string id; stringstream sss; sss<<bid; sss>>id;
    vector<string>::iterator i;
    for(i=v.begin() ;i !=v.end() ; i++){
        if(*i==id && *(i+8)==fname)
        {
           v.erase(i);    i--; //id
           v.erase(i+1);  i--;//tech
           v.erase(i+2);  i--;//sdate
           v.erase(i+3);  i--;//edate
           v.erase(i+4);  i--;//nd 
           v.erase(i+5);  i--;//ve 
           v.erase(i+6);  i--; //nop
           v.erase(i+7);  i--;//mon
           v.erase(i+8);  i--;//name
        }
    }
    //for(int jj=0;jj<v.size();jj+=9){ cout<<v[jj]<<" "<<v[jj+1]<<" "<<v[jj+2]<<" "<<v[jj+3]<<" "<<v[jj+4]<<" "<<v[jj+5]<<" "<<v[jj+6]<<" "<<v[jj+7]<<" "<<v[jj+8]<<endl;    }
    int j=0;
    fstream ff("trainerCancelShedules.txt",ios::out | ios::trunc);
    while(j<v.size())
    {
        ff<<v[j]<<" "<<v[j+1]<<" "<<v[j+2]<<" "<<v[j+3]<<" "<<v[j+4]<<" "<<v[j+5]<<" "<<v[j+6]<<" "<<v[j+7]<<" "<<v[j+8]<<endl;
        j+=9;
    }
}
