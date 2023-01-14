#include<iostream>
#include<fstream>
#include<iomanip>
#include <ctype.h> // to check isdigit
using namespace std;

void login_menu();
void login();
void signUp();

/*
Dentise - Own username and password
-edit personal details such as their name, age, gender, and phone number
-submit available timeslots patient appointments booking.
-check patients appointment
-view and update/cancel booking details include past visits


Patient - Own username and password
-edit personal details such as their name, age, gender, ic number and phone number
-view past visits details
-book appointments on available timeslots
-cancel appointments



1. Start
-----------------
Login
SignUp


2.1 SignUp
----------------------------------------
[Need to create a file for users]

Dentist OR Patients?
ADD USERS
(Dentist)  name, age, gender, and phone number  (+username +password)
(Patients) name, age, gender, ic number and phone number  (+username +password)



2.2 Dentist Login
----------------------------------------
[Need to create a file for available booking TIMESLOTS  ++  RECORD for history booking]

+add_timeslot(int start, int end): boolean
+list_timeslots(): void
+delete_timeslot(int start, int end): booleans
+list_patientrecords(string name): void
+list_dentistrecords(string name): void
+addrecord(string p_name, string d_name, date date, string timeP, string details): boolean
+editrecord(): boolean
+deleterecord(int id): boolean



2.3 Patients Login
----------------------------------------
[Need to create a file for APPOINTMENT]

+list_appointment(): void
+filter_appointment(string name, int start, int end): void
+book_appointment(string name, int start, int end): boolean
+cancel_appointment(string name, int start, int end): boolean
+list_patientrecords(string name): void



3
----------------------------------------
Perform task acordingly
*/


int main()
{
    login_menu();




    return 0;
}



void login_menu ()
{
    int login_menu_choice = 0;

	cout << "|===================================|\n";
    cout << "|             Login/SignUp          |\n";
    cout << "|           ----------------        |\n";
    cout << "|    1. Login                       |\n";
    cout << "|    2. Sign Up                     |\n";
    cout << "|    3. Exit                        |\n";
	cout << "|===================================|\n";

    cout << "Welcome, ";

re_prompt1:
    cout << "Please select 1-3 :";
re_prompt2:
    cin >> login_menu_choice;

    switch(login_menu_choice) {
            case 1:{
                login();    //Go to login function
            }
            break;

            case 2:
            {
                signUp();    //Go to Sign up function
            }
            break;

            case 3:
            {
                cout << "Exiting program ....\n\n";
                exit(0);
            }
            break;

            default:
            {
                cout << "Please select only from 1 to 3! : ";
                goto re_prompt2;
                break;
            }

        }


}

void login()
{
    //prompt user name
    //prompt password
    //check if exist
    //dentist ? patient ?
    //apply functions available
    cout <<"Login function"; //Testing

}

void signUp()
{
    //prompt user name
    //prompt password
    //prompt confirm password
    //check if user name exist = add / re_signUp
    //Prompt details name, age, gender, ic number and phone number
    //cout information added
    //navigate to patient menu
    cout <<"Sign Up function"; //Testing

}



