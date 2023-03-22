#include<stdio.h>
#include<string.h>

int main () {


 char email[50];
 char pass[20];
 
 char correctemail[] ="zxy123@gmail.com";
 char correctpass[] = "abc@123";
 
 
 printf(" Enter email : ");
 scanf("%s",email);
 
 printf(" Enter pass : ");
 scanf("%s",pass);
 
 if(strcmp(email, correctemail) == 0 || strcmp(pass, correctpass) == 0){
 	printf("Login is successful");
 }
 else{
 	printf("pls try again");
 }
 
 return 0; 
}
