#include <stdio.h>

float fahrenheit2celsius(float f_degrees);
float celsius2fahrenheit(float c_degrees);
float rankine2kelvin(float rankine);
float kelvin2rankine(float kelvin);
float feet2meters(float feet);
float meters2feet(float meters);
float feet2miles(float ft);
float miles2feet(float miles);
float gallons2liters(float gallons);
float liters2gallons(float liters);

int main(){

        int    	
        	  //user input
        float f, c, r, kl, ft, m, mi, g, l;
 		 	  //dumy holdings
        float fd, cd, k, rn, fl, ml, md, gv, lv;

        printf("Tempeture\n");

        printf("Enter Tempeture in Fahrenheit:");
        	scanf("%f", &f);
        cd = fahrenheit2celsius(f);
        printf("Your Tempeture in Celsius is: %f\n", cd);

        printf("Enter Tempeture in Celsius:");
        	scanf("%f", &c);
        fd = celsius2fahrenheit(c);
        printf("Your Tempeture in Fahreneit is: %f\n", fd);

        printf("Enter Tempeture in Kelvin");
        	scanf("%f", &kl);
        rn = kelvin2rankine(kl);
        printf("Your Tempeture in Rankine is: %f\n", rn); 

        printf("Enter Tempeture in Rankine:");
        	scanf("%f", &r);
        k = rankine2kelvin(r);
        printf("Your Tempeture in Kelvin is: %f\n", k);

        printf("Distance\n");

        printf("Enter Feet:");
        	scanf("%f", &ft);
        ml = feet2meters(ft);
        printf("Your Distance in Meters is: %f\n", ml);

        printf("Enter Meters:");
        	scanf("%f", &m);
        fl = meters2feet(m);
        printf("Your Distance in Feet is: %f\n", fl);

        printf("Enter feet:");
        	scanf("%f", &ft);
        md = feet2miles(ft);
        printf("Your Distance in Miles is: %f\n", md);

        printf("Enter Miles:");
            scanf("%f", &mi);
        fl = miles2feet(mi);
        printf("Your Distance in Feet is: %f\n", fl);

        printf("Volume\n");

        printf("Enter Gallons:");
        	scanf("%f", &g);
        lv = gallons2liters(g);

        printf("Enter Liters:");
        	scanf("%f", &l);
        gv = liters2gallons(l);
        printf("Your Volume in Gallons is: %f\n", gv);

return 0;
}

// assignment 

float fahrenheit2celsius(float f_degrees){
        return (f_degrees - 32) * 0.5556;
}
float celsius2fahrenheit(float c_degrees){
        return c_degrees * 1.8 + 32;
}
float feet2meters(float feet){
        return feet * 0.3048;
}
float meters2feet(float meters){
        return meters * 3.280839896;
}

float gallons2liters(float gallons){
        return gallons * 3.785411784;
}
float liters2gallons(float liters){
        return liters * 0.2641720524;
}

// added practice

float rankine2kelvin(float rankine){
		return rankine / 1.8;
}
float kelvin2rankine(float kelvin){
		return kelvin * 1.8; 
}
float feet2miles(float ft){
		return ft * .0001893939;
}
float miles2feet(float miles){
		return miles * 5280;
}