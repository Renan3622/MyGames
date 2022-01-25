  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char char_array[] = { 'J', 'o', 'g', 'o', 'e', 'm','c', '+', '+'};
    int i;
    for (i = 0; i < 9; i++) {
        cout<<char_array[i];
    }
    cout<<"\n";		

	char name[50];
	cout<<"Digite seu nome : ";
	cin>>name;

	
	int num;
	cout<<"Escolha um nivel de 1 a 3 : ";
	cin>>num;
	
	
    if (num == 1) {
        cout << "nivel facil";
    }
    else if (num == 2) {
        cout << "nivel normal";
    }
    else if (num == 3) {
        cout << "nivel dificil";
    }
    else {
        cout << "num : " << num;
    }
    
    cout<<"\n";
	printf("Bem vindo");
	cout<<"\n";
	puts(name);



}
 
