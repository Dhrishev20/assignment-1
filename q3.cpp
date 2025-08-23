#include<iostream>
using namespace std;
int main() 
{ 
int i; 
int arr[5] = {1}; 
for (i = 0; i < 5; i++) 
printf("%d",arr[i]);   //here output is 10000 as 0 index is 1 and rest are 0
return 0; 
}