#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//TODO: Create your struct
struct DailyClimate {
    string name;
    float rainfall;
    float temperature;
};

int main() {
    const int WEEK = 3;
    DailyClimate myweek[WEEK]; //array of DailyClimate structs
    float total = 0;
    int lowest_rainfall = 0;
    int highest_temp = 0;

   
    for (int i = 0; i < WEEK; i++) {
        
        //TODO: Prompt/read daily climate information
        
        cout << "Day #" << i + 1 << endl;
        cout << "Enter day name: ";
        getline(cin, myweek[i].name);

        cout << "Enter rainfall: ";
        cin >> myweek[i].rainfall;

        cout << "Enter temperature: ";
        cin >> myweek[i].temperature;

        cin.ignore(); 
        cout << endl;

        //adds current rainfall to total rainfall
        total += myweek[i].rainfall;

        //TODO: Find the index of the hottest day
        if (myweek[i].temperature > myweek[highest_temp].temperature) {
            highest_temp = i;
        }

        //TODO: Find the index of the day with lowest rainfall
        if (myweek[i].rainfall < myweek[lowest_rainfall].rainfall) {
            lowest_rainfall = i;
        }
    }

    float avg = total / WEEK;

    //TODO: output the average rainfall, the day with the lowest
   // temperature, and the day with the highest rainfall.
    cout << "Average rainfall: " <<  avg << endl;
    cout << "Highest temperature of " << myweek[highest_temp].temperature << " on " << myweek[highest_temp].name << endl;
    cout << "Lowest rainfall of " << myweek[lowest_rainfall].rainfall << " on " << myweek[lowest_rainfall].name << endl;

    return 0;
}