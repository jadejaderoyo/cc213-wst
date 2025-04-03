#include<iostream>
#include<cstring>

int main(){
	char str1[100], str2[100], str3[100];
	
	std::cout<<"Enter 1st String: ";
	std::cin.getline(str1, 100);
	
	std::cout<<"Enter 2st String: ";
	std::cin.getline(str2, 100);
	
	std::cout<<"Length of 1st String:" <<strlen(str1)<<std::endl;
	std::cout<<"Length of 2st String:" <<strlen(str2)<<std::endl;
	
	strcpy(str3,str1);
	std::cout<<"Copied 1st String:" <<str3<<std::endl;
	strcpy(str3,str2);
	std::cout<<"Copied 2nd String:" <<str3<<std::endl;
	
	strcat(str3,str1);
	std::cout<<"Concatenated String:" <<str3<<std::endl;
	
	int cmpResult = strcmp(str1,str2);
	if(cmpResult == 0){
		std::cout<<"Strings are Equal" <<std::endl;
	} else if (cmpResult = 0){
	std::cout<<"The 1st string is less than 2nd string." <<std::endl;
	} else {
		std::cout<<"the 1st string is greater than 2nd string" <<std::endl;
	}
	
	strlwr(str1);
	std::cout<<"The 1st string in lowercase:" <<str1 <<std::endl;
	
	strupr(str2);
	std::cout<<"The 2nd string in uppercase:" <<str2 <<std::endl;
	
	strrev(str1);
	std::cout<<"Reversed 1st string:" <<str1 <<std::endl;
	strrev(str2);
	std::cout<<"Reversed 2nd string:" <<str2 <<std::endl;	
	
	return 0;	
}
