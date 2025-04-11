#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float c1=0.0;
	float c2=0.0;
	float c3=0.0;
	float promedio=0.0;
	cout<< "dame la calificacion 1:";
	cin>>c1;
	cout<< "dame la calificacion 2:";
	cin>>c2;
	cout<< "dame la calificacion 3:";
	cin>>c3;
	promedio=(c1+c2+c3)/3;
	cout<< "el promedio de calificaciones es: " <<promedio<<"/n";
	system("pause");
	printf("dame la calificacion 1:");
	scanf("%f",&c1);
	printf("dame la calificacion 2:");
	scanf("%f",&c2);
	printf("dame la calificacion 3:");
	scanf("%f",&c3);
	promedio=(c1+c2+c3)/3;
	printf("el proemdio de calificaciones es: %7.2f",promedio);
	return 0;
	
	
}