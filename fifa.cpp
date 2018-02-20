#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int once = 0;
void menu()
{
	
	if (once == 0)
	{
	
	cout<<"WELCOME TO WEREKANDA 2 EAT ?"<<endl;
	cout<<"please press any key";
    getch();
    system ("cls");
    once++;}
    system("cls");
    cout<<endl <<" 1. About "<<endl 
               <<" 2. Start "<<endl
               <<"3. Edit order"<<endl
               <<"4. Exit"<<endl;
}
void about () {
	char r;
	system ("cls");
	cout<<" This program can help u finding your food to eat depends on your mood "<<endl;
	cout<<"PRESS B FOR MENU ";
	r = getch();
	
	if (r == 'B'or 'b'){
		return;
	}
	else {
		about();
	}
}
void mood()
{
	
	int ans1,ans2,ans3,quantity;
	char naklagi;
	float price, total=0;
	cout<<"1.Happy"<<endl
	    <<"2.Sad"<<endl
	    <<"3.Normal"<<endl;
        cin>>ans1;

	
	if(ans1 == 1)
	{
	cout<<"Level of Happiness"<<endl
	    <<"1.Happy"<<endl
	    <<"2.Cherful"<<endl
	    <<"3.Excited"<<endl
	    <<"4.Jubilant"<<endl;
	    cin>>ans2;
	}
	else if( ans1 == 2)
	{
	cout<<"Level of Sadness"<<endl
	    <<"1.Bittersweet"<<endl
	    <<"2.Apathy"<<endl
	    <<"3.Unhappy"<<endl
	    <<"4.Miserable"<<endl;
	    cin>>ans2;	
	}
    else if ( ans1 == 3)
    {
    	cout<<"Normal"<<endl;
	}
	        
	else
	{ 
	 cout<<"eror pls choose 1 , 2 or 3 ";
	 mood();
	}
	
	if (ans2 == 1)
	{
		char naklagi;
		do{
		
		cout<<"ME NATE' ( WESTERN FOOD )"<<endl
<<"ADDRESS C-01-01 & C-01-03, Starparc Point, Jalan Taman Ibu Kota, Off Jalan Genting Klang, 53300 Danau Kota, Wilayah Persekutuan Kuala Lumpur"<<endl
<<"Hours:"<<endl 
<<"Tuesday	11AM-11PM"<<endl
<<"Wednesday	11AM-11PM"<<endl
<<"Thursday	11AM-11PM"<<endl
<<"Friday	3PM-11PM"<<endl
<<"Saturday	11AM-11PM"<<endl
<<"Sunday	11AM-11PM"<<endl
<<"Monday	11AM-11PM"<<endl
 
<<"PEAK HOURS "<<endl
<<"8PM-10PM "<<endl

<<"ME NATE' ( WESTERN FOOD )"<<endl
<<"Set A  ( RM 10 )"<<endl
<<"One chicken chop "<<endl
<<"One orange Juice "<<endl
<<"Fruit Salad "<<endl
<<"Set B ( RM 15 )"<<endl
<<"One lamb chop"<<endl
<<"One orange"<<endl
<<"Fruit Salad "<<endl
<<"Set C ( RM 20 )"<<endl
<<"Mix(Chicken+Lamb) chop"<<endl
<<"One orange Juice "<<endl
<<"Fruit Salad "<<endl;
cin>>ans2;

switch (ans2)
		{
			case 1: price=10.00; break;
			case 2: price=15.00; break;
			case 3: price=20.00; break;
			
			while (ans2!=1 and ans2!=2 and ans2!=3 and ans2!=4 and ans2!=5)
	{
		cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans2;
		
	}
		if (1>=ans2<=5)
		{
		
		cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>quantity;
		price=quantity*price;
		total=total+price;
		cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>naklagi;
		
	    }
		}}while(naklagi=='y' or naklagi=='Y' );
		
	}
	else if ( ans2 == 2)
	{ 
	cout<<"GOLD CHILLIS( ASIAN FOOD )"<<endl
<<"5, Jalan SS 15/8b, Ss 15, 47500 Subang Jaya, Selangor"<<endl
<<"Hours: "<<endl
<<"Tuesday	12PM-12AM"<<endl
<<"Wednesday	12PM-12AM"<<endl
<<"Thursday	12PM-12AM"<<endl
<<"Friday	12PM-12AM"<<endl
<<"Saturday	12PM-12AM"<<endl
<<"Sunday	Closed"<<endl
<<"Monday	12PM-12AM"<<endl

<<"PEAK HOURS"<<endl
<<"12PM-3PM"<<endl

<<"RATE : 4.1****"<<endl


<<"GOLD CHILLIS( ASIAN FOOD )"<<endl
<<"SET A  ( RM 14)"<<endl
<<"One rice"<<endl
<<"One butter chicken "<<endl
<<"One ice tea "<<endl
<<"SET B ( RM 17 )"<<endl
<<"One rice "<<endl
<<"One butter chicken boneless"<<endl
<<"One ice tea "<<endl
<<"SET C ( RM 19 )"<<endl
<<"One rice "<<endl
<<"One butter chicken boneless extra spicy "<<endl
<<"One ice tea "<<endl;
	}
	else if ( ans2 == 3)
	{
		cout<<"SUSHI KING (JAPPENESE FOOD)"<<endl
		<<"Address: Wangsa Maju, 53300 Kuala Lumpur, Federal Territory of Kuala Lumpur"<<endl
<<"Hours: "<<endl
<<"Tuesday	10AM-10PM"<<endl
<<"Wednesday	10AM-10PM"<<endl
<<"Thursday	10AM-10PM"<<endl
<<"Friday	10AM-10PM"<<endl
<<"Saturday	10AM-10PM"<<endl
<<"Sunday	10AM-10PM"<<endl
<<"Monday	10AM-10PM"<<endl

<<"RATE : 4****"<<endl
<<"PEAK HOURS : 12PM-3PM"<<endl

<<"SUSHI KING (JAPPENESE FOOD)"<<endl
<<"SET A ( RM 15 )"<<endl
<<"One chicken curry don"<<endl
<<"One ice green tea "<<endl
<<"SET B ( RM 20 )"<<endl
<<"Jappenese Fried Rice "<<endl
<<"One ice green tea "<<endl
<<"SET C "<<endl
<<"One beef curry udon"<<endl
<<"One ice green tea "<<endl
<<"Salmon sushi "<<endl;


	}
	else if ( ans2 == 4 )
	{
	 cout<<"DIP N DIP(DESERT)"<<endl
<<"5, Jalan Telawi 3, Bangsar Baru, 59100 Kuala Lumpur, Wilayah Persekutuan Kuala Lumpur"<<endl
<<"Hours: "<<endl
<<"Tuesday	11AM-1AM"<<endl
<<"Wednesday	11AM-1AM"<<endl
<<"Thursday	11AM-1AM"<<endl
<<"Friday	2:30PM-1AM"<<endl
<<"Saturday	11AM-1AM"<<endl
<<"Sunday	11AM-12AM"<<endl
<<"Monday	11AM-1AM"<<endl

<<"PEAK HOURS"<<endl
<<"10PM - 12PM "<<endl

<<"RATE : 4.2****"<<endl
<<"DIP N DIP(DESERT)"<<endl
<<"Set A ( RM20 )"<<endl
<<"One Chocolate waffle"<<endl
<<"One Hot chocolate"<<endl
<<"Set B ( RM22 )"<<endl
<<"One  Chocolate Creep"<<endl 
<<"One Hot chocolate "<<endl
<<"Set C ( RM 33 )"<<endl
<<"One Chocolate Creep N Waffle "<<endl
<<"One ICE chocolate"<<endl
<<"Ice cream vanilla  "<<endl;
	}
	else
	{
	 cout<<"please choose 1 until 4"<<endl;
	}
	        
}
void edit() {
	
}
int main() {
	char x;
	while (true) {
		menu();
		x = getch();
		
		if ( x == '1') {about();}
		else if ( x == '2'){ mood();}
	    else if ( x == '3'){ edit();}	
		else if ( x == '4'){ return 0;}	
		else { main();}
	}
	system("pause");
}

