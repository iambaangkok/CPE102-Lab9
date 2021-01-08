#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main (){
	ifstream inputFile;
	inputFile.open("score.txt");
	
	string input;
    long long int count = 0;
    double mean = 0, sd = 0;
	while(getline(inputFile,input)){
        double x = stod(input);
        mean += x;
        sd += pow(x,2);

        count++;
	}
    inputFile.close();


    mean /= count;
    sd = sqrt(sd/count - pow(mean,2));

    /*inputFile.open("score.txt");
    for(int i = 0 ; i < count ; ++i){
        getline(inputFile,input);
        double x = stod(input);
        sd += pow((x-mean),2);
        
    
    }inputFile.close();
    sd /= count;
    sd = sqrt(sd);*/


    cout << "Number of data = " << count << endl;
    cout << setprecision(3) << "Mean = " << mean << endl;
    cout << setprecision(3) << "Standard deviation = " << sd;




	return 0;
}
