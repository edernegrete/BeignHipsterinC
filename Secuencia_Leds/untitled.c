void main (void) {
	ANSEL= 0; 
	ANSELH = 0; 
	TRISE = 0; 
	PORTE = 1; 
	PORTD= 0; 
	TRISD= 0; 
	while(1){
		PORTC = 0B00000001; delay_ms(800); 
		PORTC = 0B00000010; delay_ms(800); 
		PORTC = 0B00000100; delay_ms(800); 
		PORTC = 0B00001000; delay_ms(800); 
		PORTC = 0B00010000; delay_ms(800); 
		PORTC = 0B00100000; delay_ms(800); 
		PORTC = 0B01000000; delay_ms(800);
	}
}
