#include <iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0};
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

	char grade;
	int cnt = 0;
	do{
		cout << "Student [" << cnt+1 << "]: ";
		cin >> grade; 
		if(grade == '0'){
			break;
		}else if(grade == 'A'){
			count[grade-'A']++;
		}else if(grade == 'B'){
			count[grade-'A']++;
		}else if(grade == 'C'){
			count[grade-'A']++;
		}else if(grade == 'D'){
			count[grade-'A']++;
		}else if(grade == 'F'){
			count[4]++;
		}else{
			cout << "Wrong input. Please input again." << endl;
			continue;
		}
		cnt++;
	}while(true);
	
	
	cout << "In total "<< cnt<< " students." << endl;
	for(int i = 0 ; i < 5; ++i){
		if(i == 4){
			cout << 'F' << " = " << count[i];
		}else{
			cout << (char)('A'+i) << " = " << count[i] <<", ";
		}

	}
	return 0;
}