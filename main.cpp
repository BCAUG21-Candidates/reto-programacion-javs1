#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ancho(int anch);
void altura (int al);
void altura_anchura (int al, int anch);
void doble_linea (int al, int anch);

int main() {
	int num[10], i, al,anch;
	cout<<"Introduce maximo 10 numeros para imprimirlos en formato LCD: ";
	for(i = 0; i <= 9; i++){
	 cout<<i<<": ";
	 cin>>num[i];
	}
	cout<<"Introduce la altura: ";
	cin>>al;
	cout<<"Introduce el ancho: ";
	cin>>anch;

	for(i = 0; i <= 9; i++){
		cout<<"\n";
		cout<<"\n";
	switch(num[i]) {
	   case 1  :
	   		altura_anchura (al, anch);
	    break;
	      
	   case 2  :
			ancho (anch);
		 
			altura_anchura (al, anch);
			
			cout<<"\n";
			
			ancho (anch);
			
			altura (al);
			
			ancho (anch);
	    break; 
	      
	    case 3  :
	     	ancho (anch);
	     	
	    	altura_anchura (al, anch);
	    	
	    	cout<<"\n";
	    	
	      	ancho (anch);
	      	
			altura_anchura (al, anch);
			
			cout<<"\n";
			
			ancho (anch);
	    break; 
	      
	    case 4  :
	      	cout<<"\n";
	      	
	      	doble_linea (al, anch);
	      	
			cout<<" ";
			
			ancho (anch);
			
	      	altura_anchura (al, anch);
	    break; 
	    
	    case 5  :
	      	cout<<" ";
	      	
	    	ancho (anch);
	    	
	    	altura (al);
	    	
	    	ancho (anch);
	    	
	    	altura_anchura (al, anch);
	    	
	    	cout<<"\n";
	    	
	    	ancho (anch);
	    break; 
	    
	    case 6  :
	      cout<<" ";
	      
	      ancho (anch);
	      
	      altura (al);
	      
	      ancho (anch);
	      
	      cout<<"\n";
	      
	      doble_linea (al, anch);
	      
	      ancho (anch);
	      
	    break; 
	    
	    case 7  :
	      ancho (anch);
	      
	      altura_anchura (al, anch);
	    break;
		   
		case 8  :
	      ancho (anch);
	      
	      cout<<"\n";
	      
	      doble_linea (al, anch);
	      
	      ancho (anch);
	      
	      cout<<"\n";
	      
	      doble_linea (al, anch);
	      
	      ancho (anch);
	    break; 
	      
		case 9  :
	      ancho (anch);
	      
	      cout<<"\n";
	      
	      doble_linea (al, anch);
	      
	      ancho (anch);
	      
	      altura_anchura (al, anch);
	      
	      cout<<"\n";
	      
	      ancho (anch);
	    break; 
	  
	   default :
	      cout<<"Numero desconocido";
	      
		}
	}
}

void ancho (int anch){
	for(int ib=0; ib < anch; ib++){
		cout<<"_";
	}
}

void altura (int al){
	for(int i=0;i < al;i++){
			cout<<"\n";
			cout<<"|";
	}
}

void altura_anchura (int al, int anch){
	for(int i=0;i < al;i++){
			cout<<"\n";
			for(int ib=0;ib < anch; ib++){
			cout<<" ";
			}
			cout<<"|";
	}
}

void doble_linea (int al, int anch){
	for(int i=0;i < al;i++){
			cout<<"|";
			for(int ib=0;ib < anch-1; ib++){
			cout<<" ";
			}
			cout<<"|";
			cout<<"\n";
	}
}


