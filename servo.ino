#include <Servo.h>

Servo myservo;  // crea el objeto servo

int pos = 0;    // posicion del servo

void setup() {
    myservo.attach(9);  // vincula el servo al pin digital 9
}

void loop() {
    //varia la posicion de 0 a 180, con esperas de 15ms
    for (pos = 0; pos <= 180; pos += 1)
    {
        myservo.write(pos);
        delay(15);
    }
    delay(1000);

    //varia la posicion de 180 a 0, con esperas de 15ms
    for (pos = 180; pos >= 0; pos -= 1)
    {
        myservo.write(pos);
        delay(15);
    }
    delay(1000);
}