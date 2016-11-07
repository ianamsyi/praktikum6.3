void setup() {
TCCR1A=0x00;
TCCR1B=0x06;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

}

void loop() {
  // put your main code here, to run repeatedly:

}
