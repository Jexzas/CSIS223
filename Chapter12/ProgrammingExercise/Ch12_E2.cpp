// Jesse Roberts 9/13/2023

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

char examGrade(int score);

int main()  {
    char* firstArray;
    int noOfQuestions;
    char* secondArray;
    char ID[9];
    char ch;
    int score;
    int len;

    ifstream infile;
    ofstream outfile;

    int i;
    
    infile.open("Ch12_Ex2Data.txt");

    if (!infile) {
        cout << "Cannot open input file. Program terminates!" << endl;
        return 1;
    }

    cout << "Enter number of exam questions: ";
    cin >> noOfQuestions;
    cout << endl;

    firstArray = new char[noOfQuestions + 1];
    secondArray = new char[noOfQuestions + 1];

    cout << "Processing Data" << endl;

    infile.get(firstArray, noOfQuestions + 1);

    cout << "Key: \t" << firstArray << endl;
    infile >> ID;

    infile.get(ch);
    infile.get(secondArray, noOfQuestions + 1);
   
    while (infile)  {
        len = strlen(secondArray);

        for (i = len; i < noOfQuestions; i++) {
            secondArray[i] = ' ';
            secondArray[noOfQuestions] = '\0';
        }

        score = 0;
        for (i = 0; i < noOfQuestions; i++)
        if (secondArray[i] != ' ') {
            if (secondArray[i] == firstArray[i])
            {
            score = score + 2;
            }
            cout << "Score = " << score << endl;
        } else {
            score = score - 1;
        }
        cout << ID << " " << secondArray << " " << score
        << " " << examGrade(score) << endl;
        infile >> ID;
        infile.get(ch);
        infile.get(secondArray, noOfQuestions + 1);
    }
    cout << endl;
    infile.close();
    return 0;
}


char examGrade(int score)   {
    switch (static_cast<int>(score / 40.0 * 10)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            return 'F';
        case 6:
            return 'D';
        case 7:
            return 'C';
        case 8:
            return 'B';
        case 9:
        case 10:
            return 'A';
        default:
            return 'F';
    }
}