#include<stdio.h>
#include<process.h>
#include<iostream>
#include<cstdlib>
#include<string>
#define SIZE 100

using namespace std;

void load();
void map();
void cmpnfacadd();
void cmpnfacdel();
void cmpnfacdisp();
void cmpnstuadd();
void cmpnstudel();
void cmpnstudisp();
void itfacadd();
void itfacdel();
void itfacdisp();
void itstuadd();
void itstudel();
void itstudisp();
void hangout();
void preload();
void aboutus();
struct c_tch 						//c_tch CMPNteacher's stack
{
	char c_name[100];
	char c_desg[100];				//c_desg CMPNteacher's designation
	struct c_tch *c_next;
}*c_top;

struct c_stu 						//c_stu CMPNstudent's stack
{
	char c_name[100];
	int c_roll;				//c_stu CMPNstudent's roll
	struct c_stu *cs_next;
}*cs_top;

struct i_tch 						//i_tch ITteacher's stack
{
	char i_name[100];
	char i_desg[100];				//i_desg ITteacher's designation
	struct i_tch *i_next;
}*i_top;

struct i_stu 						//i_stu ITstudent's stack
{
	char i_name[100];
	int i_roll;				//i_stu ITstudent's roll
	struct i_stu *is_next;
}*is_top;

void main()
{
load();
preload();	
int ch1,ch2,ch3,ch4,ch5,choice1,choice2,choice3,choice4;
while(1)
{
system("cls");	
cout<<"\n Welcome To Atharva College Of Engineering\n";	
cout<<"*******************************************\n";
cout<<"\n 1.Departments \n 2.Map \n 3.Hangouts \n 4.Connectivity \n 5.About Us \n 6.Exit \n ";
cout<<"\n Enter Choice \n";
cin>>ch1;
if(ch1==6)
break;
switch(ch1)
{
case 1:while(1)
	    {
		system("cls");
	    cout<<"\n Departments: \n";
	    cout<<"\n 1.CMPN \n 2.IT \n 3.EXTC \n 4.ETRX \n 5.ELEC \n 6.Exit \n";
	    cout<<"\n Enter Choice \n";
	    cin>>ch2;
	    if(ch2==6)
		break;

	    switch(ch2)
	    {
	     case 1:    while(1)
			{
			system("cls");	
            cout<<"\n CMPN DEPARTMENT \n";
			cout<<"\n 1.Faculty \n 2.Students \n 3.Exit \n";
			cout<<"\n Enter Choice \n";
			cin>>ch3;
			if(ch3==3)
			break;
			switch(ch3)
				{
					
			        case 1:system("cls");
					cout<<"\n FACULTY DATABASE \n";
			        cout<<"\n 1.Add entry \n 2.Delete entry \n 3.Display \n";
			        cin>>choice1;

		      switch(choice1)
		      { case 1: cmpnfacadd();
				break;
			case 2: cmpnfacdel();
				break;
			case 3: cmpnfacdisp();
				break;
			default: cout<<"\n Wrong choice \n";
			         system("pause");
		      }

				    break;
			case 2:
			  system("cls");
			  cout<<"\n STUDENT DATABASE \n";
			  int choice2;
		      cout<<"\n 1.Add entry \n 2.Delete Entry \n 3.Display \n ";
		      cin>>choice2;

			  switch(choice2)
		      { case 1:cmpnstuadd();
			       break;
			    case 2:cmpnstudel();
			       break;
			    case 3:cmpnstudisp();
			       break;

			    default: cout<<"\n Wrong choice \n";
				         system("pause");
		      }

				    break;
		       default: cout<<"\n Invalid \n";
			   system("pause");
				    break;


				 }
				 }
				 break;

		case 2:
		    while(1)
			{
		    system("cls");
            cout<<"\n IT DEPARTMENT \n";
			cout<<"\n 1.Faculty \n 2.Students \n 3.Exit \n";
			cout<<"\n Enter Choice \n";
			cin>>ch4;
			if(ch4==3)
			break;
			switch(ch4)
				{		
				   case 1:
				   system("cls");
				   cout<<"\n FACULTY DATABASE \n";
			       cout<<"\n 1.Add entry \n 2.Delete entry \n 3.Display \n";
		           cin>>choice3;

		      switch(choice3)
		      { case 1: itfacadd();
				break;
			case 2: itfacdel();
				break;
			case 3: itfacdisp();
				break;
			default: cout<<"\n Wrong choice \n";
			system("pause");
		      }

				    break;
			case 2:
			  system("cls"); 
			  cout<<"\n STUDENT DATABASE \n";
		      cout<<"\n 1.Add entry \n 2.Delete Entry \n 3.Display \n ";
		      cin>>choice4;

			  switch(choice4)
		      { case 1:itstuadd();
			       break;
			    case 2:itstudel();
			       break;
			    case 3:itstudisp();
			       break;

			    default: cout<<"\n Wrong choice \n";
				system("pause");
		      }

			 break;
		     default: cout<<"\n Invalid \n";
			 system("pause");
			 break;



				 }
			}
			break;
		    case 3:cout<<"\n To be developed by respective department. \n";
				   system("pause");
		           break;
			case 4:cout<<"\n To be developed by respective department. \n";
			       system("pause");
	               break;	    
			case 5:cout<<"\n To be developed by respective department. \n";
			       system("pause");
	               break;
		  default: cout<<"\n Invalid \n";
		           system("pause"); 
			  break;


	    }
	    } break;
case 2:map();
       break;

case 3:
        hangout();
		break;
case 5:
	    aboutus();
	    break;
case 4:while(1)
	    {
        system("cls");
	    cout<<"\n 1.Borivali Station(W) \n 2.Kandivali Station(W) \n 3.Malad Station(W) \n 4.Exit \n";
	    cout<<"\n Enter choice of Destination: \n";
	    cin>>ch5;
	    if(ch5==4)
	    break;
	    switch(ch5)
	    {
	    case 1:system("cls");
		   cout<<"\nBorivali Station(W) Bus Nos: \n 207 \n 720 \n 269 \n";
		  system("pause");
		   break;
	    case 2:system("cls");
		   cout<<"\nKandivali Station(W) Bus Nos: \n 207 \n 281 \n";
		    system("pause");
		   break;
	    case 3:system("cls");
		   cout<<"\nMalad Station (W) Bus Nos: \n 271 \n 272 \n 622 \n 243 \n";
		    system("pause");
		   break;
		case 4: break;
	    default: cout<<"\n Invalid \n";
		          system("pause");
		   break;

	    }
	    }
		break;

default: cout<<"\n Invalid \n";
        system("pause");
	    break;

}

}
}

