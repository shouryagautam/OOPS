#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int count( ) {
    ifstream file("story.txt");
    
    int lineCount = 0;
    string line;
    while (getline(file, line)) {
        if (!line.empty() && line[0] != 'A') {
            ++lineCount;
        }
    }

    return lineCount;
}

int main(){
	
	cout<<"Number of lines not starting with A : "<<count()<<endl;
	
	
	return 0;
}