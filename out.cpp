#include <iostream>
#include <cstdio>
using namespace std;
int main(){
float nums;
float a;
float b;
float c;
cout<<"How many fibonacci numbers do you want?"<<endl;
if(0 == scanf("%f", &nums)) {
nums = 0;
scanf("%*s");
}
cout<<""<<endl;
a = 0;
b = 1;
while(nums>0){
printf("%.2f\n", (float)(a));
c = a+b;
a = b;
b = c;
nums = nums-1;
}
return 0;
}
