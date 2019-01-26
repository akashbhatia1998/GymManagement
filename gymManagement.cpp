#include<iostream>
#include<string.h>
using namespace std;
class gym
{
	
	public:
		char pass[10]="akash";
	
	int validation(char *p)
	{
		int i;
		i=strcmp(pass,p);
		
		if(i==0)
			{
				return i;
			}
		
		else
		{
			return 1;
		}
	}
	
};
class act
{
	public: int c;
		char a[15];
		char y[2];
	void loss()
		{
			cout<<"time u r interested in i.e. morning or evening??"<<endl;
			cin>>a;
			cout<<"want to join spa and other steam bath etc?if yes enter 'y' else 'n'"<<endl;
			cin>>y;
			if(strcmp(y,"y")==0)
			{
				cout<<"cost for this program is 2500 per month"<<endl;
			}
			else{
			
			c=1500;
			cout<<"this program costs:"<<c<<endl;}
			cout<<"so u can join gym right from tommorow trainer will be assigned to u tommorow only"<<endl<<"Thankuu :) :)";
		}
			void gain()
		{
			cout<<"As u want to join weight we asume that u r skinny"<<endl;
			cout<<"we will make sure that we work on each and every muscle with eaqual fat .."<<endl;
			
			cout<<"Morning slot or Evening slot??"<<endl;
			cin>>a;
			cout<<"U want full diet plan and exercise format daily ?.Are you interested enter 'y' or'n'";
			cin>>y;
			if(strcmp(y,"y")==0)
			{
				cout<<"cost for this program is 2500 per month"<<endl;
			}
			else{
			
			c=1500;
			cout<<"this program costs:"<<c<<endl;}
			cout<<"so u can join gym right from tommorow trainer will be assigned to u tommorow only"<<endl<<"Thankuu :) :)";
			
	
		}
			void body()
		{
			cout<<"As u have emrolled in body building we will consider u as professional "<<endl<<"in we this program it is compulsary to have diet plan with some supplements.";
			c=2500;
			cout<<"time u r interested in i.e. morning or evening??"<<endl;
			cin>>a;
			cout<<"this program costs:"<<c<<endl;
			cout<<"so u can join gym right from tommorow trainer will be assigned to u tommorow only"<<endl<<"Thankuu :) :)";
		}
			void aer()
		{
			cout<<"As u have enrolled in aerobics. we have 6AM-7AM and 6PM-7PM batch only .Kindly enter ur choice for morning or evening";
		    //cout<<"time u r interested in i.e. morning or evening??"<<endl;
			cin>>a;
            
			cout<<"U want full diet plan and exercise format daily u need to a little amount of money more..Are you interested enter 'y' or'n'";
			cin>>y;
			if(strcmp(y,"y")==0)
			{
				cout<<"cost for this program is 2500 per month"<<endl;
			}
			else{
			
			c=1500;
			cout<<"this program costs:"<<c<<endl;}
			cout<<"so u can join gym right from tommorow trainer will be assigned to u tommorow only"<<endl<<"Thankuu :) :)";
			c=2000;
			cout<<"this program costs:"<<c<<endl;
		}
		void other()
		{
			cout<<"further parts"<<endl;
			
		}
		

};
class joiner:public act
{
	int c,i;
	public:
	char com[100];
	void ent()
	{
	char a[20];
	int phn_no;
  cout<<"enter ur name?"<<endl;
  cin>>a;
  cout<<"enter ur phone no.?"<<endl;
  cin>>phn_no;
  cout<<"so.... can we know in which of ur programs are u interested"<<endl;
  cout<<"1.Weight loss"<<endl;
  cout<<"2.Weight gain "<<endl;
  cout<<"3.Body building"<<endl;
  cout<<"4.Aerobics"<<endl;
  cout<<"5.Any complaint or query .We will look forward towards it"<<endl;
  cout<<"enter no. as the options are given"<<endl;
  cin>>i;

 /* trainer x;
  int a;*/
  
  switch(i)
  {
  	case 1:
  		cout<<"so u have entered in weightloss.."<<endl;
  		loss();
  		break;
  		
    case 2:
	  	cout<<"so u have entered in weightgain.."<<endl;
	  	gain();
	  	break;
	case 3:
		cout<<"so u have entered in body building.."<<endl;
		body();
		break;
    case 4:
     	cout<<"so u have entered in Aerobics.."<<endl;
     	aer();
     	break;
	case 5:
		 cout<<"Kindly enter your complaint."<<endl;
		 cin>>com;
	
		 break;
	}}
};
class trainer:public gym
{
	public:
		void det(){
	int d;	
	int pay;
	int hrs;
	char name[20];
	char com[100];
	cout<<"enter ur name"<<endl;
	cin>>name;
	
	char pwd[10];
	cout<<"enter password"<<endl;
	cin>>pwd;
	int i;
	i=validation(pwd);
	
		if(i==0)
		{
			int c;
			cout<<"about what u want to discuss?"<<endl;
			cout<<"1.Apply leave."<<endl<<"2.work extra hours"<<endl<<"3. Pay"<<endl<<"4.any complaint"<<endl;
			 cin>>c;
			 switch(c)
			 {
			 	case 1:
			 		cout<<"for how many days you want to apply leave for? ";
			 		cin>>d;
			 		break;
			 	case 2:
			 		int date,h;
			 		cout<<"so u want to work extra hours u will be paid as per hour you work Rs.400 .How many hours u want to work and enter date";
			 		cin>>h>>d;
			 		break;
			 	case 3:
			    	cout<<"lets talk abt pay"<<endl;
		            cout<<"pay per day rs.500"<<endl;
					cout<<"enter total days u worked"<<endl;
					int u;
					cin>>u;
					u=u*500;
					cout<<"ur pay is"<<u<<endl;
					break;
				case 4:
					 cout<<"Kindly enter your complaint."<<endl;
		              cin>>com;
		              break;
					
			 }
			
			
		}
		else
		{
			cout<<"wrong pwd"<<endl;
		}}
	
};


int main()
{
	char a[100];
	int phn_no;
	int i;
	cout<<"******************************"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<" A & A FITNESS"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"*******************************"<<endl;
  cout<<"hey welcome to our gym.."<<endl;

  cout<<"how may we help u? But before helping u can we have ur details??"<<endl;
  cout<<"r u a joiner or working as atrainer or any employee?????";
  cout<<"if trainer enter '1' else enter '2'";
  cin>>i;
  if(i==1)
  {
  	trainer x;
  	x.det();
  }	  	
  else
  {
  	joiner c;
  	c.ent();
  }
  
}

