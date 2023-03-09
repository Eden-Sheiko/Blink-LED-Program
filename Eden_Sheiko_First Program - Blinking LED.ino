// Define pin 13 as output
#define TIME 1000
void setup()
{
  DDRB |= 0b00100000;
}

// Toggle pin 13 on/off every 1 second
void loop()
{
  // Turn pin 13 on
  PORTB |= 0b00100000;
  delay(TIME);
  // Turn pin 13 off
  PORTB &= 0b11011111;
  delay(TIME);
}
