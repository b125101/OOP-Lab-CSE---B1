/*
9. Cricket Score Analyzer
Create a class named CricketPlayer. The class should contain:
• Player Name
• Matches Played
• Total Runs Scored
Write member functions to:
1. Accept player details.
2. Calculate the batting average.
3. Classify the player’s performance using the following criteria and display the com-
plete player report:

Batting Average     Performance
---------------------------------
50 and above        Excellent
35–49.99            Good
20–34.99            Average
Below 20            Poor
*/

#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;
    string performance;

public:
    void input(){
        cin.ignore();
        cout << "Enter Player Name: ";
        getline(cin, playerName);
        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;
        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    void calculateAverage(){
        battingAverage = (float)totalRuns / matchesPlayed;
    }

    void classify(){
        if (battingAverage >= 50)
            performance = "Excellent";
        else if (battingAverage >= 35)
            performance = "Good";
        else if (battingAverage >= 20)
            performance = "Average";
        else
            performance = "Poor";
    }

    void display(){
        cout << "Player Name      : " << playerName << endl;
        cout << "Matches Played   : " << matchesPlayed << endl;
        cout << "Total Runs       : " << totalRuns << endl;
        cout << "Batting Average  : " << battingAverage << endl;
        cout << "Performance      : " << performance << endl;
    }
};

int main(){
    CricketPlayer p;
    p.input();
    p.calculateAverage();
    p.classify();
    p.display();
    return 0;
}