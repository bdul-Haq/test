/*
 * main.c
 *
 *  Created on: 05/11/2012
 *      Author: Abdul-Haq
 */

#include <stdio.h>

int radius, area = 11;

int main()
{
	printf( "Enter radius (i.e. 10): " );
	scanf( "%d", &radius );
	area = (int) (3.14159 *radius*radius);
	printf( "\n\nArea = %d\n", area);


	return 0;
}
