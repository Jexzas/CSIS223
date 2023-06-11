#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct studentType {
  string studentFName;
  string studentLName;
  int testScore;
  string grade;  
};

void getStudents(studentType students[20]) {
    ifstream fin;
    fin.open("Ch9_Ex2Data.txt");
    for (int i = 0; i < 20; i++) {
        fin >> students[i].studentFName;
        fin >> students[i].studentLName;
        fin >> students[i].testScore; 
    }
    fin.close();
}

void assignGrades(studentType students[20]) {
    for (int i = 0; i < 20; i++) {
        if (students[i].testScore >= 90) {
            students[i].grade = "A";
        } else if(students[i].testScore >= 80) {
            students[i].grade = "B";
        } else if(students[i].testScore >= 70) {
            students[i].grade = "C";
        } else if(students[i].testScore >= 60) {
            students[i].grade = "D";
        } else if(students[i].testScore <= 59) {
           students[i].grade = "F"; 
        }
    }
}

int findHighScore(studentType students[20]) {
    vector<int> scoresArray;
    for (int i = 0; i < 20; i++) {
        if (students[i].testScore > students[i-1].testScore){
        scoresArray.push_back(students[i].testScore);
        };    
    }
    sort(scoresArray.begin(), scoresArray.end(), greater <int>());
    return scoresArray[0];
}

void outputAllStudents(studentType students[20]){ 
    ofstream fout;
    fout.open("Ch9_Ex2Out.txt");
    for (int i = 0; i < 20; i++) {
        fout << students[i].studentLName << ", " << students[i].studentFName << " " << students[i].testScore << " " << students[i].grade << endl;
    }
    fout.close();
}

void studentsWithHighScore(studentType students[20], int topGrade){
    for (int i = 0; i < 20; i++) {
        if (students[i].testScore == topGrade) {
            cout << "Students with the top score: " << endl << students[i].studentLName << ", " << students[i].studentFName << endl;
        }
    }
}


int main () {
    studentType students[20];
    getStudents(students);
    assignGrades(students);
    int highScore = findHighScore(students);
    studentsWithHighScore(students, highScore);
    outputAllStudents(students);
}