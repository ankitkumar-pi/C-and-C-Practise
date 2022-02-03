#include <iostream> 
#include <vector>

int main(){
int sum = 0;
int mul = 1;
int count = 0;
std::vector<int> number = {2,4,3,6,1,9};

for(int i=0; i< number.size();i++){

  if(number[i] % 2 == 0){
    sum = sum + number[i]++ ;
    count = count + 1;

   
  }
  else{

    mul = mul* number[i];

  }
  
}
std::cout << sum/count << "\n";
std::cout << mul<< "\n";
}
