#include<iostream>
using namespace std;

main()
{
    int f,s,i,siz,a=0;
	cout << "enter 4 diget num1 : ";
	cin >> f;
	cout << "enter 4 diget num2 : ";
	cin >> s;
	siz=(s-f)/4+1;
	int ar[siz];
    if(999<f){
        for(i=f; i<=s; i++){
		    if(i%4==0)
		    {
			    ar[a++]=i;
		    }
		    
		}
		for(i=1; i<siz; i++){
		    cout << ar[i] << " ";
	    }
	    
    }
    else{
  	    cout << "enter 4 diget";
    }
}
