#include<iostream>
using namespace std;

void bakePiza();
void bakePiza(std :: string topping1,std :: string topping2);
int main(){
    bakePiza();
    bakePiza("pepperoni","salt");
    return 0;
}

void bakePiza(){
    cout<<"here is your pizza\n";
}
void bakePiza(std :: string topping1, std :: string topping2 ){
    cout<<"\nhere is your "<<topping1<<" and "<<topping2<<" pizza";
}