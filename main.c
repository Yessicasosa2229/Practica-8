
#include "lib/include.h"

int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();

    // variables for counting
    //int count = 0;
   // float dec = 0.0;

        while ( 1 ) {
            
            /////////////////////
            // Strings
            ///////////////////
            
             OLED_YX( 0, 0 );
             OLED_Write_String( "YESSICA" );
                             Delay_ms(1000);

             OLED_YX(1, 1);
             OLED_Write_String ("PRACTICA 8 :)");
                         Delay_ms(1000);
            
            /////////////////////
            // Integer Count
                    Delay_ms(100);
        }
}
