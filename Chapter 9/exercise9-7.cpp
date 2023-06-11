#include <iostream>
#include <fstream>
using namespace std;

// This program contains an ungodly number of for loops

struct footballPlayer {
    string name;
    string position;
    int touchdowns;
    int catches;
    int passYards;
    int receiveYards;
    int rushYards;
};

void getPlayers(string fileName, footballPlayer team[10]) {
    ifstream fin;
    fin.open(fileName);
    for (int i = 0; i < 10; i++) {
        fin >> team[i].name;
        fin >> team[i].position;
        fin >> team[i].touchdowns;
        fin >> team[i].catches;
        fin >> team[i].passYards;
        fin >> team[i].receiveYards;
        fin >> team[i].rushYards;
    }
    fin.close();
}

void outputPlayers(footballPlayer team[10]) {
    for (int i = 0; i < 10; i++) {
        cout << team[i].name << " " << team[i].position << " " << team[i].touchdowns << " " << team[i].catches << " " << team[i].passYards << " " << team[i].receiveYards<< " " << team[i].rushYards << endl;
    }
}
void outputPlayer(footballPlayer team[10], int playNum) {
cout << "Name: " <<  team[playNum].name << " Position: " << team[playNum].position << " Touch Downs: " << team[playNum].touchdowns << " Number of Catches: " << team[playNum].catches << " Passing Yards: " << team[playNum].passYards << " Receiving Yards: " << team[playNum].receiveYards<< " Rushing Yards: " << team[playNum].rushYards << endl;
}

int searchPlayer(string name, footballPlayer team[10]) {
    for (int i = 0; i < 10; i++) {
        if (team[i].name == name) {
            return i;
        }
    }
    cout << "No player found. Returning to menu" << endl;
    return 11;
}

void editPlayer(int playNum, string stat, footballPlayer team[10]) {
    int addition;
    if (stat == "touchdowns") {
        cout << "How many?" << endl;
        cin >> addition;
        team[playNum].touchdowns += addition;
    } else if (stat == "catches") {
        cout << "How many?" << endl;
        cin >> addition;
        team[playNum].catches += addition;
    } else if (stat == "passing yards") {
        cout << "How many?" << endl;
        cin >> addition;
        team[playNum].passYards += addition;
    } else if (stat == "receiving yards") {
        cout << "How many?" << endl;
        cin >> addition;
        team[playNum].receiveYards += addition;
    } else if (stat == "rushing yards") {
        cout << "How many?" << endl;
        cin >> addition;
        team[playNum].rushYards += addition;
    } else {
        cout << "Stat not found." << endl;
    }
}

void saveChanges(string fileName, footballPlayer team[10]) {
    ofstream fout;
    fout.open(fileName);
    for (int i = 0; i < 10; i++) {
        fout << team[i].name << " " << team[i].position << " " << team[i].touchdowns << " " << team[i].catches << " " << team[i].passYards << " " << team[i].receiveYards<< " " << team[i].rushYards << endl;
    }
    fout.close();
}

int main () {
    string inFile;
    string outFile;
    bool menu = true;
    footballPlayer team[10];
    int selectedPlayerNum;
    string selectedPlayerName;
    string selectedStat;
    string newPlayer;
    string save;
    getPlayers("Ch9_Ex7Data.txt", team);
    while (menu) {
        int userInput;
        cout << "Welcome to Football Man Manager. Please select an option:" << endl;
        cout << "1.) Output a player's stats" << endl;
        cout << "2.) View the list of players in the system" << endl;
        cout << "3.) Edit a player's touchdown data using a data file" << endl;
        cout << "4.) Edit a player's catch data using a data file" << endl;
        cout << "5.) Edit a player's passing yard data using a data file" << endl;
        cout << "6.) Edit a player's receiving data using a data file" << endl;
        cout << "7.) Edit a player's rushing data using a data file" << endl;
        cout << "99.) Exit" << endl;
        cin >> userInput;
        switch(userInput) {
            case 1:
                cout << "Please enter the player's name: " << endl;
                cin >> selectedPlayerName;
                selectedPlayerNum = searchPlayer(selectedPlayerName, team);
                outputPlayer(team, selectedPlayerNum);
                break;
            case 2:
                outputPlayers(team);
                break;
            case 3 ... 7:
                cout << "Please enter the player's name: " << endl;
                cin >> selectedPlayerName;
                selectedPlayerNum = searchPlayer(selectedPlayerName, team); 
                cout << "You've current selected player " << team[selectedPlayerNum].name << ", the " << team[selectedPlayerNum].position << endl;
                switch (userInput) {
                    case 3:
                        selectedStat = "touchdowns";
                        break;
                    
                    case 4:
                        selectedStat = "catches";
                        break;
                     
                    case 5:
                        selectedStat = "passing yards";
                        break;
                    
                    case 6:
                        selectedStat = "receiving yards";
                        break;
                    
                    case 7:
                        selectedStat = "rushing yards";
                        break;
                    
                    default:
                        break;
                    
                }
                editPlayer(selectedPlayerNum, selectedStat, team);
                break;
            case 99:
                cout << "Would you like to save?(y/n)" << endl;
                cin >> save;
                if (save == "y") {
                    cout << "What is the output file called?" << endl;
                    cin >> outFile;
                    saveChanges(outFile, team);
                    menu = false;
                } else {
                    menu = false;
                }
                break;
            default: 
                cout << "Not a valid selection. Please try again." << endl;
                break;
            
        }
    }
}