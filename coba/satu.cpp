#include <iostream.h>
#include <conio.h>
void main()
{
    int x, y, angka;
    cout<<"Masukkan Bilangan = ";
    cin>>angka;
    clrscr();
    for (x=1;x<=angka;x++)
    {
       for (y=1;y<=x;y++)
       cout<<"*";
       cout<<endl;
    }
    angka=angka-1;
    for (x=angka;x>=1;x--)
    {
       for (y=1;y<=x;y++)
       cout<<"*";
       cout<<endl;
    }
    getch();
}
