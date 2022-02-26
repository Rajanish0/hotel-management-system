//26-02-2022 (1;00pm)
#include<iostream>
#include<string>

using namespace std;

int main(){
	int n=0,x,price,table_no;
	cout<<"Please Enter the table no on which you are seating:"<<" ";
	cin>>table_no;
	string ok,Order_from {"0 Pizza,1 Momo,2 Barger,3 Chiken Biryani,4 Veg Biryani,5 Chiken Chomin,6 Paneer chomin,7 Manchuriyan,8 Chiken Role,9 Paneer Role"};
	cout<< "These are the  Available items "<<endl<< Order_from <<endl;
	cout<<"Select the Item which you Want"<<" ";
	cin>>n;
	switch(n){

		case 0: cout<<"Please Enter the number of Pizza which you want to order:"<<" ";
		        cin>>x;
		   		price=x*99;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok:"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" Pizza "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 1: cout<<"Please Enter the number of plates of Momos which you want to order:"<<" ";
		        cin>>x;
		   		price=x*50;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of Momos "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 2: cout<<"Please Enter the number of Barger which you want to order:"<<" ";
		        cin>>x;
		   		price=x*50;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" number of Barger "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 3: cout<<"Please Enter the number of plates of Chiken Biryani which you want to order:"<<" ";
		        cin>>x;
		   		price=x*100;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok:"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats"<< table_no <<"has conforned the order of "<<" "<< x <<" plates of Chiken Biryani "<<endl<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 4: cout<<"Please Enter the number of plates of Veg Biryani which you want to order:"<<" ";
		        cin>>x;
		   		price=x*100;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of Veg Biryani "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 5: cout<<"Please Enter the number of plates of Chiken chomin which you want to order:"<<" ";
		        cin>>x;
		   		price=x*60;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of Chiken chomin "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 6: cout<<"Please Enter the number of plates of Paneer chomin which you want to order:"<<" ";
		        cin>>x;
		   		price=x*50;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of Paneer chomin "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 7: cout<<"Please Enter the number of plates of Manchurian which you want to order:"<<" ";
		        cin>>x;
		   		price=x*110;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of Manchurian "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 8: cout<<"Please Enter the number of plates of Veg chiken Role which you want to order:"<<" ";
		        cin>>x;
		   		price=x*50;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of chiken role "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		case 9: cout<<"Please Enter the number of plates of Paneer role  which you want to order:"<<" ";
		        cin>>x;
		   		price=x*50;
		   		cout<<"Total Price ="<<price<<endl;
		   		cout<<"Please conform the order by writing ok"<<" ";
		   		cin>>ok;
		   		cout<<"Congrats you have ordered "<< x <<" plates of paneer rolr "<<" Your has been conformed:"<<endl;
		   		cout<<"please wait for the moment:"<<" ";
		   		break;
		default:cout<<"Items not avilable"<<endl;
		   	    break;
		   	}
	
	return 0;
}