/* CONVERSION OF NUMBER SYSTEMS */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
char hn[100];

void d_binary(int);
void d_octal(int);
void d_hexa(int);
void b_decimal(int);
void b_octal(int);
void b_hexa(int);
void o_decimal(int);
void o_binary(int);
void o_hexa(int);
void h_decimal(int);
void h_binary(int);
void h_octal(int);

int main()
{
cout<<"\t\t\t\t\t\t_______________________________________________________________________";
cout<<endl<<endl<<"\t\t\t\t\t\t***WELCOME TO NUMBER SYSTEMS CONVERSION (FOR NON-FRACTIONAL NUMBER)***";
cout<<endl<<"\t\t\t\t\t\t_______________________________________________________________________";
char ch = 'y';
while(ch == 'Y' || ch == 'y')
{
cout<<endl<<endl<<"\t ENTER 1 FOR CONVERSION OF:"<<endl<<" \t\t "<<char(3)<<" DECIMAL TO BINARY"<<endl<<" \t\t "<<char(3)
<<" DECIMAL TO OCTAL"<<endl<<" \t\t "<<char(3)<<" DECIMAL TO HEXADECIMAL";
cout<<endl<<endl<<"\t ENTER 2 FOR CONVERSION OF:"<<endl<<" \t\t "<<char(3)<<" BINARY TO DECIMAL"<<endl<<" \t\t "<<char(3)
<<" BINARY TO OCTAL"<<endl<<" \t\t "<<char(3)<<" BINARY TO HEXADECIMAL";
cout<<endl<<endl<<"\t ENTER 3 FOR CONVERSION OF:"<<endl<<" \t\t "<<char(3)<<" OCTAL TO DECIMAL"<<endl<<" \t\t "<<char(3)
<<" OCTAL TO BINARY"<<endl<<" \t\t "<<char(3)<<" OCTAL TO HEXADECIMAL";
cout<<endl<<endl<<"\t ENTER 4 FOR CONVERSION OF:"<<endl<<" \t\t "<<char(3)<<" HEXADECIMAL TO DECIMAL"<<endl<<" \t\t "<<char(3)
<<" HEXADECIMAL TO BINARY"<<endl<<" \t\t "<<char(3)<<" HEXADECIMAL TO OCTAL";
int choice;
long int dn,bn,on;
cout<<endl<<endl<<"ENTER YOUR CHOICE (1,2,3,4):";
cin>>choice;
switch(choice)
{
case 1:
	{
		cout<<endl<<"Enter decimal number:";
		cin>>dn;
		d_binary(dn);
		d_octal(dn);
		d_hexa(dn);
		break;
	}
case 2:
	{
		cout<<endl<<"Enter binary number:";
		cin>>bn;
		b_decimal(bn);
		b_octal(bn);
		b_hexa(bn);
		break;
	}
case 3:
	{
		cout<<endl<<"Enter octal number:";
		cin>>on;
		o_decimal(on);
		o_binary(on);
		o_hexa(on);
		break;
	}
case 4:
	{
		cout<<endl<<"Enter hexadecimal number:";
		cin>>hn;
		int len = strlen(hn);
		h_decimal(len);
		h_octal(len);
		h_binary(len);
		break;
	}
default:
	{
		cout<<endl<<"INVALID CHOICE ";
	}
}
cout<<endl<<endl<<"WOULD YOU LIKE TO REPEAT PRESS (Y OR y):";
cin>>ch;
if(ch != 'Y' && ch != 'y')
{
cout<<endl<<"INVALID CHARACTER"<<endl<<endl<<"PROGRAM EXIT.";
exit(0);
}
}
return 0;
}
void d_binary(int dn)
{
	int b[1000];
	int i = 0,q = dn,k = 0;
	while(q != 0)
	{
	    b[i++] = q % 2;
		k++;
		q = q / 2;
	}
	cout<<endl<<"The number "<<dn<<" in binary is: ";
	for(i = k-1;i >= 0; i--)
		cout<<b[i];
	
}
void d_octal(int dn)
{
	int o[100];
	int i = 0,q = dn,k = 0;
	while(q != 0)
	{
	    o[i++] = q % 8;
		k++;
		q = q / 8;
	}
	cout<<endl<<"The number "<<dn<<" in octal is: ";
	for(i = k-1;i >= 0; i--)
	cout<<o[i];
}
void d_hexa(int dn)
{
	int h[1000];
	int i = 0,q = dn,k = 0;
	while(q != 0)
	{
	    h[i++] = q % 16;
		k++;
		q = q / 16;
	}
	cout<<endl<<"The number "<<dn<<" in hexadecimal is: ";
	for(i = k-1;i >= 0; i--)
	{
	if(h[i] < 10)
		cout<<h[i];
	else
		cout<<char(h[i]+55);
    }
}
void b_decimal(int bn)
{
	int i = 0,b[1000],q=bn,k=0,dec = 0;
	while(q != 0)
	{
		b[i++] = q % 10;
		k++;
		q = q / 10;
	}
	cout<<endl<<"The number "<<bn<<" in decimal is:";
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (b[i] * pow(2,i));	
	}
	cout<<dec;
}
void b_octal(int bn)
{
	int i = 0,b[1000],q=bn,k=0,dec = 0;
	while(q != 0)
	{
		b[i++] = q % 10;
		k++;
		q = q / 10;
	}
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (b[i] * pow(2,i));	
	}

	
	int x = 0,y = 0;
	int o[1000];
	int qoutient = dec;
	while(qoutient != 0)
	{
	    o[x++] = qoutient % 8;
		y++;
		qoutient /= 8;
	}
	cout<<endl<<"The number "<<bn<<" in octal is: ";
	for(i = y-1;i >= 0; i--)
	cout<<o[i];
}
void b_hexa(int bn)
{
	int i = 0,b[1000],q=bn,k=0,dec = 0;
	while(q != 0)
	{
		b[i++] = q % 10;
		k++;
		q = q / 10;
	}
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (b[i] * pow(2,i));	
	}

	
	int x = 0,y = 0;
	int h[1000];
	int qoutient = dec;
	while(qoutient != 0)
	{
	    h[x++] = qoutient % 16;
		y++;
		qoutient /= 16;
	}
	cout<<endl<<"The number "<<bn<<" in hexadecimal is: ";
	for(i = y-1;i >= 0; i--)
	{
	if(h[i] < 10)
		cout<<h[i];
	else
		cout<<char(h[i]+55);	
	}
}
void o_decimal(int on)
{
	int i = 0,o[100],q=on,k=0,dec = 0;
	while(q != 0)
	{
		o[i++] = q % 10;
		k++;
		q = q / 10;
	}
	cout<<endl<<"The number "<<on<<" in decimal is:";
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (o[i] * pow(8,i));	
	}
	cout<<dec;
}
void o_binary(int on)
{
	int i = 0,o[100],q=on,k=0,dec = 0;
	while(q != 0)
	{
		o[i++] = q % 10;
		k++;
		q = q / 10;
	}
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (o[i] * pow(8,i));	
	}
	
	
	int b[100];
	int x = 0,qoutient = dec,y = 0;
	while(qoutient != 0)
	{
	    b[x++] = qoutient % 2;
		y++;
		qoutient /= 2;
	}
	cout<<endl<<"The number "<<on<<" in binary is: ";
	for(i = y-1;i >= 0; i--)
		cout<<b[i];
}


