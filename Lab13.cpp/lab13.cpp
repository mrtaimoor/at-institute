// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream file("name.txt");
//     file << "Taimoor" << endl;
//     file << "Fahma" << endl;
//     file << "Ahmed" << endl;
//     file << "Rumaisa" << endl;
//     file << "Huzifa" << endl;
//     file.close();
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    string line;
    ifstream file ("name.txt");
    if (file.is_open())
    {
    while ( file.good() )
    {
    getline (file,line);
    cout<< line <<endl;
    }
    file.close();
    cout<<"file ended \n";
    }
    else
    cout<<"Unable to open file";

    return 0;}
