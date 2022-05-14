#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    bool append = true;
    auto status = ios :: in | ios :: out | ios :: app;
    if(!append)
        status = ios :: in | ios :: out | ios :: trunc;
    /*string file_name;                                  // if the file name is asked from user
    cout <<"Enter the file name : ";
    getline(cin, file_name);
    fstream file_handler(file_name, status);*/
    fstream file_handler("out.txt", status);
    if(file_handler.fail())
    {
        cout << "Can't open the file";
        return 0;
    }
    string first, second;
    //file_handler >> first >> second;
    //cout << first <<" "<< second<<endl;
    getline(file_handler, first);
    cout << first << endl;
    file_handler.clear();
    file_handler <<"\n";
    file_handler <<"NEW LINEEEEEEEEEEE";
    file_handler.close();
    return 0;
}
