#include<stdio.h>

void encabezado(void);
int menu(void);

int main(void)
{
    int opciones, opciones_ohm;
    
    do
    {
        opciones = menu();
        switch (opciones)
        {
        case 1:
            int leyohm();
            break;

        
        
        default:
            break;
        }
    }while (opciones != 5);
    {
        /* code */
    }
    
    
    
}

int menu(void)
{
    int opciones;
    printf("bienvenido a la calculadora cientifica\n");
    printf("1. Ley de ohm\n 2. Factor de potencia\n 3. Calcular la resistencia de un Conductor\n 4. Calcular Valor de la Resistencia para un LED\n 5. Salir");
    scanf("%d",&opciones);
    return opciones;
}

int leyohm(void)
{
    int opciones_ohm;
    printf("usted ha elegido la ley de ohm, que desea calcular\n");
    printf("1. voltaje\n 2. resistencia\n 3. intensidad\n 4. Salir");
    scanf("%d",&opciones_ohm);
    return opciones_ohm;
}

int voltaje(void)
{
    float intensidad, resistencia, voltaje;
    printf("usted ha elegido calcular el voltaje\n");
    printf("ingrese su intensidad en amperios");
    scanf("%f",&intensidad);
    printf("ingrese su resistencia en ohmios");
    scanf("%f",&resistencia);
    voltaje = intensidad * resistencia;
    printf("el voltaje es %f", voltaje, "voltios\n");
}

int resistencia(void)
{
    float intensidad, resistencia, voltaje;
    printf("usted ha elegido calcular la resistencia\n");
    printf("ingrese intensidad en amperios");
    scanf("%f",&intensidad);
    printf("ingrese su voltaje en voltios");
    scanf("%f",&voltaje);
    resistencia = voltaje / intensidad;
    printf("la resistencia es es %f", resistencia, "ohmios\n");
}

int resistencia(void)
{
    float intensidad, resistencia, voltaje;
    printf("usted ha elegido calcular la intensidad\n");
    printf("ingrese la resistencia en ohmios");
    scanf("%f",&resistencia);
    printf("ingrese su voltaje en voltios");
    scanf("%f",&voltaje);
    intensidad = voltaje / resistencia;
    printf("la intensidad es %f", voltaje ,"voltios\n");
}

int factor_potencia(void)
{
    float potencia_activa, potencia_aparente, factor_potencia;
    printf("usted ha elegido calcular el factor de potencia\n");
    printf("ingrese la potencia activa en vatios(W)");
    scanf("%f", &potencia_activa);
    printf("ingrese la potencia aparente en voltamperios");
    scanf("%f", &potencia_aparente);
    factor_potencia = potencia_activa / potencia_aparente;
    printf("el factor de potencia es %f", factor_potencia, "\n");
}

int resistencia_conductor(void) 
{
    float resistividad, longitud, area, resistencia;
    printf("usted ha decicido calcular la resistencia de un conductor");
    printf("Ingrese la resistividad del material en Ohm*metro: ");
    scanf("%f", &resistividad);
    printf("Ingrese la longitud del conductor en metros: ");
    scanf("%f", &longitud);
    printf("Ingrese el area de la seccion transversal en metros cuadrados: ");
    scanf("%f", &area);
    resistencia = (resistividad * longitud) / area;
    printf("La resistencia del conductor es: %f", resistencia, "ohmios\n");
}

int resistencia_led(void)
{
    float resistencia, voltaje_fuente, caida_voltaje_led, corriente_led;
    printf("usted ha elegido calcular el valor de la resistencia pra un led");
    printf("ingrese el voltaje de la fuente en voltios");
    scanf("%f", &voltaje_fuente);
    printf("ingrese la caida del voltaje del led en voltios");
    scanf("%f", &caida_voltaje_led);
    printf("ingrese la corriente recomendada del led en amperios");
    scanf("%f", &corriente_led);
    resistencia = (voltaje_fuente - caida_voltaje_led) / corriente_led;
    printf("el valor de la resistencia para el led es de: %f", resistencia, "ohmios\n");
}