#include <iostream>
using namespace std;

char a[]={"Hello World"};

int main(){
	int i;
	char *p=a;
	for(i=0;i<sizeof(a);i++){
		cout<<*p<<"\t"<<p<<endl;
     	p++;
	}
	cout<<endl;
	Random rand = new Random(47);
	int n=rand.nextInt(20);
	cout<<n;
	return 0;
}
