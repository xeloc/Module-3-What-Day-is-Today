#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std;

int main() {
    string day;  // Variable to store the input for the day of the week

    // Tell user to enter a day
    cout << "Please enter a day of the week: ";
    getline(cin, day);  // Read the input even with spaces

    // Convert the input day to lowercase
    transform(day.begin(), day.end(), day.begin(), ::tolower);

    int dayIndex = 0;  // Default to 0 (invalid day)

    if (day == "sunday") dayIndex = 1;
    else if (day == "monday") dayIndex = 2;
    else if (day == "tuesday") dayIndex = 3;
    else if (day == "wednesday") dayIndex = 4;
    else if (day == "thursday") dayIndex = 5;
    else if (day == "friday") dayIndex = 6;
    else if (day == "saturday") dayIndex = 7;

    // Use a switch statement with the dayIndex values established
    switch (dayIndex) {
    case 1:
    case 7:
        cout << "It's the weekend!" << endl;
        break;
    case 4:
        cout << "Hump Daaaaay!" << endl;
        break;
    case 6:
        cout << "TGIF!" << endl;
        break;
    case 2:
    case 3:
    case 5:
        cout << "It's a weekday!" << endl;
        break;
    default:
        cout << "Invalid day of the week entered." << endl;  // If the user doesn't input a day
        break;
    }

    return 0;
}
