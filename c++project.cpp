 #include<iostream>
 #include<fstream>

using namespace std;

 class booking
 {
 	protected:
 	int src,dest;
 	long int date,number,pnr;
 	float price;
 	char a,d;  //a=arrival  d=departure
 	public:
 		void get();
 		void dis();
 };
 
 void booking::get()
 {
 	cout<<"enter date of journey (DD/MM/YY)"<<endl;
 	cout<<"please enter a valid date"<<endl;
 	cin>>date;
 	cout<<"1.Delhi()1/t 2.Kolkata(2)/t 3.Bangalore(3)/t 4.Amritsar(4)"<<endl;
 	cout<<"enter source"<<endl;
 	cin>>src;
 	cout<<"enter destination"<<endl;
    cin>>dest;
	 if((src==1 && dest==2) || (src==2 && dest==1))
	  {
            cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
        } 
        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
        cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
    }
     else if((src==1 && dest==4) || (src==4 && dest==1))
     {
        cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
    }
    else if((src==2 && dest==3) || (src==3 && dest==2))
    {
        cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
    }
    else if((src==2 && dest==4) || (src==4 && dest==2))
     {
        cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
    }
    else if((src==3 && dest==4) || (src==4 && dest==3))
      {
        cout << "\t \t Flights Found" << endl << endl;
            cout << "flights:\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Air India(1)\t 18:00\t 23:05\t Rs.5000"<<endl;
            cout << "2.indigo(2)\t 11:00\t 15:05\t Rs.5300"<<endl;
    }
    else if(src==dest)
    {
    	cout<<"\t\t source and destination cant be same"<<endl;
	}
	else
	{
		cout<<"\t\t wrong input entered"<<endl;
	}
 }
 
 int select_flight();
 int choice;
{
	cout<<"enter your choice";
	cin>>choice;
	select(choice)
	{
		case_1:
			cout<<"flight selected"<<endl;
			cout<<"air India"<<endl;
			cout<<"departure time:18:00"<<endl;
			cout<<"arrival time:23:05"<<endl;
			break;
		case_2:
			cout<<"flight selected"<<endl;
			cout<<"indigo"<<endl;
			cout<<"departure time:11:00"<<endl;
			cout<<"arrival time:15:05"<<endl;
			break;
			default:
				cout<<"wrong input entered"<<endl;
				cout<<"please try again"<<endl;
	       }
        }
    } 
 class passenger:public booking
 {
 	public:
 		char f_name[20],l_name[20],email[50];
 		int age,gender;
 		long int contact_no;
 		void get1();
 		void dis1();
 };
 
 void passenger::get1()
 {
 	get()
 	cout<<"enter passenger details"<<endl;
 	cout<<"first name"<<endl;
 	cin>>f_name;
 	cout<<"last name"<<endl;
 	cin>>l_name;
 	 cout <<"Gender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
    } 	
 	cout<<"age"<<endl;
 	cin>>age;
 	cout<<"email id"<<endl;
 	cin>>email;
 	cout<<"contact number";
 	cin>>contact_no;
 }
 
 void passenger:dis1()
 {
 	dis();
 	cout<<"NAME:"<<f_name<<endl;
 	cout<<l_name<<endl;
 	cout<<"GENDER:"<<gender<<endl;
 	cout<<"AGE:"<<endl
    cout<<"EMAIL ID:"<<email<<endl;
    cout<<"CONTACT NO:"<<contact_no<<endl;
 }
 
 void booking::dis()
 {
 	cout<<"date of journey:"<<date<<endl;
 	cout<<"source:"<<src<<endl;
 	cout<<"destination:"<<dest<<endlss;
 	cout<<"no of travellers:"<<number<<endl;
 	cout<<"departure time"<<d<<endl;
 	cout<<"arrival time"<<a<<endl;
 }
 
 
class payment//class for payment
{
protected:
    longint choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
         case 3:
            cout << "Banks Available: \1.State Bank Of India(1) \2.Andhra Bank(2) \3.Punjab Bank(3) \4.KV Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }


void createfile(passenger p)
{  
   ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{  
   passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display details
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}




int main()//main function
{

    class d_booking d1;//object for class d_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n;//integer variables
    char input;//character variables
    do//do while loop
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Check Ticket(3) \n\t\t\t\4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)//witch case
      {
          case 1://condition
          system("CLS");
              cout << "\n\n\1.Domestic Fights(1) \n\" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)//inner switch case
              {
                   case 1://for booking domestic ticket
                        p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              system("CLS");
              cout << "\1.Domestic Fights(1)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3://for displaying booked ticket details
          system("CLS");
                  cout << "\1.Domestic Fights(1)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}//function call to display domestic ticket details
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket details
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

