#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int A[100] [100];
	int B[100] [100];
	int C[100] [100];
	int m,n,i,j,k,jwb,jwb1,jwb2,jwb3,jml=0;
	menu:
	cout<<"Matrik Berordo m x n"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Masukkan Banyaknya Baris (m)="; cin>>m;
	cout<<"Masukkan Banyaknya Kolom (n)="; cin>>n;
	cout<<"--------------------------------------"<<endl<<endl;
	cout<<"Apakah Data Di Atas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb2;
	if(jwb2==0){
		system("cls");
		goto menu;
	}
	else if(jwb2==1){
		system("cls");
	}
	if(m==n){
		mta:
		cout<<"Masukkan Data Matrik A"<<endl;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<"Masukkan Matriks A Baris Ke "<<i<<" Kolom Ke "<<j<<"="; cin>>A[i][j];
			}
		}
		cout<<endl;
		cout<<"Apakah Data Di Atas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb;
		if(jwb==0){
			system("cls");
			goto mta;
		}
		else if(jwb==1){
			system("cls");
		}
		
		mtb:
		cout<<"Masukkan Data Matrik B"<<endl;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<"Masukkan Matriks B Baris Ke "<<i<<" Kolom Ke "<<j<<"="; cin>>B[i][j];
			}
		}
		cout<<endl;
		cout<<"Apakah Data Di Atas Benar?(0=tidak dan mengisi kembali,1=iya)="; cin>>jwb1;
		if(jwb1==0){
			system("cls");
			goto mtb;
		}
		else if(jwb1==1){
			system("cls");
		}
		
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
			C[i][j]=A[i][j]-B[i][j];
			}
		}
		cout<<"Hasil Matriks A X Matriks B"<<endl;
		cout<<"----------------------------"<<endl;
		cout<<"Matriks A"<<endl;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<" "<<A[i][j]<<"|";
			}
			cout<<endl;
		}
		cout<<"----------------------------"<<endl;
		
		cout<<"----------------------------"<<endl;
		cout<<"Matriks B"<<endl;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<" "<<B[i][j]<<"|";
			}
			cout<<endl;
		}
		cout<<"----------------------------"<<endl;
		
		cout<<"----------------------------"<<endl;
		cout<<"Hasil Matriks A X Matriks B"<<endl;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				jml=0;
				for(k=1;k<=m;k++){
					jml=jml+A[i][k]*B[k][j];
				}
				C[i][j]=jml;
			}
		}
		
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				cout<<" "<<C[i][j]<<" | ";
			}
			cout<<endl;
		}
		cout<<"----------------------------"<<endl;
		
		cout<<"Apakah Mau Mengitung Lagi?(0=tidak,1=iya)="; cin>>jwb3;
		if(jwb3==1){
			system("cls");
			goto menu;
		}
		else if(jwb3==0){
			system("cls");
			cout<<"Terima Kasih :)"<<endl;
			cout<<"Press Any Key To End The Program...."; getch();
		}
	}
	
	else{
		system ("cls");
		cout<<"Ordo Tidak sama"<<endl;
		cout<<"Press Any Key To Continue...."; getch();
		system("cls");
		goto menu;
	}
	
}