void map()
{
	system("cls");
	int ch;
	int flag,i,j;
	int a[22]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
	cout<<"\n What do you want to search between the two? \n";
	cout<<"\n 1.Rooms \n 2.Labs \n";
	cout<<"\n Enter your choice: \n";
	cin>>ch;
	if(ch==2)
	{

		cout<<"\n Which lab ? \n";
		cin>>flag;
		for(i=0;i<SIZE;i++)
		{
		if(flag==a[i])
		{
		  if(flag==1||flag==2||flag==3||flag==4||flag==5)
		       {	cout<<"\n The lab is on the First floor \n";
				break;
		       }
		  else if(flag==6||flag==7||flag==8||flag==9||flag==10)
		       {	cout<<"\n The lab is on the Second floor \n";
				break;
		       }
		  else if(flag==12||flag==13||flag==14||flag==15||flag==16||flag==11)
			{	cout<<"\n The lab is on the Third floor \n";
				break;
			}
		  else if(flag==17||flag==18||flag==19||flag==20||flag==21)
			{	cout<<"\n The lab is on the Fourth floor \n";
				break;
			}

		}
		} system("pause");
		}
	else
	{
		cout<<"\n Which room? \n";
		cin>>flag;
		for(j=0;j<SIZE;j++)
		{
		if(flag==a[j])
		{
		  if(flag==1||flag==2||flag==3||flag==4||flag==5||flag==6)
		       {	cout<<"\n The room is on the First floor \n";
				break;
		       }
		  else if(flag==7||flag==8||flag==9||flag==10||flag==11)
		       {	cout<<"\n The room is on the Second floor \n";
				break;
		       }
		  else if(flag==12||flag==13||flag==14||flag==15||flag==16)
			{	cout<<"\n The room is on the Third floor \n";
				break;
			}
		  else if(flag==17||flag==18||flag==19||flag==20||flag==21)
			{	cout<<"\n The room is on Fourth floor \n";
				break;
			}

		}
		} system("pause");
		}

  }
