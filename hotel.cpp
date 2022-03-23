#include <iostream>
using namespace std;
int main(){
int age;
string  name;
int chose ;
int softdrink;
int chosetype;
int pol=18;
int card;
int ver;

cout <<"\t \t \t==================================\n";
cout<<"\t \t \t   welcome to Emran py store"<<endl;
cout<<"\t \t \t==================================="<<endl;
cout<<"Enter your name"<<endl;
cin>>name;
cout <<"hello "<< name <<" Enter your age"<<endl;
cin>>age;

cout <<"age confirmed"<<endl;
//
cout <<"1.order new item"<<endl;
cout<<"2.use Api"<<endl;
cout<<"3.payment history "<<endl;
cout<<"4.exit the app"<<endl;
cin>>chosetype;
if (chosetype==1){
cout <<"what did you wanna to order"<<endl;
cout<<"1.softdrink  2.fast food 3.beer 4.exit"<<endl;
cin>>chose;
if (chose==1){
cout<<"1.cooke 2.fanta 3.spting 4.water 5.exit"<<endl;
cin>>softdrink;
if (softdrink ==1){
cout <<"cooke cost $2.5 please Enter your credit card"<<endl;
cin>>card;
cout <<"pleae take a time and start ordering"<<endl;
} else if (softdrink==2){
cout<<"sorry currnetly we are not selling fanta"<<endl;

} else if (softdrink==3){
cout<<"sptins is free take one"<<endl;
} else if (softdrink==4){
cout<<"water costs $2.5"<<endl;

} else
return 0;
}else if (chose==2){
cout <<"fastfood starts at 2:50 Pm please come back agin"<<endl;

} else if (chose==3){
if (pol>age){
cout<<"sorry "<<name<<" beer is not allowed for teenagers"<<endl;

}else {
cout <<"beer costs $3.40"<<endl;
}
}

} else if (chosetype==2){
cout<<"===================="<<endl;
cout <<"human verficarion "<<endl;
cout<<"====================="<<endl;

cout <<"what is the output of this code"<<endl;
cout<<"------------------------------------"<<endl;
cout <<"include <iostream> \n using namespace st; \n int main() { \n cout <<hash is not in iostream<<endl;\n }"<<endl;


cout<<"1.error 2.hello world 3. main 4. noting"<<endl;

for (int i=0; i<2; i++){
cin>>ver;
if (ver==1){
cout <<"human verfication confirmed"<<endl;
cout<<"--------------------------------"<<endl;
cout<<"we are developing the Api we will let u know once we build secure Api"<<endl;
return 0;
} else if (ver!=1){
cout <<"please try again later"<<endl;
}
}
cout <<"please try again later"<<endl;
return 0;
}

else if (chosetype==3){
cout <<"you don't have a payment history"<<endl;

}
 else
cout<<"thank you "<< name <<" for your time have a nice day "<<endl;
return 0;
}
