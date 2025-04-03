#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[100], str2[100], str3[100];
	
	cout<<"Enter 1st String: ";
	cin.getline(str1, 100);
	
	cout<<"Enter 2st String: ";
	cin.getline(str2, 100);
	
	cout<<"Length of 1st String:" <<strlen(str1)<<std::endl;
	cout<<"Length of 2nd String:" <<strlen(str2)<<std::endl;
	
	strcpy(str3,str1);
	cout<<"Copied 1st String:" <<str3<<std::endl;
	strcpy(str3,str2);
	cout<<"Copied 2nd String:" <<str3<<std::endl;
	
	strcat(str3,str1);
	cout<<"Concatenated String:" <<str3<<std::endl;
	
	int cmpResult = strcmp(str1,str2);
	if(cmpResult == 0){
		cout<<"Strings are Equal" <<std::endl;
	} else if (cmpResult = 0){
	cout<<"The 1st string is less than 2nd string." <<std::endl;
	} else {
		cout<<"the 1st string is greater than 2nd string" <<std::endl;
	}
	
	strlwr(str1);
	cout<<"The 1st string in lowercase:" <<str1 <<std::endl;
	
	strupr(str2);
	cout<<"The 2nd string in uppercase:" <<str2 <<std::endl;
	
	strrev(str1);
	cout<<"Reversed 1st string:" <<str1 <<std::endl;
	strrev(str2);
	cout<<"Reversed 2nd string:" <<str2 <<std::endl;	
	
	return 0;	
}
