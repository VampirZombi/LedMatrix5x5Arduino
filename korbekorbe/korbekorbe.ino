
int n = 30;
int oszlop[5] = {3, 4, 5, 6, 7};
int sor[5] = {12, 11, 10, 9, 8};
int i, j;
int db;

void setup(){
  for(i = 0; i < 5; i++){
    pinMode(oszlop[i], OUTPUT);
    digitalWrite(oszlop[i], HIGH);
    pinMode(sor[i], OUTPUT);
    digitalWrite(sor[i], LOW);
  }
}

void kikuld(int a, int b){
        digitalWrite(oszlop[a], LOW);
        digitalWrite(sor[b], HIGH);
        delay(1);
        digitalWrite(oszlop[a], HIGH);
        digitalWrite(sor[b], LOW);
        return;
}

void korbefut(){
  for(i = 0; i < 5; i++){
    for(db = 0; db < n; db++){
      kikuld(0, i);
    }
  }
  for(j = 1; j < 5; j++){
    for(db = 0; db < n; db++){
      kikuld(j, 4);
    }
  }
  for(i = 3; i >= 0; i--){
    for(db = 0; db < n; db++){
      kikuld(4, i);
    }
  }
  for(j = 3; j >= 1; j--){
    for(db = 0; db < n; db++){
      kikuld(j, 0);
    }
  }
}

void loop(){
  
  korbefut();
  
}
