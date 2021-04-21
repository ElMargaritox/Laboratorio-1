
// 6.	Construya un programa que genere la siguiente serie: 1, 5, 3, 7, 5, 9, 7, ..., 23 hasta llegar al número más próximo al 100.


#include <iostream>

using namespace std;

main(){
	
	for (int i = 1; i < 97; i-=2){
		
			cout<<i<<endl;
			i +=4;
			cout<<i<<endl;
	}
	
	system("pause");
}