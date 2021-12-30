#include <stdlib.h>
#include <iostream>
using namespace std;

int min(int *tab, int dim);
int max(int *tab, int dim);
float avg(int *tab, int dim);

void sort(int *tab, int dim);



int main(int argc, char *argv[]){
    double f,c;
    int dim = argc-1;
    int tab[argc];
    for(int i=0;i<dim;i++){
        tab[i] = atof(argv[i+1]);
    }
    for(int i=0;i<dim;i++){
        cout<<tab[i]<<"|";}

    cout<<endl;

    cout<<"min="<<min(tab,dim)<<endl;
    cout<<"max="<<max(tab,dim)<<endl;
    cout<<"avg="<<avg(tab,dim)<<endl;
    sort(tab,dim);

    return 0;
}

int min(int *tab, int dim){
    int m=*tab;
    for(int i=1;i<dim;i++){
        if(m>*(tab+i)) swap(m, *(tab+i));
    }
    return m;
}

int max(int *tab, int dim){
    int m=*tab;
    for(int i=1;i<dim;i++){
        if(m<*(tab+i)) swap(m, *(tab+i));
    }
    return m;
}

float avg(int *tab, int dim){
    float suma=0;
    for(int i=0;i<dim;i++){
        suma+=*(tab+i);
    }
    suma/=dim;
    return suma;
}


void sort(int *tab, int dim){
    for(int j=1;j<dim; j++){
        for(int i=0;i<dim-1;i++){
            if(*(tab+i)>*(tab+i+1)) swap(*(tab+i),*(tab+i+1));
        }
    }

    for(int i=0;i<dim;i++){
        cout<<*(tab+i)<<"|";
    }
}