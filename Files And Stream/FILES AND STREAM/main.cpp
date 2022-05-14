#include<iostream>
#include<fstream>
using namespace std;

int main() 
{
    /*int age;
    ofstream fout;
    fout.open("student_text.txt", ios::out | ios::app);
    if(fout.fail())
    {
        cout <<"Failed to create a file";
        return 0;
    }
    cout <<"Age = ";
    cin >> age;
    fout <<"age - " << age << endl;
    fout.close(); */
    string line;
    ifstream fin;
    fin.open("student_read.txt");
    if(fin.fail())
    {
        cout <<"failed"<< endl;
        return 0;
    }
    while(getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    
	return 0;
}
