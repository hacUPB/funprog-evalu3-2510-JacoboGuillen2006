## Calculadora de ingenieria

Inicio

Repetir

    Escribir "Menú Principal"
    Escribir "1. Ley de Ohm"
    Escribir "2. Factor de Potencia"
    Escribir "3. Calcular resistencia de un conductor"
    Escribir "4. Calcular resistencia para un LED"
    Escribir "5. Salir"

    Leer opciones

    Segun opciones Hacer

        Caso 1:  // Ley de Ohm

            Repetir
                Escribir "Seleccione una opción"
                Escribir "1. Calcular voltaje"
                Escribir "2. Calcular resistencia"
                Escribir "3. Calcular corriente"
                Escribir "4. Salir"

                Leer opciones_leyohm

                Segun opciones_leyohm Hacer

                    Caso 1:  // Voltaje
                        Escribir "Ingrese valores para la corriente y la resistencia"
                        Leer corriente, resistencia
                        voltaje = corriente * resistencia
                        Escribir "El voltaje es:", voltaje, "voltios"

                    Caso 2:  // Resistencia
                        Escribir "Ingrese valores para el voltaje y la corriente"
                        Leer voltaje, corriente
                        resistencia = voltaje / corriente
                        Escribir "La resistencia es:", resistencia, "ohmios"

                    Caso 3:  // Corriente
                        Escribir "Ingrese valores para el voltaje y la resistencia"
                        Leer voltaje, resistencia
                        corriente = voltaje / resistencia
                        Escribir "La corriente es:", corriente, "amperios"

                Fin Segun

            Hasta Que opciones_leyohm = 4

        Caso 2:  // Factor de potencia

            Repetir
                Escribir "Seleccione una opción"
                Escribir "1. Potencia activa"
                Escribir "2. Potencia aparente"
                Escribir "3. Factor de potencia"
                Escribir "4. Salir"

                Leer opciones_factorpotencia

                Segun opciones_factorpotencia Hacer

                    Caso 1:  // Potencia activa
                        Escribir "Ingrese voltaje eficaz, corriente eficaz y factor de potencia"
                        Leer voltaje, corriente, factor
                        potencia_activa = voltaje * corriente * factor
                        Escribir "La potencia activa es:", potencia_activa

                    Caso 2:  // Potencia aparente
                        Escribir "Ingrese voltaje eficaz y corriente eficaz"
                        Leer voltaje, corriente
                        potencia_aparente = voltaje * corriente
                        Escribir "La potencia aparente es:", potencia_aparente

                    Caso 3:  // Factor de potencia
                        Escribir "Ingrese potencia activa y potencia aparente"
                        Leer potencia_activa, potencia_aparente
                        factor = potencia_activa / potencia_aparente
                        Escribir "El factor de potencia es:", factor

                Fin Segun

            Hasta Que opciones_factorpotencia = 4

        Caso 3:  // Resistencia de un conductor

            Escribir "Seleccione el material:"
            Escribir "1. Oro"
            Escribir "2. Aluminio"
            Escribir "3. Cobre"
            Escribir "4. Otro"

            Leer opcion_material

            Si opcion_material = 1 Entonces
                resistividad = 2.44e-8
                coef_temp = 0.0034
            SiNo Si opcion_material = 2 Entonces
                resistividad = 2.82e-8
                coef_temp = 0.0039
            SiNo Si opcion_material = 3 Entonces
                resistividad = 1.68e-8
                coef_temp = 0.00393
            SiNo Si opcion_material = 4 Entonces
                Escribir "Ingrese resistividad y coef. temperatura"
                Leer resistividad, coef_temp
            Fin Si

            Escribir "Ingrese longitud, área y temperatura"
            Leer longitud, area, temperatura

            resistencia = (resistividad * longitud / area) * (1 + coef_temp * (temperatura - 20))

            Escribir "La resistencia del conductor es:", resistencia, "ohmios"

        Caso 4:  // Resistencia para LED

            Repetir
                Escribir "Seleccione tipo de conexión"
                Escribir "1. Serie"
                Escribir "2. Paralelo"
                Escribir "3. Salir"

                Leer menuled

                Segun menuled Hacer

                    Caso 1:  // Serie
                        Escribir "Ingrese voltaje fuente, número de LEDs, voltaje LED, corriente LED"
                        Leer voltaje_fuente, numero_leds, voltaje_led, corriente_led

                        voltaje_total = numero_leds * voltaje_led

                        Si voltaje_fuente <= voltaje_total Entonces
                            Escribir "Error: Voltaje insuficiente"
                        SiNo
                            resistencia = (voltaje_fuente - voltaje_total) / corriente_led
                            potencia_resistencia = corriente_led ^ 2 * resistencia
                            potencia_total = voltaje_fuente * corriente_led
                            corriente_total = corriente_led

                            Escribir "Resistencia:", resistencia
                            Escribir "Potencia resistencia:", potencia_resistencia
                            Escribir "Potencia total:", potencia_total
                            Escribir "Corriente total:", corriente_total

                    Caso 2:  // Paralelo
                        Escribir "Ingrese voltaje fuente, número de LEDs, voltaje LED, corriente LED"
                        Leer voltaje_fuente, numero_leds, voltaje_led, corriente_led

                        corriente_total = numero_leds * corriente_led

                        Si voltaje_fuente <= voltaje_led Entonces
                            Escribir "Error: Voltaje insuficiente"
                        SiNo
                            resistencia = (voltaje_fuente - voltaje_led) / corriente_total
                            potencia_resistencia = corriente_total ^ 2 * resistencia
                            potencia_total = voltaje_fuente * corriente_total

                            Escribir "Resistencia:", resistencia
                            Escribir "Potencia resistencia:", potencia_resistencia
                            Escribir "Potencia total:", potencia_total
                            Escribir "Corriente total:", corriente_total

                Fin Segun

            Hasta Que menuled = 3

        Caso 5:  // Salida
            Escribir "Gracias por usar la calculadora"

        Otro:
            Escribir "Opción no válida"

    Fin Segun

Hasta Que opciones = 5

Fin
