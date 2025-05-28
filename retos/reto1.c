#include<stdio.h>
#include<math.h>

void encabezado(void);
int menu(void); 
int leyohm(void); 
void voltaje(void); 
void resistencia(void); 
void intensidad(void); 
int factorpotencia_menu(void);
void potencia_activa(void);
void potencia_aparente(void);
void factor_potencia(void);
void resistenciaconductor(void); 
int menu_led();
void resistencialed_serie(void);
void resistencialed_paralelo(void);

int main(void)

{
    int opciones, opciones_ohm, potencia_menu, menuled;
    
    do
    {
        opciones = menu();
        switch (opciones)
        {
        case 1:
            do
            {
            opciones_ohm = leyohm();
            switch (opciones_ohm)
            {
            case 1:
                voltaje();
                break;
            case 2:
                resistencia();
                break;
            case 3:
                intensidad();
                break;
            default:
                break;
            }
            } while (opciones_ohm != 4);
            break;

        case 2:
            do
            {
            potencia_menu = factorpotencia_menu();
            switch (potencia_menu)
            {
            case 1:
                potencia_activa();
                break;
            case 2:
                potencia_aparente();
                break;
            case 3:
                factor_potencia();
                break;
            default:
                break;
            }
            } while (potencia_menu != 4);
            break;

        case 3:
            resistenciaconductor();
            break;

        case 4:
            do
            {
            menuled = menu_led();
            switch (menuled)
            {
            case 1:
                resistencialed_serie();
                break;
            case 2:
                resistencialed_paralelo();
                break;
            }
            } while (menuled != 3);
            break;
        case 5: 
            printf("Usted ha salido de la calculadora, Hasta luego.\n");
            break;
        default:
            
            break;
        }
    }while (opciones != 5);
    {
        printf("opción no valida\n");
    }
    
    
    
}

int menu(void)
{
    int opciones;
    printf("bienvenido a la calculadora cientifica\n");
    printf("1. Ley de ohm\n 2. Factor de potencia\n 3. Calcular la resistencia de un Conductor\n 4. Calcular Valor de la Resistencia para un LED\n 5. Salir\n");
    scanf("%d",&opciones);
    return opciones;
}

int leyohm(void)
{
    int opciones_ohm;
    printf("usted ha elegido la ley de ohm, que desea calcular\n");
    printf("1. voltaje\n 2. resistencia\n 3. intensidad\n 4. Salir\n");
    scanf("%d",&opciones_ohm);
    return opciones_ohm;
}

void voltaje(void)
{
    float intensidad, resistencia, volt;
    printf("usted ha elegido calcular el voltaje\n");
    printf("ingrese su intensidad en amperios\n");
    scanf("%f",&intensidad);
    printf("ingrese su resistencia en ohmios\n");
    scanf("%f",&resistencia);
    volt = intensidad * resistencia;
    printf("el voltaje es %0.2f Voltios\n", volt);
}

void resistencia(void)
{
    float intensidad, resist, voltaje;
    printf("usted ha elegido calcular la resistencia\n");
    printf("ingrese intensidad en amperios");
    scanf("%f",&intensidad);
    printf("ingrese su voltaje en voltios");
    scanf("%f",&voltaje);
    resist = voltaje / intensidad;
    printf("La resistencia es es %f ohmios\n", resist);
}

void intensidad(void)
{
    float inten, resistencia, voltaje;
    printf("usted ha elegido calcular la intensidad\n");
    printf("ingrese la resistencia en ohmios");
    scanf("%f",&resistencia);
    printf("ingrese su voltaje en voltios");
    scanf("%f",&voltaje);
    inten = voltaje / resistencia;
    printf("la intensidad es %f A\n", inten);
}

int factorpotencia_menu(void)
{
    int potencia_menu;
    printf("usted ha elegido factor de potencia, que desea calcular\n");
    printf("1. potencia activa\n 2. potencia aparente\n 3. factor de potencia\n 4. Salir\n");
    scanf("%d",&potencia_menu);
    return potencia_menu;
}

void potencia_activa(void)
{
    float voltaje_eficaz, corriente_eficaz, factor_pot, potencia_act;
    printf("usted ha elegido calcular la potencia activa\n");
    printf("ingrese el voltaje eficaz en vatios(W)\n");
    scanf("%f", &voltaje_eficaz);
    printf("ingrese la corriente eficaz en amperios\n");
    scanf("%f", &corriente_eficaz);
    printf("ingrese el factor potencia (cos(theta)):\n");
    scanf("%f", &factor_pot);
    potencia_act = voltaje_eficaz * corriente_eficaz * factor_pot;
    printf("La potencia activa es %f \n", potencia_act);
}

void potencia_aparente(void)
{
    float voltaje_eficaz, corriente_eficaz, potencia_aparent;
    printf("usted ha elegido calcular la potencia aparente\n");
    printf("ingrese el voltaje eficaz en voltios\n");
    scanf("%f", &voltaje_eficaz);
    printf("ingrese la corriente eficaz en amperios\n");
    scanf("%f", &corriente_eficaz);
    potencia_aparent = voltaje_eficaz * corriente_eficaz;
    printf("el valor de la potencia aparente es %f \n", potencia_aparent);
}

