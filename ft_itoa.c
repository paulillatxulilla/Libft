/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:16:55 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 16:33:00 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
    char *str;
    int	len = 1;//empieza en 1 porque se cuent aidvidiendo entre 10 y va a haber 1 que no cuente
    int nn = n; //preservar el valor original
    int temp;
	
    if (n < 0){//si es negativo
        nn = -n;// hacer valor absoluto
        len++;//que guarde un espacio para el -
    }
    temp = nn;//declarar aqui para evitar errores con el signo y trabajar con el valor abs
    while (temp >= 10){//contador de caracteres
        temp = temp / 10;//123 / 10 = 12, 3 -> un caracter contado
        len++;//va haciendo hueco a los caract contados
    }
    str = (char *)malloc(len + 1);
    
    if (str == NULL)
        return NULL;
        
    str[len] = '\0';//que el ultimo int de la cadenas sea nulo
    
    if(n < 0)
        str[0] = '-';
        
    if (n == 0)
        str[0] = '0';//si pasamos solo un 0 que nos ponga el 0 en ascii y tirando
        
    while (nn > 0) {//cuando es valor absoluto aka positivo 
        str[--len] = (nn % 10) + '0'; // nos quedamos con el resto, 123 / 10, coge el 3 y le suma '0' (sumar 48 en ascii)
        nn = nn / 10;//quit EL ULTIMO DIGITO para dividir sin ese
    }
    return str;
}

int main()
{
    int number = 0;  
    char *result = ft_itoa(number);

    if (result != NULL) 
    {
        printf("El número como cadena es: %s\n", result);
        free(result);  
    } 
    else 
        printf("Error al asignar memoria.\n");
    return 0;
}