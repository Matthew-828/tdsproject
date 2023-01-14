#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;





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










int main()
{




}
