#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string fileName;
    cout<<"Enter the name of thr text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);
    if(!inputFile){
        cout<<"Error opening file. Make sure the file exists and the name is correct."<<endl;
        return 1;
    }

    string line;
    int wordCount =0;
    while(getline(inputFile, line)){
        istringstream iss(line);
        string word;

        while(iss>>word){
            wordCount++;
        }
    }
    inputFile.close();

    cout<<"Total number of words in the file: "<<wordCount<< endl;

    return 0;

}