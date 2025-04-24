#include<iostream>
using namespace std; int main(){
	int total_belanja;
	cout<<"Masukan total belanja=";
	cin>>total_belanja;
	if(total_belanja>>=50000){
		cout<<"Selamat anda mendapatkan diskon Rp.5000"<<endl;
		total_belanja=total_belanja-5000;
	}
	cout<<"total belanja anda adalah="<<total_belanja<<endl;
	cout<<"terimakasih telah berbelanja ditoko kami"<<endl;
	return 0;
}
