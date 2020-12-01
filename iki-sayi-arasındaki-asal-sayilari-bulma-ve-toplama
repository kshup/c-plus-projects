#include <iostream>
using namespace std;


int main()
{
    int sayi1,sayi2,sayac,toplam=0;
    cout<<"1. Sayı : ";
    cin>>sayi1;
    if(sayi1==1)
    {
        sayi1++;
    }
    cout<<"2. Sayı : ";
    cin>>sayi2;
    for(int i=sayi1;i<=sayi2;i++)
    {
        sayac=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                sayac++;

                break;
            }
        }
        if(sayac==0)
        {
            toplam+=i;
            cout<<i<<"  ";
        }
    }
    cout<<"\nToplandık: "<<toplam;

}
