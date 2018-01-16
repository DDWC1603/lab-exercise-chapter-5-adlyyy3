//Akmal Adli bin Ariffin
//A17DW0074
#include <iostream>
using namespace std;
void masuk_tak();
int main()
{
	masuk_tak();
	return 0; 
	

}

void masuk_tak()
{
	char ans,c;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	

	ans=' ';
	while(ans!='y' and ans!='y'){
		cin>>ans;
		if(ans!='n' and ans!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		}

	if(c=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}