void cmpnfacadd()
{
	    system("cls");
		char c_desg[100],c_name1[100];
		cout<<"\n Faculty Name: ";
		cin>>c_name1;
		cout<<"\n Designation of Faculty: ";
		cin>>c_desg;
		struct c_tch *newnode=new c_tch;
		strcpy(newnode->c_name,c_name1);
		strcpy(newnode->c_desg,c_desg);
		if(c_top==NULL)
		{
			newnode->c_next=NULL;
			c_top=newnode;
		}
		else
		{
			newnode->c_next=c_top;
			c_top=newnode;
		}
			cout<<"\n Insertion was successful \n";
			 system("pause");

}
void cmpnfacdel()
{
	system("cls");
	if(c_top==NULL)
		cout<<"\n Database is Empty ! \n";
	else
	{
		struct c_tch *c_temp = new c_tch;
		c_temp=c_top->c_next;
		cout<<"\n Deleted Name: ";
		cout<<c_top->c_name;
		cout<<"\n Designation of Faculty: ";
		cout<<c_top->c_desg;
		free(c_top);
		c_top=c_temp;
	}
	 system("pause");
}
void cmpnfacdisp()
{ system("cls");
  if(c_top==NULL)
  cout<<"\n Database Empty ! \n";
  else
  {
    struct c_tch *c_temp=new c_tch;
    c_temp=c_top;
    while(c_temp->c_next!=NULL)
    { cout<<"\n Faculty Name - ";
      puts(c_temp->c_name);
      cout<<" Faculty Designation -  ";
      puts(c_temp->c_desg);
      c_temp=c_temp->c_next;
    }
    cout<<"\n Faculty Name - ";
    puts(c_temp->c_name);
    cout<<" Faculty Designation - ";
    puts(c_temp->c_desg);
  }
   system("pause");
}
void cmpnstuadd()
{
	    system("cls");
		int c_roll;
		char c_name2[100];
		cout<<"\n Student Name: ";
		cin>>c_name2;
		cout<<"\n Student Roll No: ";
		cin>>c_roll;
		struct c_stu *newnode=new c_stu;
		strcpy(newnode->c_name,c_name2);
		newnode->c_roll=c_roll;
		if(cs_top==NULL)
		{
			newnode->cs_next=NULL;
			cs_top=newnode;
		}
		else
		{
			newnode->cs_next=cs_top;
			cs_top=newnode;
		}
			cout<<"\n Insertion was successful \n";
			 system("pause");

}
void cmpnstudel()
{
	system("cls");
	if(cs_top==NULL)
		cout<<"\n Database is Empty ! \n";
	else
	{
		struct c_stu *c_temp = new c_stu;
		c_temp=cs_top->cs_next;
		cout<<"\n Deleted Name: ";
		cout<<cs_top->c_name;
		cout<<"\n Deleted Roll No: ";
		cout<<cs_top->c_roll;
		free(cs_top);
		cs_top=c_temp;
	}
	 system("pause");
}
void cmpnstudisp()
{ 
  system("cls");	
  if(cs_top==NULL)
  {
  cout<<"\n Database Empty ! \n";
  }
  else
  {
    struct c_stu *c_temp=new c_stu;
    c_temp=cs_top;
    while(c_temp->cs_next!=NULL)
    { cout<<"\n Student Name: ";
      puts(c_temp->c_name);
	  cout<<" Student Roll No: ";
	  cout<<c_temp->c_roll;
	  cout<<endl;
      c_temp=c_temp->cs_next;
    }
    cout<<"\n Student Name: ";
    puts(c_temp->c_name);
    cout<<" Student Roll No: ";
    cout<<c_temp->c_roll<<endl;
  }
   system("pause");
}

