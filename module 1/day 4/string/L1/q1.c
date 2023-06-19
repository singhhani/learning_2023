#include <stdio.h> 
int main(){
	char s[101];
	scanf("%s", &s);   
	for(int i=0;i<101;i++)
	{
		if(s[i]==0){
			break;
		}
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
		else if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
		} else {
			printf("inv");
			return 1;
		}
	}
	printf("%s", s);       
}