#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream file1("input1.txt");
    fstream file2("input2.txt");
    fstream file3("output.txt",ios::app);
    string line;
    
    cout<<endl<<"Content of the first file"<<endl;
    
    while (getline(file1, line)) {
        cout << line << '\n';
        file3 << line << '\n';
    }
    
    cout<<endl<<"Content of the second file"<<endl;
    while (getline(file2, line)) {
        cout << line << '\n';
        file3 << line << '\n';
    }
    file3.close();
    file3.open("output.txt");

    
    cout<<endl<<"Content of the third file"<<endl;
    
    while (getline(file3, line)) {
        cout << line << '\n';
    }
    
    file1.close();
    file2.close();
    file3.close();
    
	  
    return 0;
}
