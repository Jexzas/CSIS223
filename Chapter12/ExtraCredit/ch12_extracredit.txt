
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int sumVotes(int list[], int size);
int winnerIndex(int list[], int size);

int main() {
    int numberOfCandidates;
    string *candidates;
    int *votes;
    int totalVotes;
    int i;

    cout << "Enter number of candidates: ";
    cin >> numberOfCandidates;
    cout << endl;

    candidates = new string[numberOfCandidates];
    votes = new int[numberOfCandidates];

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Enter candidate's name and the votes "
    << " received by the candidate." << endl;

    for (i = 0; i < numberOfCandidates; i++) {
        cout << "Name:" << endl;
        cin >> candidates[i];
        cout << "Votes:" << endl;
        cin >> votes[i];
    }

    totalVotes = sumVotes(votes, numberOfCandidates);
    // Your Code Here
    cout << "Total " << totalVotes << endl;
    cout << "The Winner of the Election is: " << candidates[winnerIndex(votes,
    numberOfCandidates)]
    << endl;
    system("pause");
    return 0;
}

int sumVotes(int list[], int size)  {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += list[i];
    }
    return total;
}

int winnerIndex(int list[], int size) {
    int winInd = 0;
    for (int i = 0; i < size; i++) {
    if (list[i] > list[winInd])
        winInd = i;
    }
    return winInd;
}
