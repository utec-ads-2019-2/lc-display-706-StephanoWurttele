#include <iostream>
#include <string>
//#include <fstream>

using namespace std;

//ofstream output;

string spaces[5]={"   ","  |","|  ","| |"," - "};

int SPN[10][5] = {
    {4,3,0,3,4},/*0*/
    {0,1,0,1,0},/*1*/
    {4,1,4,2,4},/*2*/
    {4,1,4,1,4},/*3*/
    {0,3,4,1,0},/*4*/
    {4,2,4,1,4},/*5*/
    {4,2,4,3,4},/*6*/
    {4,1,0,1,0},/*7*/
    {4,3,4,3,4},/*8*/
    {4,3,4,1,4}/*9*/

};

void printnumbers(int size, string s){
	string toprint="";
	for(int j=0;j<5;j++){
		for(int tamanho=0;tamanho<size;tamanho++){
			toprint="";
			for(int i=0;i<s.length();i++){
				toprint+=spaces[SPN[s[i]-'0'][j]][0];
				for(int k=0;k<size;k++){
					toprint+=spaces[SPN[s[i]-'0'][j]][1];
				}
				toprint+=spaces[SPN[s[i]-'0'][j]][2];
				toprint+=" ";
			}
			toprint.pop_back();
			cout<<toprint<<endl;
			if(j%2==0)
				break;
		}
	}
}



int main(){
	int size;
	char s[20];
//	output.open("output.txt");
	while(scanf("%d %s", &size, s)==2){
		if (size==0) break;
		else
			printnumbers(size,s);
		cout<<endl;
	}

}
