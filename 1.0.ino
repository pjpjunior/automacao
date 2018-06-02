String lerSerial = "0";   // for incoming serial data
int botao1 = 16;
int botao2 = 17;
int botao3 = 18;
int botao4 = 19;
bool lerBotao1;
bool lerBotao2 ;
bool lerBotao3 ;
bool lerBotao4 ;

void setup() {
 pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);  // botoes
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);

pinMode(16, INPUT_PULLUP);  //A2
pinMode(17, INPUT_PULLUP);  //A3
pinMode(18, INPUT_PULLUP);  //A4
pinMode(19, INPUT_PULLUP);  //A5

 
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

 lerBotao1 = digitalRead(botao1);
 lerBotao2 = digitalRead(botao2);
 lerBotao3 = digitalRead(botao3);
 lerBotao4 = digitalRead(botao4);

  if ( lerBotao1 == LOW)
  {
    digitalWrite(2, !digitalRead(2));
    delay(1000);
  }

  if (lerBotao2 == LOW)
  {
    digitalWrite(3, !digitalRead(3));
    delay(1000);
  }

  if (lerBotao3 == LOW)
  {
    digitalWrite(4, !digitalRead(4));
    delay(1000);
  }

  if (lerBotao4 == LOW)
  {
    digitalWrite(5, !digitalRead(5));
    delay(1000);
  }


  if (Serial.available() > 0) {
    lerSerial = Serial.readString();
 //   Serial.print("I received: ");
 //   Serial.println(lerSerial);
  }
  {
    if (lerSerial == "led1") {
      digitalWrite(2, !digitalRead(2));
      lerSerial = "0";
      if (digitalRead(2) == HIGH) {
        Serial.println("led1 desligado");}
        else if (digitalRead(2) == LOW) {
        Serial.println("led1 ligado");}
    }

    else if (lerSerial == "led2") {
      digitalWrite(3, !digitalRead(3));
      lerSerial = "0";
      if (digitalRead(3) == HIGH) {
        Serial.println("led2 desligado");}
        else if (digitalRead(3) == LOW) {
        Serial.println("led2 ligado");}
    }

    else if (lerSerial == "led3") {
      digitalWrite(4, !digitalRead(4));
      lerSerial = "0";
      if (digitalRead(4) == HIGH) {
        Serial.println("led3 desligado");}
        else if (digitalRead(4) == LOW) {
        Serial.println("led3 ligado");}
    }

    else if (lerSerial == "led4") {
      digitalWrite(5, !digitalRead(5));
      lerSerial = "0";
      if (digitalRead(5) == HIGH) {
        Serial.println("led4 desligado");}
        else if (digitalRead(5) == LOW) {
        Serial.println("led4 ligado");}
  /*  }

    else if (lerSerial == "led12") {
      digitalWrite(12, !digitalRead(12));
      lerSerial = "0";
      if (digitalRead(12) == HIGH) {
        Serial.println("led12 ligado");}
        else if (digitalRead(12) == LOW) {
        Serial.println("led12 desligado");}
    }

    else if (lerSerial == "led13") {
      digitalWrite(13, !digitalRead(13));
      lerSerial = "0";
      if (digitalRead(13) == HIGH) {
        Serial.println("led13 ligado");}
        else if (digitalRead(13) == LOW) {
        Serial.println("led13 desligado");}
*/
    }


  }







}


