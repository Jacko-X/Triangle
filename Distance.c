/* C Program by Jacqueline Plata for CS1310 8/29/2023

   This Program will calculates distance given a rate and a time*/
   
   #include<stdio.h>
   
   
   
   void main(void)
   {
   	double rate, time, distance; /*rate in mph, time in hr, d = mph*hr*/
   	
   	printf("This program calculate the distance you wil go.\n\n");
   	
   	rate = 90.0;
   	time = 90.0;
   	distance = rate * time;
   	
   	printf("You went %.4lf miles at %.2lf mph for %.2lf hours.\n\n",
   	        distance, rate, time);
   	
   	
   	
   	
   }
   
