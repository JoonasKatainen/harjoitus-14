#include <iostream>
using namespace std;
int main()
{
	char etunimet[30] = "";
	char sukunimi[20] = "";
	int kenganro;
	float koulumatka;
	char osoite[30]="";
	int postinumero;
	cout<<"Anna (kaikki) etunimesi"<<endl;
	cin.getline(etunimet,29);
	cout<<"Anna kengannumero"<<endl;
	cin >> kenganro;
	cout<<"Anna sukunimi"<<endl;
	cin>>ws;
	cin.getline(sukunimi,19);
	cout << "Anna koulumatka"<<endl;
	cin >> koulumatka;
	cout<< "Anna osoitteesi:"<<endl;
	cin>>ws;
	cin.getline(osoite,29);
	cout <<"Anna postinumero:"<<endl;
	cin >> postinumero;
	cout<<sukunimi<<" "<<etunimet<<endl<<osoite<<endl<<postinumero<<endl<<kenganro<<" "<<koulumatka<<endl;
return 0;
}