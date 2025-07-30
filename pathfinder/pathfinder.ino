int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

int count = 4;

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}



void loop() {

  if (digitalRead(BUT1) == HIGH) {
    count++;
  }

  if (digitalRead(BUT2) == HIGH) {
    count--;
  }

  if (digitalRead(BUT3) == HIGH) {
    count = 4;
  }

  if (count < 0) {
    count = 0;
  } else if (count > 7) {
    count = 7;
  }

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);

  if (count % 2 == 1) {
    digitalWrite(LED3, HIGH);
  }

  if (count >= 4) {
    digitalWrite(LED1, HIGH);
  }

  if (count - 4 >= 2) {
    digitalWrite(LED2, HIGH);
  }
}


