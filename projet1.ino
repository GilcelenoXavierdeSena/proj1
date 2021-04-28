int ledg = 8;
int ledy = 9;
int ledr = 10;
int ledp = 2;

void setup()
{
    pinMode(ledg, OUTPUT);
    pinMode(ledy, OUTPUT);
    pinMode(ledr, OUTPUT);
    pinMode(ledp, OUTPUT);
}

void loop()
{

    digitalWrite(ledg, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(ledg, LOW);
    delay(10); // Wait for 1000 millisecond(s)

    digitalWrite(ledy, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(ledy, LOW);
    delay(10); // Wait for 1000 millisecond(s)

    digitalWrite(ledr, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(ledr, LOW);
    delay(10); // Wait for 1000 millisecond(s)

    digitalWrite(ledp, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(ledp, LOW);
    delay(10); // Wait for 1000 millisecond(s)
}
