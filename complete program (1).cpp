#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count,menu,marks,condition4[100]={},condition[100]={},condition2[100]={},condition3[100]={},condition5[100]={},
p[100]={},ch[100]={},itc[100]={},plus,gk[100]={},m[100];int serial;
	string n[100],c[100],r[100],roll;char op,mcqs;
	
	do{
		cout<<"Press 1 New user"<<endl;
		cout<<"Press 2 for Quiz "<<endl;
		cout<<"press 3 to View students list"<<endl;
		cout<<"Press 4 to View result of student"<<endl;
		cout<<"press 5 to Exit "<<endl;
		cin>>menu;
		cout<<endl<<endl;
		switch(menu)
	{case 1:
		cout<<"                                          Student Information              "<<endl<<endl;
			cout<<"Enter your name "<<endl;
			cout<<"                         //please enter your name without space "<<endl;
			cin>>n[count];
			cout<<"Enter your course name"<<endl;
			cin>>c[count];
			cout<<"Enter your roll no "<<endl;
			cin>>r[count];
			count++;
			cout<<"Congrates now you are its user"<<endl;
			cout<<endl;
			break;
		case 2:
			cout<<"                                              Quiz                   "<<endl<<endl;
			cout<<"Enter your roll no "<<endl;
			cin>>roll;
			for(int i=0;i<=100;i++)
			{
			if(roll==r[i])
			{cout<<"Name : "<<n[i]<<endl;
			cout<<"Course name : "<<c[i]<<endl;
			cout<<"Roll no : "<<r[i]<<endl;
			cout<<"Choose subject for quiz"<<endl;
			cout<<"(A)Physics\t (B)Chemistry  \t(C)Math  \t(D)G.K   \t(E)ITC"<<endl;
			cin>>op;
			if(op =='a'||op =='A'||op=='1')
		
			{	marks=0;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"\t\t\t\t\t\t\t    QUIZ"<<endl;
			cout<<"\t\t\t\t\t\t\t   Physics"<<endl;
			cout<<"\t\t\t\t\t\t\t Total Marks = 5 "<<endl;
			cout<<"***********************************************************************************************************************"<<endl;    
			cout<<"Question no 1: what is second law of newton?"<<endl;
			cout<<"(a)F=ma\t(b)F=mg\t(c)F=m/a\t(d)F=-ma"<<endl;
			again1:;
			cin>>mcqs;
			if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
	        if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again1;
			}
			cout<<"Question no 2: which of the following is the formula of pressure?"<<endl;
			cout<<"(a)P=FA\t(b)P=F/A\t(c)F=P/A\t(d)P=A/F"<<endl;
			again2:;
			cin>>mcqs;
			 if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again2;
			}
			cout<<"Question no 3: what is the unit of torque?"<<endl;
			cout<<"(a)Nm\t(b)N/m\t(c)N*m\t(d)Both a and c"<<endl;
			again3:;
			cin>>mcqs;
			 if(mcqs=='d'||mcqs=='D'||mcqs=='4')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again3;
			}
			cout<<"Question no 4: what is the unit of Force?"<<endl;
			cout<<"(a)Ne\t(b)F\t(c)Nw\t(d)N"<<endl;
			again4:;
			cin>>mcqs;
			if(mcqs=='d'||mcqs=='D'||mcqs=='4')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again4;
			}
			cout<<"Question no 5: how many laws of newton?"<<endl;
			cout<<"(a)1\t(b)2\t(c)3\t(d)4"<<endl;
			again5:;
			cin>>mcqs;
			 if(mcqs=='c'||mcqs=='C'||mcqs=='3')
			{marks=marks+1;}
			 if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again5;
			}
			cout<<endl;
			cout<<"************************"<<endl;
			cout<<" Your marks are = "<<marks<<"    *"<<endl;
			cout<<"************************"<<endl;
			p[i]=marks;
			condition[i]++;
			
			}
			 else if(op=='b'||op=='b'||op=='2')
			{
			marks=0;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"\t\t\t\t\t\t\t    QUIZ"<<endl;
			cout<<"\t\t\t\t\t\t\t  Chemistry"<<endl;
			cout<<"\t\t\t\t\t\t\tTotal Marks = 5 "<<endl;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"Question no 1: what is the atomic no of sodium?"<<endl;
			cout<<"(a)21\t(b)11\t(c)22\t(d)42"<<endl;
			again6:;
			cin>>mcqs;
			 if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again6;
			}
			cout<<"Question no 2:what is symbol of sodium ?"<<endl;
			cout<<"(a)Na\t(b)N\t(c)s\t(d)So"<<endl;
			again7:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again7;
			}
			cout<<"Question no 3:how many groups are in periodic table ?"<<endl;
			cout<<"(a)16\t(b)18\t(c)7\t(d)12"<<endl;
			again8:;
			cin>>mcqs;
			 if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again8;
			}
			cout<<"Question no 4:how many periods are in periodic table?"<<endl;
			cout<<"(a)7\t(b)12\t(c)18\t(d)9"<<endl;
			again9:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again9;
			}
			cout<<"Question no 5:what is molecular mass of water?"<<endl;
			cout<<"(a)18\t(b)118\t(c)8\t(d)12"<<endl;
			again10:;
			cin>>mcqs;
		    if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again10;
			}
			cout<<endl;
			cout<<"************************"<<endl;
			cout<<" Your marks are = "<<marks<<"    *"<<endl;
			cout<<"************************"<<endl;
			ch[i]=marks;
			condition2[i]++;
			}
				else if(op=='c'||op=='C'||op=='3')
			{
			marks=0;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"\t\t\t\t\t\t\t     QUIZ"<<endl;
			cout<<"\t\t\t\t\t\t\t     Math"<<endl;
			cout<<"\t\t\t\t\t\t\t Total Marks = 5 "<<endl;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"Question no 1: 8+20/5-0/3=?"<<endl;
			cout<<"(a)12\t(b)14\t(c)6.6\t(d)7"<<endl;
			again11:;
			cin>>mcqs;
			if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again11;
			}	
			cout<<"Question no 2:3*3*3=?"<<endl;
			cout<<"(a)3\t(b)6\t(c)27\t(d)30"<<endl;
			again12:;
			cin>>mcqs;
			 if(mcqs=='c'||mcqs=='C'||mcqs=='3')
			{marks=marks+1;}if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again12;
			}
			cout<<"Question no 3:6-3*2=?"<<endl;
			cout<<"(a)6\t(b)0\t(c)3\t(d)1"<<endl;
			again13:;
			cin>>mcqs;
			 if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again13;
			}
			cout<<"Question no 4: which one is prime no?"<<endl;
			cout<<"(a)1\t(b)2\t(c)9\t(d)15"<<endl;
			again14:;
			cin>>mcqs;
			 if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again14;
			}
			cout<<"Question no 5:which one is even no ?"<<endl;
			cout<<"(a)2\t(b)3\t(c)5\t(d)7"<<endl;
			again15:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again15;
			}
			cout<<endl;
			cout<<"************************"<<endl;
			cout<<" Your marks are = "<<marks<<"    *"<<endl;
			cout<<"************************"<<endl;
			m[i]=marks;
			condition3[i]++;
			}
				else if(op=='d'||op=='D'||op=='4')
			{
			marks=0;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"\t\t\t\t\t\t\t        QUIZ"<<endl;
			cout<<"\t\t\t\t\t\t\t General Knowledge"<<endl;
			cout<<"\t\t\t\t\t\t\t  Total Marks = 5 "<<endl;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"Question no 1:which is the highest mountain in world ?"<<endl;
			cout<<"(a)k-2\t(b)Mount Evrest\t(c)nanga parbat\t(d)none"<<endl;
			again16:;
			cin>>mcqs;
			if(mcqs=='b'||mcqs=='B'||mcqs=='2')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again16;
			}
			cout<<"Question no 2:which is the largest desert?"<<endl;
			cout<<"(a)sahara\t(b)thar\t(c)gobi\t(d)atacama"<<endl;
			again17:;
			cin>>mcqs;
			if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again17;
			}
			cout<<"Question no 3:which is the natinal animal of pakistan?"<<endl;
			cout<<"(a)markhor\t(b)mor\t(c)peakcock\t(d)chakor"<<endl;
			again18:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again18;
			}
			cout<<"Question no 4:where is the textile hub of pakistan? "<<endl;
			cout<<"(a)Faislabad\t(b)Islamabad\t(c)Sialkot\t(d)Lahore"<<endl;
			again19:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again19;
			}
			cout<<"Question no 5:who is national poet of pakistan?"<<endl;
			cout<<"(a)allama iqbal\t(b)quaid azam\t(c)mirza galib\t(d)mer dard"<<endl;
			again20:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again20;
			}
			cout<<endl;
			cout<<"************************"<<endl;
			cout<<" Your marks are = "<<marks<<"    *"<<endl;
			cout<<"************************"<<endl;
			gk[i]=marks;
			condition4[i]++;
			}
				else if(op=='e'||op=='E'||op=='5')
			{
			marks=0;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"\t\t\t\t\t\t\t   QUIZ"<<endl;
			cout<<"\t\t\t\t\t\t\t   ITC"<<endl;
			cout<<"\t\t\t\t\t\t\tTotal Marks = 5 "<<endl;
			cout<<"************************************************************************************************************************"<<endl;    
			cout<<"Question no 1:how many types loops are in c++?"<<endl;
			cout<<"(a)1\t(b)2\t(c)3\t(d)4"<<endl;
			again21:;
			cin>>mcqs;
			if(mcqs=='c'||mcqs=='C'||mcqs=='3')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again21;
			}
			cout<<"Question no 2:AND symbol?"<<endl;
			cout<<"(a)$\t(b)%\t(c)&\t(d)|"<<endl;
			again22:;
			cin>>mcqs;
			 if(mcqs=='c'||mcqs=='C'||mcqs=='3')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again22;
			}
			cout<<"Question no 3:NOT symbol?"<<endl;
			cout<<"(a)!\t(b)#\t(c)&\t(d)^"<<endl;
			again23:;
			cin>>mcqs;
			if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again23;
			}
			cout<<"Question no 4:== stand for"<<endl;
			cout<<"(a)compare\t(b)assign\t(c)condition\t(d)both a and c"<<endl;
			again24:;
			cin>>mcqs;
			 if(mcqs=='d'||mcqs=='D'||mcqs=='4')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again24;
			}
			cout<<"Question no 5:std stands for?"<<endl;
			cout<<"(a)standard\t(b)stop\t(c)stabled\t(d)none"<<endl;
			again25:;
			cin>>mcqs;
			 if(mcqs=='a'||mcqs=='A'||mcqs=='1')
			{marks=marks+1;}
			if(mcqs!='a'&&mcqs!='A'&&mcqs!='1'&&mcqs!='b'&&mcqs!='B'&&mcqs!='2'&&mcqs!='c'&&mcqs!='C'&&mcqs!='3'&&mcqs!='d'&&mcqs!='D'&&mcqs!='4')
			{cout<<"enter a valid option"<<endl;
			goto again25;
			}
			cout<<endl;
			cout<<"************************"<<endl;
			cout<<" Your marks are = "<<marks<<"    *"<<endl;
			cout<<"************************"<<endl;
			itc[i]=marks;
			condition5[i]++;
			}
		   }
	}
		    if(op!='a' && op!='b' && op!='c' && op!='d' && op!='1' && op!='2' && op!='3' && op!='e' && op!='4')
		   {cout<<"Enter a valid option"<<endl;
		   }
		 
		 cout<<endl;
		 break;
		case 3:
			cout<<"                                          List Of Students     "<<endl<<endl;
		    plus=0;
			serial=1;
			for(int s=1;s<=count;s++)
			{
			cout<<"  Serial no "<<serial<<"\t\t\t\t";
			cout<<"Name:"<<n[plus]<<"\t\t\t\t\t Roll no: "<<r[plus]<<endl;
			serial++;
			plus++;
			}
			cout<<endl;
			break;
		case 4:
			cout<<"                                           Result Of Students     "<<endl<<endl;
			roll='0';
		    cout<<"Enter your roll no"<<endl;
		    cin>>roll;	
			for(int j=0;j<=count;j++)
			{
			
				   	if(roll==r[j])
		   {
		  	    if(condition[j]>>0)
		  	{  cout<<"            Physics              "<<p[j]<<endl;
			}
		
			    if(condition2[j]>>0)
			{  cout<<"            Chemistry            "<<ch[j]<<endl;
			}
			
				if(condition3[j]>>0)
			{  cout<<"             Math                "<<m[j]<<endl;
			}
			
				if(condition4[j]>>0)
			{  cout<<"             G.K                 "<<gk[j]<<endl;
			}
			
		        if(condition5[j]>>0)
		    {cout<<"               ITC                 "<<itc[j]<<endl;
			}
			 if(condition[j]=='0'&& condition[j]=='0'&& condition[j]=='0'&& condition[j]=='0'&& condition[j]=='0')
			{cout<<"No Record Found"<<endl;
			}
		    }}
		    
		cout<<endl;
			break;
	
	case 5:
		cout<<"Thanks for using this program"<<endl;
		break;
    
	default:
	cout<<"Enter a valid number"<<endl<<endl;
	}}
	while(menu!=5);
	return 0;
}