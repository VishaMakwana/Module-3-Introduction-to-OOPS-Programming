#include<iostream>
using namespace std;

float calculate(float length, float width){
  
   return length * width;
}

int main(){
    float length,width,Area;

    cout<<"Enter the length";
    cin>>length;

    cout<<"Enter the width";
    cin>>width;

   Area=calculate(length,width);

   cout<<"Area of reactangle:"<<Area;

   return 0;

}