#include <iostream>
#include <vector>
#include <math.h>
#include <Windows.h>

using namespace std;

int timepass;//data type that indicat how many time have pass
int People_Leave_1;//data type that indicate customer that have left before being served
int People_Leave_2;
int People_Leave_3;
float HourWork;//data type that indicate how many hour the employee work
float cashier_1;//data type that indicate how many customer that is being served

vector<int>cashier1;//vector for each cashier
vector<int>cashier2;
vector<int>cashier3;
vector<int>cashier4;
vector<int>cashier5;
vector<int>cashier6;

void Menu();//menu for the program
void InsertData();//method that insert the data for the program
void SimulateData();//method that simulate the data that the user input
void TryAgain();
void ShowPeopleLeave();//method that print the number of people that have left before being served
void CalculateIncome();//calculate the income of each cashier type

int main(){
    Menu();
	InsertData();
	SimulateData();
	ShowPeopleLeave();
	CalculateIncome();
	TryAgain();	
	}

void InsertData(){
	float cashier_2 = ceil(cashier_1/2);//declare the how many the cashier will get their customer based on the user input
	float cashier_3 = cashier_1-cashier_2;
	float cashier_4 = ceil(cashier_1/3); 
	float cashier_5 = ceil((cashier_1-cashier_4)/2);
	float cashier_6 = cashier_1-cashier_4-cashier_5;
	
	for (float i =0; i<cashier_1 ;i++){
		cashier1.push_back(rand() % 6 +5);//input random number for each customer so that each customer can have their own wating time
	} 
	for (float i =0; i<cashier_2 ;i++){
		cashier2.push_back(rand() % 6 +5);//input random number for each customer so that each customer can have their own wating time
	} 
	for (float i =0; i<cashier_3 ;i++){
		cashier3.push_back(rand() % 6 +5);//input random number for each customer so that each customer can have their own wating time
	} 
	for (float i =0; i<cashier_4 ;i++){
		cashier4.push_back(rand() % 6 +5);//input random number for each customer so that each customer can have their own wating time
	} 
	for (float i =0; i<cashier_5 ;i++){
		cashier5.push_back(rand() % 6 + 5);//input random number for each customer so that each customer can have their own wating time
    }
	for (float i =0; i<cashier_6 ;i++){
		cashier6.push_back(rand() % 6 + 5);//input random number for each customer so that each customer can have their own wating time
	}
}
void SimulateData(){
	while (cashier1.size() != 0){//the method will always run until the cashier1.size is empty
		for(int i =0;i<cashier1.size();i++){
			if( timepass >cashier1[i]){
				cashier1.erase(cashier1.begin() + i);
				People_Leave_1++;//int that indicate how many customer have left before being served
			}
		}//the function will check all the customer by iterating them on by one and if the witing time the customer have is bigger than the timepass then that element will be removed regardless of position
		for(int i =0;i<cashier2.size();i++){
			if( timepass >cashier2[i]){
				cashier2.erase(cashier2.begin() + i);
				People_Leave_2++;
			}
		}
		for(int i =0;i<cashier3.size();i++){
			if( timepass >cashier3[i]){
				cashier3.erase(cashier3.begin() + i);
				People_Leave_2++;
			}
		}
		for(int i =0;i<cashier4.size();i++){
			if( timepass >cashier4[i]){
				cashier4.erase(cashier4.begin() + i);
				People_Leave_3++;
			}
		}
		for(int i =0;i<cashier5.size();i++){
			if( timepass >cashier5[i]){
				cashier5.erase(cashier5.begin() + i);
				People_Leave_3++;
			}
		}
		for(int i =0;i<cashier6.size();i++){
			if( timepass >cashier6[i]){
				cashier6.erase(cashier6.begin() + i);
				People_Leave_3++;
			}
		}
		cout<<" --------------\n";
        cout<<"|With 1 Cashier|\n";
        cout<<" --------------\n";
        cout<<"\n";
		cout<<"Cashier_1:";
		for (int i =0; i < cashier1.size(); i++){
//            cout<<"["<<cashier1[i]<<"]";(to check the element that each customer have)(for testing purposes)
            cout<<"[]";
		} //to print symbol that indicate the customer's
		cout<<"\n\n";
		cout<<" --------------\n";
		cout<<"|With 2 Cashier|\n"; 
		cout<<" --------------\n";
		cout<<"\n";
		cout<<"Cashier_2:";
		for (int i =0; i < cashier2.size(); i++){
            cout<<"[]";
		}  //to print symbol that indicate the customer's  
		cout<<"\n\n";
		cout<<"Cashier_3:";
		for (int i =0; i < cashier3.size(); i++){
            cout<<"[]";
		}//to print symbol that indicate the customer's
		cout<<"\n\n";
		cout<<" --------------\n";
		cout<<"|With 3 Cashier|\n";
		cout<<" --------------\n";
		cout<<"\n";
		cout<<"Cashier_4:";
		for (int i =0; i < cashier4.size(); i++){
            cout<<"[]";
		}//to print symbol that indicate the customer's
		cout<<"\n\n";
		cout<<"Cashier_5:";
		for (int i =0; i < cashier5.size(); i++){
            cout<<"[]";
		}//to print symbol that indicate the customer's
		cout<<"\n\n";
		cout<<"Cashier_6:";
		if(cashier6.size()!=0){
			for (int i =0; i < cashier6.size(); i++){
            cout<<"[]";
			}//to print symbol that indicate the customer's	
		}
	
		if(cashier1.size()!=0){
			cashier1.pop_back();
		}//to remove the customer that have already being served
		if(cashier2.size()!=0){
			cashier2.pop_back();	
		}//to remove the customer that have already being served
		if(cashier3.size()!=0){
			cashier3.pop_back();
		}//to remove the customer that have already being served
		if(cashier4.size()!=0){
			cashier4.pop_back();	
		}//to remove the customer that have already being served
		
		if(cashier5.size()!=0){
			cashier5.pop_back();
		}//to remove the customer that have already being served
		if(cashier6.size()!=0){
			cashier6.pop_back();
		}//to remove the customer that have already being served
		
		Sleep(1000);//to initiate waiting time
		system("cls");//to clear the screen
	
		cout<<endl;
		timepass++;//int to indicate how much time have pass
	}
}
void TryAgain(){//to tell the user wheter the user want to simulate the program again or not
	cout <<"Do you want to simulate the program again?\n";
	cout <<"[1].Yes\n";
	cout <<"[2].No\n";
	int choice;
	cin >>choice;
	switch(choice){
		case 1://case 1 will initiate the main method and clear or the global variable
			timepass=0;
			People_Leave_1=0;
            People_Leave_2=0;
            People_Leave_3=0;
			cashier_1=0;	
			system("cls");
			main();
		case 2://will exit the program
			exit(1);
		default://will run if the user input the wrong number
			system("cls");
			cout<<"Wrong Input!!";
			Sleep(0700);
			system("cls");
			cin.clear();
			cin.ignore();
			TryAgain();
	}		
}
void ShowPeopleLeave(){
	cout<<" --------------------------------------------------------------\n";
	cout<<"|the amount of people left before being served with 1 cashier:"<<People_Leave_1<<"|"<<endl;//printing the amount of people that left before being served
	cout<<"|the amount of people left before being served with 2 cashier:"<<People_Leave_2<<"|"<<endl;
	cout<<"|the amount of people left before being served with 3 cashier:"<<People_Leave_3<<"|"<<endl;
	cout<<" --------------------------------------------------------------\n";
	cout<<"\n\n";
}
void CalculateIncome(){
	float productivity_with_1_cashier = ((cashier_1*HourWork-(People_Leave_1*HourWork))/HourWork);//to Calculate the productivity of the cashier assuming that the income is 1 dollar per customer
	float productivity_with_2_cashier = ((cashier_1*HourWork-(People_Leave_2*HourWork))/HourWork);
	float productivity_with_3_cashier = ((cashier_1*HourWork-(People_Leave_3*HourWork))/HourWork);
	
	float Income_1 = ((cashier_1*HourWork-(People_Leave_1*HourWork))-(1*HourWork));//to Calculate income perday assuming that the employee got paid 1 dollar an hour and 1 dollar income percustomer
	float Income_2 = ((cashier_1*HourWork-(People_Leave_2*HourWork))-(2*HourWork));
	float Income_3 = ((cashier_1*HourWork-(People_Leave_3*HourWork))-(3*HourWork));
	
	cout<<" ---------------------------------\n";
	cout <<"|Income with 1 cashier perhour:"<<productivity_with_1_cashier <<"&"<<"|"<<endl;//print the productivity of each cashier type
	cout <<"|Income with 2 cashier perhour:"<<productivity_with_2_cashier <<"$"<<"|"<<endl;//print the productivity of each cashier type
	cout <<"|Income with 3 cashier perhour:"<<productivity_with_3_cashier <<"$"<<"|"<<endl;//print the productivity of each cashier type
	cout<<" ---------------------------------\n";
	cout<<"\n\n";
	
	cout<<" --------------------------------\n";
	cout <<"|Income with 1 cashier perday:"<<Income_1 <<"$"<<"|"<<endl;//print the income perday of each cashier type
	cout <<"|Income with 2 cashier perday:"<<Income_2 <<"$"<<"|"<<endl;
	cout <<"|Income with 3 cashier perday:"<<Income_3 <<"$"<<"|"<<endl;
	cout<<" --------------------------------\n";
	cout<<"\n\n";
}
void Menu(){
	cout<<" -------------------------------------------\n";
	cout<<"|    Welcome to FastFood Cashier Program    |\n";
	cout<<" -------------------------------------------\n";
	cout<<"\n\n";
	cout<<"  -------------------------------------------\n";
	cout<<" | How many customer do you want to simulate?|\n";
	cout<<"  -------------------------------------------\n";
	cin >> cashier_1;
	if (cin.fail() || cashier_1<0){//will run if user input other than number or ngeative number
		cin.clear();//to clear the previous input from user to prevent infinite loop
		cin.ignore();//to clear the previous input from user to prevent infinite loop
		system("cls");
		cout<<"Wrong Input!!"<<endl;
		Sleep(0700);
		system("cls");
		main();//this method is taken from https://stackoverflow.com/questions/2075898/good-input-validation-loop-using-cin-c
    }
    cout<<"\n\n";
    cout<<"  -----------------------------------\n";
	cout<<" |  How many hour the employee work? |\n";
	cout<<"  -----------------------------------\n";
	cin >>HourWork;
	if (cin.fail() || HourWork>24|| HourWork<0){//will run if user input other than number,negative number or number that is greater than 24
		cin.clear();//to clear the previous input from user to prevent infinite loop
		cin.ignore();//to clear the previous input from user to prevent infinite loop
		system("cls");
		cout<<"Wrong Input!!"<<endl;
		Sleep(0700);
		system("cls");
		main();//this method is taken from https://stackoverflow.com/questions/2075898/good-input-validation-loop-using-cin-c
    }
    system("cls");
}

