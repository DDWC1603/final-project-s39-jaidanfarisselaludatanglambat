#include<iostream>

using namespace std;

int main ()
{
	int mood,kindoffood,nameofrestaurant,ans3,ans4,ans5,ans6,ans7,ans8,quantity;
	char naklagi;
	
	cout<<"\t\t\t\t\t\t Hello, how's your mood today ? "<<endl;
	cout<<"\t\t\t\t\t\t 1) Happy"<<endl
 	    <<"\t\t\t\t\t\t 2) Normal "<<endl
 	    <<"\t\t\t\t\t\t 3) Sad   "<<endl;
 	cout<<"\t\t\t\t\t\t ";
	cin>>mood;
 	
while(mood!=1 and mood!=2 and mood!=3)
{
	cout<<"\t\t\t\t\t\tTAKDE BODOH PILIH 1 SAMPAI 3 JE "<<endl;
	cout<<"\t\t\t\t\t\t ";
	cin>>mood;
}

if (mood==1)
{		system("cls");
	    cout<<"\t\t\t\t\t\t Stay happy babi !, here are the foods that will keep you happy "<<endl;
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

	cout<<"\t\t\t\t\t\t TAKDE BODOH PILIH 1 ATAU 2 JE"<<endl;
	cout<<"\t\t\t\t\t\t ";
	cin>>nameofrestaurant;
}
		
		if(nameofrestaurant==1)
		{
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Chicken Chop Black Pepper Sauce       |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Chicken Chop Mushroom Sause           |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) French Fries                          |"<<endl;
		cout<<"\t\t\t\t\t\t  | 4) Ice Water                             |"<<endl;
		cout<<"\t\t\t\t\t\t  | 5) Juice                                 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  ";
		cin>>ans3;
		 while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
	}
	}
		
		else if(nameofrestaurant==2)
		{
		
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Meatballs                             |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Fish and Chip                         |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Chicken Chop                          |"<<endl;
		cout<<"\t\t\t\t\t\t  | 4) Ice Water                             |"<<endl;
		cout<<"\t\t\t\t\t\t  | 5) Juice                                 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  ";
		cin>>ans3;
			while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}}
	


}
		

 	
	else if (mood==2)
	{
		cout<<"\t\t\t\t\t\t Oh youre feeling normal today. Keep on !"<<endl;
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
		cout<<"\t\t\t\t\t\t This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t | 1) Thai Fried Rice                RM6.00 |"<<endl;
		cout<<"\t\t\t\t\t\t | 2) Nasi Goreng Kampung            RM5.00 |"<<endl;
		cout<<"\t\t\t\t\t\t | 3) Nasi Goreng Seafood            Rm6.00 |"<<endl;
		cout<<"\t\t\t\t\t\t | 4) Ice Water                      Rm0.30 |"<<endl;
		cout<<"\t\t\t\t\t\t | 5) Juice                          Rm2.50 |"<<endl;
		cout<<"\t\t\t\t\t\t --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
		while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}
		
	}
	
	else if (nameofrestaurant==2)
	{
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Butter Chicken with Rice      RM11.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Butter Prawn with Rice        RM14.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Butter Fish with Rice         RM12.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 4) Ice Water                     RM00.30 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 5) Juice                         RM02.50 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
		
	while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	{
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	}
	
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
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Chocolate Pancake             RM11.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Chocolate Crepe               RM14.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Waffle Stick                  RM12.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 4) Ice Water                     RM00.30 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 5) Juice                         RM02.50 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
			
		while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	    {
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		}
		
	}
		
		else if(nameofrestaurant==2)
		{
		do{
		cout<<"\t\t\t\t\t\t  This is the menu, please place your order "<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t  | 1) Choco Kebab                   RM11.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 2) Choco Brownies                RM14.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 3) Moise Cakse                   RM12.00 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 4) Ice Water                     RM00.30 |"<<endl;
		cout<<"\t\t\t\t\t\t  | 5) Juice                         RM02.50 |"<<endl;
		cout<<"\t\t\t\t\t\t  --------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>ans3;
	
		if (ans3==1)
		{
		
		cout<<"\t\t\t\t\t\t Enter Quantity = "<<endl;
		cout<<"\t\t\t\t\t\t ";
		cin>>quantity;
		cout<<"\t\t\t\t\t\t Next order ? Y-YEs N-NO";
		cin>>naklagi;
	    }
		}while(naklagi=='y' and naklagi=='Y' );
		
	
		
		while (ans3!=1 and ans3!=2 and ans3!=3 and ans3!=4 and ans3!=5)
	    {
		cout<<"\t\t\t\t\t\t  PILIH DARI MENU JE LA "<<endl;
		cout<<"\t\t\t\t\t\t   ";
		cin>>ans3;
		
	    } 
	
	}
		
		
}
	
	
	
	
	
	
}
		
	  
    
