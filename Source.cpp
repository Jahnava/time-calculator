//converts seconds into days, hours, or minutes

//include directives
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int SEC_PER_DAY = 86400,  //const's must be capital, represents number of seconds in a day
			  SEC_PER_HOUR = 3600,        //represents number of seconds in an hour
		      SEC_PER_MINUTE = 60;		//number of seconds per minute

	double seconds;    //length of time measured in seconds

	//input the number of seconds
	cout << "This program will convert seconds to days, hours, or minutes. \n\n";
	cout << "Enter the number of seconds (60 or more): ";
	cin >> seconds;

	//set the output format
	cout << fixed << setprecision(2);

	// Determine and print the corresponding number of days, hours, or minutes depending on the number of seconds entered
	if (seconds >= SEC_PER_DAY)
		cout << "This equals " << seconds / SEC_PER_DAY << " days. \n";  //this takes the variable double named seconds and dicides by the seconds in a day to deturmine how many days equal the entered amount of seconds
	else if (seconds >= SEC_PER_HOUR)
		cout << "This equals " << seconds / SEC_PER_HOUR << " hours. \n"; //this divides the double named seconds by the number of seconds in an hour to deturmine how many hours there are in the number of seconds entered
	else if (seconds >= SEC_PER_MINUTE)
		cout << "This equals " << seconds / SEC_PER_MINUTE << " minutes. \n";  //this divides the number of seconds entered by the amount odf seconds in a minute to deturmine how many minutes are in the amount of seconds entered
	else
		cout << "This is less than one minute.";  //this cout message is displayed if the amount of seconds entered in less than a minute
	return 0;

}