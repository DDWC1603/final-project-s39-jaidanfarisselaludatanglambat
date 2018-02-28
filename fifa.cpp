#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int once = 0;
int counter[3] = {0, 0, 0};

void menu() {
	if (once == 0) {
		cout<<"\t\t\t\t\t\t WELCOME TO WEREKANDA 2 EAT ?"<<endl;
		cout<<"\t\t\t\t\t\t please press any key";
	    getch();
	    system ("cls");
	    once++;
		}
	    system("cls");
	    cout<<endl <<"\t\t\t\t\t\t 1. About "<<endl 
	               <<"\t\t\t\t\t\t 2. Start "<<endl
	               
	               <<"\t\t\t\t\t\t 3. Exit"<<endl;
}

void about () {
	char r;
	
	system ("cls");
	cout<<"\t\t\t\t\t\t This program can help u finding your food to eat depends on your mood "<<endl;
	cout<<"\t\t\t\t\t\t PRESS B FOR MENU ";
	r = getch();
	
	if (r == 'B'or 'b') {
		return;
	}
	else {
		about();
	}
}

void mood() {
	int ans1,ans2,ans3,quantity;
	char naklagi;
	float price, total=0;
	system("cls");
	cout<<"\t\t\t\t\t\t 1.Happy"<<endl
	    <<"\t\t\t\t\t\t 2.Sad"<<endl
	    <<"\t\t\t\t\t\t 3.Normal"<<endl
	    <<"\t\t\t\t\t\t ";
        cin>>ans1;
	
	if(ans1 == 1) {
		system("cls");
		cout<<"\t\t\t\t\t\t Level of Happiness"<<endl
		    <<"\t\t\t\t\t\t 1.Happy"<<endl
		    <<"\t\t\t\t\t\t 2.Cherful"<<endl
		    <<"\t\t\t\t\t\t 3.Excited"<<endl
		    <<"\t\t\t\t\t\t 4.Jubilant"<<endl
		    <<"\t\t\t\t\t\t ";
		    cin>>ans2;
	}
	
	else if( ans1 == 2) {
		system("cls");
		cout<<"\t\t\t\t\t\t Level of Sadness"<<endl
		    <<"\t\t\t\t\t\t 1.Bittersweet"<<endl
		    <<"\t\t\t\t\t\t 2.Apathy"<<endl
		    <<"\t\t\t\t\t\t 3.Unhappy"<<endl
		    <<"\t\t\t\t\t\t 4.Miserable"<<endl
		    <<"\t\t\t\t\t\t ";
		    cin>>ans2;	
	}
	
    else if ( ans1 == 3) {
    	system("cls");
    	cout<<"\t\t\t\t\t\t Normal"<<endl;
	}
	        
	else { 
		cout<<"\t\t\t\t\t\t eror pls choose 1 , 2 or 3 ";
		mood();
	}
	
	if (ans2 == 1) {
		char naklagi;
		
		
		cout<<"\t\t\t\t\t ME NATE' ( WESTERN FOOD )"<<endl
		<<"ADDRESS C-01-01 & C-01-03, Starparc Point, Jalan Taman Ibu Kota, Off Jalan Genting Klang, 53300 Danau Kota, Wilayah Persekutuan Kuala Lumpur"<<endl
		<<"\t\t\t\t\t Hours:"<<endl 
		<<"\t\t\t\t\t Tuesday	11AM-11PM"<<endl
		<<"\t\t\t\t\t Wednesday	11AM-11PM"<<endl
		<<"\t\t\t\t\t Thursday	11AM-11PM"<<endl
		<<"\t\t\t\t\t Friday	3PM-11PM"<<endl
		<<"\t\t\t\t\t Saturday	11AM-11PM"<<endl
		<<"\t\t\t\t\t Sunday	11AM-11PM"<<endl
		<<"\t\t\t\t\t Monday	11AM-11PM"<<endl
		 
		<<"\t\t\t\t\t PEAK HOURS "<<endl
		<<"\t\t\t\t\t 8PM-10PM "<<endl;

		loop1:
			cout<<"\t\t\t\t\t ME NATE' ( WESTERN FOOD )"<<endl
			<<"\t\t\t\t\t 1. Set A  ( RM 10 )"<<endl
			<<"\t\t\t\t\t One chicken chop "<<endl
			<<"\t\t\t\t\t One orange Juice "<<endl
			<<"\t\t\t\t\t Fruit Salad "<<endl
			<<"\t\t\t\t\t 2. Set B ( RM 15 )"<<endl
			<<"\t\t\t\t\t One lamb chop"<<endl
			<<"\t\t\t\t\t One orange"<<endl
			<<"\t\t\t\t\t Fruit Salad "<<endl
			<<"\t\t\t\t\t 3. Set C ( RM 20 )"<<endl
			<<"\t\t\t\t\t Mix(Chicken+Lamb) chop"<<endl
			<<"\t\t\t\t\t One orange Juice "<<endl
			<<"\t\t\t\t\t Fruit Salad "<<endl
			<<"\t\t\t\t\t\t ";
			cin>>ans3;

			switch (ans3) {
				case 1: price=10.00; break;
				case 2: price=15.00; break;
				case 3: price=20.00; break;
			}
			
			while (ans3!=1 and ans3!=2 and ans3!=3) {
				cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>ans3;
			}
			
			if (1>=ans3<=3) {
				cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>quantity;
				price=quantity*price;
				total=total+price;
				cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO"<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>naklagi;
				tolower(naklagi);
				
				if (naklagi == 'y') {
					goto loop1;
				}
				
				else if (naklagi == 'n') {
					cout << "\t\t\t\t\t\t \nTotal: RM " << total;
					getch();
				}			
		    }
	}
	
	else if ( ans2 == 2) { 
	char naklagi;
		cout<<"\t\t\t\t\t\t GOLD CHILLIS( ASIAN FOOD )"<<endl
		<<"\t\t\t\t\t\t 5, Jalan SS 15/8b, Ss 15, 47500 Subang Jaya, Selangor"<<endl
		<<"\t\t\t\t\t\t Hours: "<<endl
		<<"\t\t\t\t\t\t Tuesday	    12PM-12AM"<<endl
		<<"\t\t\t\t\t\t Wednesday	12PM-12AM"<<endl
		<<"\t\t\t\t\t\t Thursday	12PM-12AM"<<endl
		<<"\t\t\t\t\t\t Friday	    12PM-12AM"<<endl
		<<"\t\t\t\t\t\t Saturday	12PM-12AM"<<endl
		<<"\t\t\t\t\t\t Sunday	    Closed"<<endl
		<<"\t\t\t\t\t\t Monday	    12PM-12AM"<<endl
		
		<<"\t\t\t\t\t\t PEAK HOURS"<<endl
		<<"\t\t\t\t\t\t 12PM-3PM"<<endl
		
		<<"\t\t\t\t\t\t RATE : 4.1****"<<endl;
		
		loop2:
	    cout<<"\t\t\t\t\t\t GOLD CHILLIS( ASIAN FOOD )"<<endl
		<<"\t\t\t\t\t\t 1.SET A  ( RM 14)"<<endl
		<<"\t\t\t\t\t\t One rice"<<endl
		<<"\t\t\t\t\t\t One butter chicken "<<endl
		<<"\t\t\t\t\t\t One ice tea "<<endl
		<<"\t\t\t\t\t\t 2.SET B ( RM 17 )"<<endl
		<<"\t\t\t\t\t\t One rice "<<endl
		<<"\t\t\t\t\t\t One butter chicken boneless"<<endl
		<<"\t\t\t\t\t\t One ice tea "<<endl
		<<"\t\t\t\t\t\t 3.SET C ( RM 19 )"<<endl
		<<"\t\t\t\t\t\t One rice "<<endl
		<<"\t\t\t\t\t\t One butter chicken boneless extra spicy "<<endl
		<<"\t\t\t\t\t\t One ice tea "<<endl
		<<"\t\t\t\t\t\t Please choose what do you want to eat "<<endl
		<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
		switch (ans3) {
				case 1: price=14.00; break;
				case 2: price=17.00; break;
				case 3: price=19.00; break;
			}
			
			while (ans3!=1 and ans3!=2 and ans3!=3) {
				cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cout<<"\t\t\t\t\t\t ";
				cin>>ans3;
			}
			
			if (1>=ans3<=3) {
				cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>quantity;
				price=quantity*price;
				total=total+price;
				cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO"<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>naklagi;
				tolower(naklagi);
				
				if (naklagi == 'y') {
					goto loop2;
				}
				
				else if (naklagi == 'n') {
					cout << "\t\t\t\t\t\t \nTotal: RM " << total;
					getch();
				}			
		    }
	}
	
	else if ( ans2 == 3) {
		char naklagi;
		cout<<"\t\t\t\t\t\t SUSHI KING (JAPPENESE FOOD)"<<endl
			<<"\t\t\t Address: Wangsa Maju, 53300 Kuala Lumpur, Federal Territory of Kuala Lumpur"<<endl
			<<"\t\t\t\t\t\t Hours: "<<endl
			<<"\t\t\t\t\t\t Tuesday	  10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Wednesday 10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Thursday  10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Friday	  10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Saturday  10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Sunday	  10AM-10PM"<<endl
			<<"\t\t\t\t\t\t Monday	  10AM-10PM"<<endl
			
			<<"\t\t\t\t\t\t RATE : 4****"<<endl
			<<"\t\t\t\t\t\t PEAK HOURS : 12PM-3PM"<<endl;
			
			loop3:
			cout<<"\t\t\t\t\t\t SUSHI KING (JAPPENESE FOOD)"<<endl
			<<"\t\t\t\t\t\t 1.SET A ( RM 15 )"<<endl
			<<"\t\t\t\t\t\t One chicken curry don"<<endl
			<<"\t\t\t\t\t\t One ice green tea "<<endl
			<<"\t\t\t\t\t\t 2.SET B ( RM 20 )"<<endl
			<<"\t\t\t\t\t\t Jappenese Fried Rice "<<endl
			<<"\t\t\t\t\t\t One ice green tea "<<endl
			<<"\t\t\t\t\t\t 3.SET C ( RM 25 )"<<endl
			<<"\t\t\t\t\t\t One beef curry udon"<<endl
			<<"\t\t\t\t\t\t One ice green tea "<<endl
			<<"\t\t\t\t\t\t Salmon sushi "<<endl
		    <<"\t\t\t\t\t\t Please choose what do you want to eat "<<endl
		    <<"\t\t\t\t\t\t ";
		 cin>>ans3;
		
		switch (ans3) {
				case 1: price=15.00; break;
				case 2: price=20.00; break;
				case 3: price=25.00; break;
			}
			
			while (ans3!=1 and ans3!=2 and ans3!=3) {
				cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cout<<"\t\t\t\t\t\t ";
				cin>>ans3;
			}
			
			if (1>=ans3<=3) {
				cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>quantity;
				price=quantity*price;
				total=total+price;
				cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO"<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>naklagi;
				tolower(naklagi);
				
				if (naklagi == 'y') {
					goto loop3;
				}
				
				else if (naklagi == 'n') {
					cout << "\t\t\t\t\t\t \nTotal: RM " << total;
					getch();
				}			
		    }
	}
	else if ( ans2 == 4 ) {
		char naklagi;
		cout<<"\t\t\t\t\t\t DIP N DIP(DESERT)"<<endl
			<<"\t\t\t\ ADDRESS : 5, Jalan Telawi 3, Bangsar Baru, 59100 Kuala Lumpur, Wilayah Persekutuan Kuala Lumpur"<<endl
			<<"\t\t\t\t\t\t Hours: "<<endl
			<<"\t\t\t\t\t\t Tuesday	  11AM-1AM"<<endl
			<<"\t\t\t\t\t\t Wednesday 11AM-1AM"<<endl
			<<"\t\t\t\t\t\t Thursday 11AM-1AM"<<endl
			<<"\t\t\t\t\t\t Friday	 2:30PM-1AM"<<endl
			<<"\t\t\t\t\t\t Saturday 11AM-1AM"<<endl
			<<"\t\t\t\t\t\t Sunday	 11AM-12AM"<<endl
			<<"\t\t\t\t\t\t Monday	 11AM-1AM"<<endl
			
			<<"\t\t\t\t\t\t PEAK HOURS:"<<endl
			<<"\t\t\t\t\t\t 10PM - 12PM "<<endl	
			<<"\t\t\t\t\t\t RATE : 4.2****"<<endl;
			
			loop4:
			cout<<"\t\t\t\t\t\t DIP N DIP(DESERT)"<<endl
			<<"\t\t\t\t\t\t 1.Set A ( RM20 )"<<endl
			<<"\t\t\t\t\t\t One Chocolate waffle"<<endl
			<<"\t\t\t\t\t\t One Hot chocolate"<<endl
			<<"\t\t\t\t\t\t 2.Set B ( RM22 )"<<endl
			<<"\t\t\t\t\t\t One  Chocolate Creep"<<endl 
			<<"\t\t\t\t\t\t One Hot chocolate "<<endl
			<<"\t\t\t\t\t\t 3.Set C ( RM 33 )"<<endl
			<<"\t\t\t\t\t\t One Chocolate Creep N Waffle "<<endl
			<<"\t\t\t\t\t\t One ICE chocolate"<<endl
			<<"\t\t\t\t\t\t Ice cream vanilla  "<<endl
			<<"\t\t\t\t\t\t Please choose what do you want to eat "<<endl
		    <<"\t\t\t\t\t\t ";
		 cin>>ans3;
		
		switch (ans3) {
				case 1: price=20.00; break;
				case 2: price=22.00; break;
				case 3: price=33.00; break;
			}
			
			while (ans3!=1 and ans3!=2 and ans3!=3) {
				cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cout<<"\t\t\t\t\t\t ";
				cin>>ans3;
			}
			
			if (1>=ans3<=3) {
				cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>quantity;
				price=quantity*price;
				total=total+price;
				cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO"<<endl;
				cout<<"\t\t\t\t\t\t ";
				cin>>naklagi;
				tolower(naklagi);
				
				if (naklagi == 'y') {
					goto loop4;
				}
				
				else if (naklagi == 'n') {
					cout << "\t\t\t\t\t\t \nTotal: RM " << total;
					getch();
				}			
		    }
	}
	
	else {
		cout<<"\t\t\t\t\t\t please choose 1 until 4"<<endl;
	}	        
}

void edit() {
		
}

int main() {
	char x;
	while (true) {
		menu();
		cout<<"\t\t\t\t\t\t "<<endl;
		x = getch();
		
		if ( x == '1') {about();}
		else if ( x == '2'){ mood();}
	    else if ( x == '3'){ edit();}	
		else if ( x == '4'){ return 0;}	
		else { main();}
	}
	system("pause");
}