void o_hexa(int on)
{
	int i = 0,o[100],q=on,k=0,dec = 0;
	while(q != 0)
	{
		o[i++] = q % 10;
		k++;
		q = q / 10;
	}
	for(i = k-1; i >= 0; i--)
	{
		dec = dec + (o[i] * pow(8,i));	
	}
	
	
	int h[100];
	int x = 0,qoutient = dec,y = 0;
	while(qoutient != 0)
	{
	    h[x++] = qoutient % 16;
		y++;
		qoutient /= 16;
	}
	cout<<endl<<"The number "<<on<<" in hexadecimal is: ";
	for(i = y-1;i >= 0; i--)
	{
		if(h[i] < 10)
			cout<<h[i];
		else
			cout<<char(h[i]+55);
	}
}
void h_decimal(int len)
{
	len = strlen(hn);
	int sum = 0, i,j = 0;
	for(i = len-1; i >= 0; i--)
	{
		if(hn[i] >= '0' && hn[i] <= '9')
		{
			sum = sum + (hn[i] - 48) * pow(16,j);
			j++;
		}
		else if(hn[i] >= 'A' && hn[i] <= 'F')
		{
			sum = sum + (hn[i] - 55) * pow(16,j);
			j++;
		}
	}
	cout<<endl<<"The number "<<hn<<" in Decimal is: "<<sum;
}
void h_binary(int len)
{
	len = strlen(hn);
	int sum = 0, i,j = 0;
	for(i = len-1; i >= 0; i--)
	{
		if(hn[i] >= '0' && hn[i] <= '9')
		{
			sum = sum + (hn[i] - 48) * pow(16,j);
			j++;
		}
		else if(hn[i] >= 'A' && hn[i] <= 'F')
		{
			sum = sum + (hn[i] - 55) * pow(16,j);
			j++;
		}
	}
	int b[100];
	int q = sum,k = 0,v = 0;
	while(q != 0)
	{
	    b[v++] = q % 2;
		k++;
		q = q / 2;
	}
	cout<<endl<<"The number "<<hn<<" in binary is: ";
	for(i = k-1;i >= 0; i--)
	cout<<b[i];
}

void h_octal(int len)
{
	len = strlen(hn);
	int sum = 0, i,j = 0;
	for(i = len-1; i >= 0; i--)
	{
		if(hn[i] >= '0' && hn[i] <= '9')
		{
			sum = sum + (hn[i] - 48) * pow(16,j);
			j++;
		}
		else if(hn[i] >= 'A' && hn[i] <= 'F')
		{
			sum = sum + (hn[i] - 55) * pow(16,j);
			j++;
		}
	}
	int o[100];
	int q = sum,k = 0,v = 0;
	while(q != 0)
	{
	    o[v++] = q % 8;
		k++;
		q = q / 8;
	}
	cout<<endl<<"The number "<<hn<<" in octal is: ";
	for(i = k-1;i >= 0; i--)
	cout<<o[i];
}
