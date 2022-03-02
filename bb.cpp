#include <iostream>
#include <bitset>
using namespace std;

int main(){
	string name = "Ratchanon Thuknuek";
	cout<<name<<endl;
	int count = 0;
	string valuearr[17] = {};
	string Darrays[9][2];
	string Dnarrays[9][2];

	for(int i = 0; i < name.length(); ++i){
		std::bitset<8> value = std::bitset<8>(name.c_str()[i]);
		string bitsetvalue = value.to_string();
		valuearr[i] = bitsetvalue;
	}

	int valcount = 0;
	for(int j = 0; j < 9; j++){
		for(int k = 0; k < 2; k++){
			if(valcount == 18){
				break;
			}
			Darrays[j][k] = valuearr[valcount];
			string test = "Ratchanon Thuknuek";
			Dnarrays[j][k] = test[valcount];
			valcount++;
		}
	}	
	cout<<Darrays[0][1]<<endl; // This will Be a Binary 
 	cout<<Dnarrays[0][1]<<endl; // This will Be a Char
}
