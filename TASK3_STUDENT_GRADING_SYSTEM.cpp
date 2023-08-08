#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<std::string> studentNames;
    vector<double> studentGrades;

    int numStudents;
    cout<<"Enter the number of students: ";
    cin>> numStudents;

    for(int i=0;i< numStudents; ++i) {
        string name;
        double grade;

        cout<<"Enter student name: ";
        cin>>name;
        studentNames.push_back(name);

        cout<<"Enter " << name << " 's grade: ";
        cin>>grade;
        studentGrades.push_back(grade);

    }

    double totalGrade =0;
    double highestGrade = studentGrades[0];
    double lowestGrade = studentGrades[0];

    for(double grade : studentGrades){
        totalGrade += grade;
        highestGrade =max(highestGrade, grade);
        lowestGrade = min(lowestGrade, grade);
    }

    double averageGrade = totalGrade / numStudents;

    cout<< "Syudent Grades Summary"<< endl;
    cout<< "----------------------"<< endl;
    for(int i=0;i< numStudents; ++i){
        cout<<studentNames[i]<<": "<< studentGrades[i]<< endl;
    }
    cout<<"-----------------------"<< endl;
    cout<<"Average Grade: "<< averageGrade<< endl;
    cout<<"Highest Grade: "<< highestGrade<< endl;
    cout<<"Lowest Grade: "<< lowestGrade<< endl;

    return 0;
}