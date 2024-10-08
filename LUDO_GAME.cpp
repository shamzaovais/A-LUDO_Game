// Roll no. 139       sec D
// Small Dice Game 

#include<iostream>
using namespace std;
struct player
{
	
	char  name[20];
	int  dice_no[5];
	int score ;
	string result;


};

int main()
{
	player Team1, Team2, * ptr1, * ptr2;
	ptr1 = &Team1;
	ptr2 = &Team2;


	system("pause");
	system("cls");

	cout << "\n\n\t\t\t\t | In This Game Only Two Players Play The Game | \n " << endl;

	system("pause");
	system("cls");

	cout << "\n\t Player 1 Infomation " << endl;
	cout << "\n\t Enter your name :\n ";
 cin >> (*ptr1).name;
	
	
	system("pause");


	cout << "\n\t Player 2 Infomation " << endl;
	cout << "\n\t Enter your name : \n";cin >> (*ptr2).name;

	system("pause");
	system("cls");
	cout << "\n\n\t\t\t\t  |(---------- START GAME ----------)|  \n" << endl;
	
	system("pause");
	system("cls");

	cout << " \n\t\t\t**** Player 1 ***** " << endl;
	cout << " \t Enter Dice Five Times " << endl;
	cout << " \t Enter Number upto  6 " << endl;

    

	for (int i = 0; i < 5; i++)
	{
		cin >> *ptr1[i].dice_no;
	

		if (*ptr1[i].dice_no <= 6)
	   {
			if (*ptr1[i].dice_no == 6)
			{
				(*ptr1).score = (*ptr1).score + 6;
								
			}

			if (*ptr1[i].dice_no % 2 == 0)
			{
				(*ptr1).score = (*ptr1).score + 4;
			   
			}
			
			if (*ptr1[i].dice_no % 2 == 1)
			{
				(*ptr1).score = (*ptr1).score + 3;
			}			
		}
	
		else if (*ptr1[i].dice_no > 6)
		{
			cout << " \t You are enter wrong Number......... " << endl;
			cout << " \t\t\t\t ***** Again Enter all numbers *****" << endl;
			break;
			
		}

	}
		
	system("pause");
    system("cls");

	cout << "\n\t\t\t ***** Player 2 ***** " << endl;
	cout << "\t  Enter Dice Five Times " << endl;
	cout << "\t  Enter Number upto  6 " << endl;
	
	for (int j = 0; j < 5; j++)
	{
		cin >> *ptr2[j].dice_no;


		if (*ptr2[j].dice_no <= 6)
		{
			if (*ptr2[j].dice_no == 6)
			{
				(*ptr2).score = (*ptr2).score + 6;

			}

			if (*ptr2[j].dice_no % 2 == 0)
			{
				(*ptr2).score = (*ptr2).score + 4;

			}

			if (*ptr2[j].dice_no % 2 == 1)
			{
				(*ptr2).score = (*ptr2).score + 3;
			}

		}


		else if (*ptr2[j].dice_no > 6)
		{
			cout << " \t You are enter wrong number .......... " << endl;
			cout << " \t\t\t\t ***** Again Enter all numbers *****" << endl;
			break;

		}
	}

    cout << "\t\t (--------Player 1 Score---------)" << endl;
		cout << "\t\t  Name   " << (*ptr1).name  << endl;
		cout << "\t\t  Score   " << (*ptr1).score << endl;


        cout << "\t\t  (--------Player 2 Score---------)" << endl;
		cout << "\t\t  Name   " << (*ptr2).name  << endl;
		cout << "\t\t  Score   " << (*ptr2).score << endl;
		
	if ((*ptr1).score > (*ptr2).score)
	{   
    
        cout << "\t\t*********  Player 1 Win the Match  ********* "<< endl;
	}
	
	else if ((*ptr1).score < (*ptr2).score)
	{
    
	  	
	    cout << "\t\t*********  Player 2 Win the Match  ********* "<< endl;
	}

	return 0;
}
