#include<iostream>

using namespace std;

int main ()
{
	int mood,kindoffood,nameofrestaurant,ans3,quantity;
	char naklagi;
	float price, total=0;
	
	cout<<"\t\t\t\t\t\t Hello, how's your mood today mate ? "<<endl;
	cout<<"\t\t\t\t\t\t 1) Happy"<<endl
 	    <<"\t\t\t\t\t\t 2) Normal "<<endl
 	    <<"\t\t\t\t\t\t 3) Sad   "<<endl;
 	cout<<"\t\t\t\t\t\t ";
	cin>>mood;
 	
while(mood!=1 and mood!=2 and mood!=3)
{
	cout<<"\t\t\t\t\t\t Please choose number 1 until 3 only "<<endl;
	cout<<"\t\t\t\t\t\t ";
	cin>>mood;
}

if (mood==1)
{		system("cls");
	    cout<<"\t\t\t\t\t\t Stay happy !, here are the foods that will keep you happy "<<endl;
	    cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t |                WESTERN !!!!!!            |"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
	    cout<<"\t\t\t\t\t\t  Where do you want to eat ? "<<endl;
		cout<<"\t\t\t\t\t\t  Please chooese the restaurant you want to go "<<endl;
		cout<<"\t\t\t\t\t\t  #########################################"<<endl;
		cout<<"\t\t\t\t\t\t  |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t  |   1) Steak House   or    2) Ikea      |"<<endl;
		cout<<"\t\t\t\t\t\t  |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t  #########################################"<<endl;
		cout<<"\t\t\t\t\t\t  ";
		cin>>nameofrestaurant;
		
		while (nameofrestaurant!=1 and nameofrestaurant!=2)
{

	cout<<"\t\t\t\t\t\t There's only 1 and 2, please choose one number '"<<endl;
	cout<<"\t\t\t\t\t\t ";
	cin>>nameofrestaurant;
}
		
		if(nameofrestaurant==1)
		{
			char naklagi;
			do{
			
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  ---------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Set A  (Chicken Chop with Juice)    RM 10.00       |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Set B  (Lamb Chop with Juice        RM 12.00       |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Set C  (Mix Steaks with juice)      RM 16.50       |"<<endl;
		cout<<"\t\t\t\t\t\t  ---------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  ";
		cin>>ans3;
		switch (ans3)
		{
			case 1: price=10.00; break;
			case 2: price=12.00; break;
			case 3: price=16.50; break;
			
		}
		 while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t Just choose from the menu only "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
	}
		if (1>=ans3<=5)
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
		}while(naklagi=='y' or naklagi=='Y' );
		
	}
		
		else if(nameofrestaurant==2)
		{
			char naklagi;
			do{
			
		
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Set A (Fish&Chips with Juice)             RM 14.50         |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Set B (Meatballs with Juice)               RM 12.50         |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Set C (Pasta Mongolia with Juice)               RM 13.50         |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  ";
		cin>>ans3;
		switch (ans3)
		{
			case 1: price=14.50; break;
			case 2: price=12.50; break;
			case 3: price=13.50; break;
			
		}
			while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  Just choose from the menu only "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}	if (1>=ans3<=5)
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
		}while(naklagi=='y' or naklagi=='Y' );
		}
	


}
		

 	
	else if (mood==2)
	{
		cout<<"\t\t\t\t\t\t Oh youre feeling normal today. Keep on !"<<endl;
		cout<<"\t\t\t\t\t\t Here's a suggestion for you to fill up your belly !"<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t |                  RICE    !!!!!!          |"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t Which restaurant you want to go ?       "<<endl;
		cout<<"\t\t\t\t\t\t #########################################"<<endl;
		cout<<"\t\t\t\t\t\t |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t |   1) Serai   or   2) Gold Chilli's    |"<<endl;
		cout<<"\t\t\t\t\t\t |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t #########################################"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>nameofrestaurant;
		
	while(nameofrestaurant!=1 and nameofrestaurant!=2)
{
	cout<<"\t\t\t\t\t\t PILIH 1 ATAU 2 JE KONTOL "<<endl;
	cout<<"\t\t\t\t\t\t ";
	cin>>nameofrestaurant;
}
	
	
    if(nameofrestaurant==1)
	{
		char naklagi;
		do{
		
		cout<<"\t\t\t\t\t\t This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t | 1) Set A   (Char kuey Tiaw with Juice)                       RM6.00 |"<<endl;
		cout<<"\t\t\t\t\t\t | 2) Set B   (Thai Fried Rice with Juice)                       RM5.00 |"<<endl;
		cout<<"\t\t\t\t\t\t | 3) Set C   (Nasi Kerabu with Juice)                       Rm6.00 |"<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		switch (ans3)
		{
			case 1: price=6.00; break;
			case 2: price=5.00; break;
			case 3: price=6.00; break;
			
		}
		
		while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}
		if (1>=ans3<=5)
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
		}while(naklagi=='y' or naklagi=='Y' );
		
	}
	
	else if (nameofrestaurant==2)
	{
		char naklagi;
		do{
		
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Set A  (Butterchicken with Teh o Ais)                       RM11.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Set B  (BUtterprawn with Teh o kurang Ais)                       RM14.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Set C  (Butterfish with teh o taknak ice )                       RM12.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		switch (ans3)
		{
			case 1: price=11; break;
			case 2: price=14; break;
			case 3: price=12; break;
			
		}
		
	while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}	if (1>=ans3<=5)
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
		}while(naklagi=='y' or naklagi=='Y' );
	
    }
	

    }
    
    
	else if (mood==3)
	{
		cout<<"\t\t\t\t\t\t  Oh youre feeling sad. Dont worry !"<<endl;
		cout<<"\t\t\t\t\t\t  Here are the foods that will make you happy, at leaast a bit"<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t |                DESSERTS !!!!!!           |"<<endl;
	    cout<<"\t\t\t\t\t\t |                                          |"<<endl;
	    cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t Which restaurant you want to go ?           "<<endl;
		cout<<"\t\t\t\t\t\t #########################################"<<endl;
		cout<<"\t\t\t\t\t\t |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t |   1) DipNDip  or  2) Molten Chocolate |"<<endl;
		cout<<"\t\t\t\t\t\t |                                       |"<<endl;
		cout<<"\t\t\t\t\t\t #########################################"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>nameofrestaurant;
		
		if(nameofrestaurant==1)
		{
			char naklagi;
			do{
			
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Set A    (Choco Kebab with ice water)                        RM15.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Set B    (Waffle Stich with ice chocolate)                     RM13.50 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Set C    (Brownies milk chocolate with milk chocolate)                     RM10.90 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
		switch (ans3)
		{
			case 1: price=15.00; break;
			case 2: price=13.50; break;
			case 3: price=10.90; break;
			
		}
			
		while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	    {
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		}
			if (1>=ans3<=5)
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
		}while(naklagi=='y' or naklagi=='Y' );
		
	}
		
		else if(nameofrestaurant==2)
		{
			char naklagi;
		do{
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  ---------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Set A      (Lava Cake with Caramel Frap)               RM11.00       |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Set B      (Chocolate Crepe with Ice water)            RM14.00       |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Set C      (Chocolate Cake with Ice water)             RM12.00       |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
		switch (ans3)
		{
			case 1: price=11; break;
			case 2: price=14; break;
			case 3: price=12; break;
			
		}
		
		
			while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	    {
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	    } 

		if (1>=ans3<=5)
		{
		
		cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>quantity;
		price=quantity*price;
		total=total+price;
		cout<<"\t\t\t\t\t\t Next order ? Y-YES N-NO"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>naklagi;
	
	    }
		}while(naklagi=='y' or naklagi=='Y' );
		
	
		
	
	
	}
		
		
}
	
	cout<<"\t\t\t\t\t\t Total RM "<<total;
	
	
	
	
}
		
	  
    