void itfacadd()
{
	    system("cls");
		char i_desg[100],i_name1[100];
		cout<<"\n Faculty Name: ";
		cin>>i_name1;
		cout<<"\n Designation of Faculty: ";
		cin>>i_desg;
		struct i_tch *newnode=new i_tch;
		strcpy(newnode->i_name,i_name1);
		strcpy(newnode->i_desg,i_desg);
		if(i_top==NULL)
		{
			newnode->i_next=NULL;
			i_top=newnode;
		}
		else
		{
			newnode->i_next=i_top;
			i_top=newnode;
		}
			cout<<"\n Insertion was successful \n";
			 system("pause");

}
void itfacdel()
{
	system("cls"); 
	if(i_top==NULL)
		cout<<"\n Database is Empty ! \n";
	else
	{
		struct i_tch *i_temp = new i_tch;
		i_temp=i_top->i_next;
		cout<<"\n Deleted Name: ";
		cout<<i_top->i_name;
		cout<<"\n Designation of Faculty: ";
		cout<<i_top->i_desg;
		free(i_top);
		i_top=i_temp;
	}
	 system("pause");
}
void itfacdisp()
{ 
  system("cls");
  if(i_top==NULL)
  cout<<"\n Database Empty !\n";
  else
  {
    struct i_tch *i_temp=new i_tch;
    i_temp=i_top;
    while(i_temp->i_next!=NULL)
    { cout<<"\n Faculty Name - ";
      puts(i_temp->i_name);
      cout<<" Faculty Designation - ";
      puts(i_temp->i_desg);
      i_temp=i_temp->i_next;
    }
    cout<<"\n Faculty Name - ";
    puts(i_temp->i_name);
    cout<<" Faculty Designation - ";
    puts(i_temp->i_desg);
  }
   system("pause");
}
void itstuadd()
{
	    system("cls"); 
		int i_roll;
		char i_name2[100];
		cout<<"\n Student Name: ";
		cin>>i_name2;
		cout<<"\n Student Roll No: ";
		cin>>i_roll;
		struct i_stu *newnode=new i_stu;
		strcpy(newnode->i_name,i_name2);
		newnode->i_roll=i_roll;
		if(is_top==NULL)
		{
			newnode->is_next=NULL;
			is_top=newnode;
		}
		else
		{
			newnode->is_next=is_top;
			is_top=newnode;
		}
			cout<<"\n Insertion was successful \n";
			 system("pause");

}
void itstudel()
{
	system("cls");
	if(is_top==NULL)
		cout<<"\n Database is Empty ! \n";
	else
	{
		struct i_stu *i_temp = new i_stu;
		i_temp=is_top->is_next;
		cout<<"\n Deleted Name: ";
		cout<<is_top->i_name;
		cout<<"\n Deleted Roll No: ";
		cout<<is_top->i_roll;
		free(is_top);
		is_top=i_temp;
	}
	 system("pause");
}
void itstudisp()
{ 
  system("cls");
  if(is_top==NULL)
  {
  cout<<"\n Database Empty ! \n";
  }
  else
  {
    struct i_stu *i_temp=new i_stu;
    i_temp=is_top;
    while(i_temp->is_next!=NULL)
    { cout<<"\n Student Name: ";
      puts(i_temp->i_name);
	  cout<<" Student Roll No: ";
	  cout<<i_temp->i_roll;
	  cout<<endl;
      i_temp=i_temp->is_next;
    }
    cout<<"\n Student Name: ";
    puts(i_temp->i_name);
    cout<<" Student Roll No: ";
    cout<<i_temp->i_roll;
	cout<<endl;
  }
   system("pause");
}
void hangout()
{
	    system("cls");
	    cout<<"\n 1.Phase 3 Lawn \n 2.Poolside \n 3.Timepass(Food) \n 4.Impetus(Gaming Cyber) \n 5.Bay View(Snooker) \n 6.Infinity/Inorbit Mall \n 7.Beaches near Madh/Marve \n";
	     system("pause");
}
void preload()
{
	struct c_tch *temp1=new c_tch;
	strcpy(temp1->c_name,"Amruta_Mhatre");
	strcpy(temp1->c_desg,"Asst._Professor");
	temp1->c_next=NULL;
	struct c_tch *temp2=new c_tch;
	strcpy(temp2->c_name,"Apeksha_Waghmare");
	strcpy(temp2->c_desg,"Asst._Professor");
	temp2->c_next=temp1;
	struct c_tch *temp3=new c_tch;
	strcpy(temp3->c_name,"Mahendra_Patil");
	strcpy(temp3->c_desg,"(HOD)_Asst._Professor");
	temp3->c_next=temp2;
    c_top=temp3;
	struct i_tch *temp4=new i_tch;
	strcpy(temp4->i_name,"Sachin_Prakash_Gavhane");
	strcpy(temp4->i_desg,"Asst._Professor");
	temp4->i_next=NULL;
	struct i_tch *temp5=new i_tch;
	strcpy(temp5->i_name,"Sumita_Chandak");
	strcpy(temp5->i_desg,"Asst._Professor");
	temp5->i_next=temp4;
	struct i_tch *temp6=new i_tch;
	strcpy(temp6->i_name,"Nileema_Pathak");
	strcpy(temp6->i_desg,"(HOD)_Asst._Professor");
	temp6->i_next=temp5;
    i_top=temp6;
	struct c_stu *temp7=new c_stu;
	strcpy(temp7->c_name,"Meet_Shrimali");
	temp7->c_roll=3;
	temp7->cs_next=NULL;
	struct c_stu *temp8=new c_stu;
	strcpy(temp8->c_name,"Lakshmi_Bhagat");
	temp8->c_roll=2;
	temp8->cs_next=temp7;
	struct c_stu *temp9=new c_stu;
	strcpy(temp9->c_name,"Shivangi_Sharma");
	temp9->c_roll=1;
	temp9->cs_next=temp8;
    cs_top=temp9;
	struct i_stu *temp10=new i_stu;
	strcpy(temp10->i_name,"Amrit_Pande");
	temp10->i_roll=3;
	temp10->is_next=NULL;
	struct i_stu *temp11=new i_stu;
	strcpy(temp11->i_name,"Palak_Nandi");
	temp11->i_roll=2;
	temp11->is_next=temp10;
	struct i_stu *temp12=new i_stu;
	strcpy(temp12->i_name,"Kusum_Seth");
	temp12->i_roll=1;
	temp12->is_next=temp11;
    is_top=temp12;
}
void aboutus()
{
	system("cls");
	cout<<"Created by Vihaan Sharma"<<endl;
	system("pause");
}
void load()
{
	system("color 0a");
 cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++); //You can also use sleep function instead of for loop
 }
 system("cls");
} 
