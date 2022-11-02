// S0101-Matos-Calculate-Final-Grades.cpp 
// Author:  V. Matos
// Goals:   Read a list of grades, calculate max, min, avg, and std.
//          USING VECTORS
// ------------------------------------------------------------------

//Preprocessor declaration
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//Global constants


//Prototypes
void getData(vector<int>& grades);
void calculateStats(vector<int> grades, int& maxGrade, int& minGrade, double& avgGrade);
void showResults(int maxGrade, int minGrade, double avgGrade);

int main()
{
    //variable declarations
    vector<int> grades;

    int minGrade, maxGrade, actualSize;
    double avgGrade, std;

    getData(grades);
    calculateStats(grades, maxGrade, minGrade, avgGrade);
    showResults(maxGrade, minGrade, avgGrade);

}

//User-defined functions
void getData(vector<int>& grades)
{
    //Accept individual grades
    int data;
    do
    {
        cout << "Enter grade [end with -1]: "; 
        cin >> data;
        if (data == -1) break;
        grades.push_back(data);
    } while (true);


}

void calculateStats(vector<int> grades, int& maxGrade, int& minGrade, double& avgGrade)
{
    maxGrade = grades[0];
    minGrade = grades[0];
    double sum = grades[0];

    for (int i = 1; i < grades.size(); i++)
    {
        sum += grades[i];

        if (grades[i] > maxGrade) maxGrade = grades[i];
        if (grades[i] < minGrade) minGrade = grades[i];
    }

    avgGrade = sum / grades.size();

}

void showResults( int maxGrade, int minGrade, double avgGrade)
{
    cout << "Max grade is: " << maxGrade << endl;
    cout << "Min grade is: " << minGrade << endl;
    cout << "Avg grade is: " << avgGrade << endl;
}