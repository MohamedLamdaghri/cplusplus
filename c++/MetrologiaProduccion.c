#include <stdio.h>
#include <conio.h>
#include <math.h>


void criterioDeRechazo(double media, double desviacion){
    double k = 2.028;
    printf("Criterio de Rechazo: {max = %Lf, min = %Lf} \n", media + k*desviacion, media - k*desviacion);
}


double correccionDeCalibracion(double* datos, int tam, double media){
    
    double sum = 0;

    for(int i = 0; i < tam; i++){
        sum += datos[i] - media;
    }
    return sum / ((double)tam);
    
}

double desviacionTipica(double* datos, int tam, double media){
    double sum = 0;

    for(int i = 0; i < tam; i++){
        sum += (datos[i]-media)*(datos[i]-media);
    }
    return sqrt(sum/(tam-1));
}

double media(double *datos, int tam){
    int i; 
    double sum= 0;

    for(i = 0;i < tam; i++){
        sum += datos[i];    
    }

    return sum/(double)tam;
}

void guardarDatos(double* datos, int tam){
    int i;

    for(i = 0;i < tam; i++){
        printf("introduzca el dato numero %d: ", i);    
        scanf(" %Lf", &datos[i]);;    
        printf("%Lf \n", datos[i]);
    }

}

int main(){

    static double datos[1000] = {0};
    int tam = 0;

    do{
        printf("Introduzca el numero de datos muestreados: \n");
        scanf(" %d", &tam);
    }while(tam<0);

    guardarDatos(datos, tam);

    double m = media(datos, tam);
    double s = desviacionTipica(datos, tam, m);
    double c = correccionDeCalibracion(datos, tam, m);

    printf(" media: %Lf  , desviacion tipica: %Lf , correccion de calibracion: %Lf \n", m , s, c);
    criterioDeRechazo(m, s);
    system("pause");
    return 0;
    
}