void factor_potencia(void)
{
    float factor_pot, potencia_activa, potencia_aparente;
    printf("usted ha elegido calcular el factor potencia\n");
    printf("ingrese la potencia aparente en volt-amperios\n");
    scanf("%f", &potencia_aparente);
    printf("ingrese la potencia activa en watts\n");
    scanf("%f", &potencia_activa);
    factor_pot = potencia_activa / potencia_aparente;
    printf("el valor de la potencia aparente es %f \n", factor_pot);
}


void resistenciaconductor(void)
{
    int opcion_material;
    float resistividad, coef_temp, longitud, area, temperatura, resistencia;
    printf("usted ha decidido calcular la resistencia de un conductor\n");
    printf("Seleccione el material del conductor:\n 1. Oro\n 2. Aluminio\n 3. Cobre\n 4. Otro\n");
    scanf("%d", &opcion_material);

    switch (opcion_material) {
        case 1: //oro
            resistividad = 2.44e-8;
            coef_temp = 0.0034;
            break;
        
        case 2: //aluminio
            resistividad = 2.82e-8;
            coef_temp = 0.0039;
            break;
        
        case 3:  // Cobre
            resistividad = 1.68e-8;
            coef_temp = 0.00393;
            break;
            
        case 4:  // Oro
            printf("Ingrese la resistividad del material en ohm·metro: \n");
            scanf("%f", &resistividad);
            printf("Ingrese el coeficiente de temperatura en grados celcius: \n");
            scanf("%f", &coef_temp);
            break;
        default:
            printf("Opción no válida.\n");
            return;
    }

    printf("Ingrese la longitud del conductor en metros: \n");
    scanf("%f", &longitud);
    printf("Ingrese el área de la sección transversal (mm²): ");
    scanf("%f", &area);
    printf("Ingrese la temperatura final del conductor (°C): ");
    scanf("%f", &temperatura);

    resistencia = (resistividad * longitud / area) * (1 + coef_temp * (temperatura - 20));
    printf("La resistencia del conductor es: %.6f ohmios\n", resistencia);
}

int menu_led()
{
    int menuled;
    printf("usted ha elegido calcular la resistencia para un led, cual es la conexión del circuito?\n");
    printf("1. serie\n 2. paralelo\n");
    scanf("%d",&menuled);
    return menuled;

}

void resistencialed_serie(void)
{
    float resistencia, voltaje_fuente, voltaje_total_leds, voltaje_led, corriente_led, potencia_resistencia, potencia_total, corriente_total;
    int numero_leds;

    printf("Ingrese el voltaje de la fuente (V):");
    scanf("%f", &voltaje_fuente);

    printf("Ingrese el número de LEDs que va a utilizar: ");
    scanf("%d", &numero_leds);

    printf("Ingrese la tensión nominal de cada LED (Vf): ");
    scanf("%f", &voltaje_led);

    printf("Ingrese la corriente nominal de cada LED en amperios: ");
    scanf("%f", &corriente_led);

    voltaje_total_leds = numero_leds * voltaje_led;
    corriente_total = corriente_led;  

 
    if (voltaje_fuente <= voltaje_total_leds) {
        printf("Error: La tensión de la fuente es insuficiente para alimentar los LEDs en serie.\n");
        return ;
    }

    resistencia = (voltaje_fuente - voltaje_total_leds) / corriente_led;


    potencia_resistencia = corriente_led * corriente_led * resistencia;


    potencia_total = voltaje_fuente * corriente_led;

    printf("Resultados totales del circuito\n");
    printf("El valor de la resistencia: %.2f ohmios\n", resistencia);
    printf("La potencia disipada en la resistencia: %.2f vatios\n", potencia_resistencia);
    printf("La potencia total del circuito: %.2f vatios\n", potencia_total);
    printf("La corriente total suministrada por la fuente: %.3f amperios\n", corriente_total);
}

void resistencialed_paralelo(void)
{
    float voltaje_fuente, voltaje_led, corriente_led, resistencia, potencia_resistencia, potencia_total, corriente_total;
    int numero_leds;

    printf("Ingrese el voltaje de la fuente en voltios: ");
    scanf("%f", &voltaje_fuente);

    printf("Ingrese el número de LEDs que va a utilizar: ");
    scanf("%d", &numero_leds);

    printf("Ingrese el tensión nominal de cada LED en amperios: ");
    scanf("%f", &voltaje_led);

    printf("Ingrese la corriente nominal de cada LED en amperios: ");
    scanf("%f", &corriente_led);

    if (voltaje_fuente <= voltaje_led) {
        printf("Error: La tensión de la fuente es insuficiente para alimentar los LEDs en paralelo.\n");
        return ;
    }

    corriente_total = numero_leds * corriente_led;

    resistencia = (voltaje_fuente - voltaje_led) / corriente_total;

    potencia_resistencia = corriente_total * corriente_total * resistencia;

    potencia_total = voltaje_fuente * corriente_total;

    printf("resultados totales del circuito\n");
    printf("El valor de la resistencia es: %.2f ohmios\n", resistencia);
    printf("La potencia disipada en la resistencia es: %.2f vatios\n", potencia_resistencia);
    printf("La potencia total del circuito es: %.2f vatios\n", potencia_total);
    printf("La corriente total suministrada por la fuente es: %.3f amperios\n", corriente_total);
}