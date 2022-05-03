
int n = 12;
int x = 4;
int oszlop[5] = {3, 4, 5, 6, 7};
int sor[5] = {12, 11, 10, 9, 8};
int i;
int j = 4;
float eq = 1;
int db;
int pulzus = 500; 

void setup(){
  for(i = 0; i < 5; i++){
    pinMode(oszlop[i], OUTPUT);
    digitalWrite(oszlop[i], HIGH);
    pinMode(sor[i], OUTPUT);
    digitalWrite(sor[i], LOW);
  }
}

void bekapcs(int a, int b){
        if(a >= 0 && a <= 4){
          digitalWrite(oszlop[a], LOW);
          digitalWrite(sor[b], HIGH);
          delayMicroseconds(500);
          digitalWrite(oszlop[a], HIGH);
          digitalWrite(sor[b], LOW);
        }
        else delayMicroseconds(600);
      return;
}
//-----------------------------------
void szivdobogas(){
  for(db = 0; db < n; db++){
    for(i = 0; i < 5; i++){
      if(i == 2 || i == 3) bekapcs(0, i);
      if(i != 0) bekapcs(1, i);
      if(i != 4) bekapcs(2, i);
      if(i != 0) bekapcs(3, i);
      if(i == 2 || i == 3) bekapcs(4, i);
    }
  }
  delay(pulzus / 4);
  for(db = 0; db < n; db++){
    for(i = 0; i < 5; i++){
      if(i == 2 || i == 3) bekapcs(0, i);
      if(i != 0) bekapcs(1, i);
      if(i != 4) bekapcs(2, i);
      if(i != 0) bekapcs(3, i);
      if(i == 2 || i == 3) bekapcs(4, i);
    }
  }
  delay(pulzus);
}
//-----------------------------------
void szinusz(){
  for(j = 0; j > -4; j--){
    for(db = 0; db < n + (n / 5); db++){
      for(i = 0; i < 5; i++){
        if(i == 2 || i == 3) bekapcs(j, i);
        if(i == 4) bekapcs(j + 1, i);
        if(i != 0 && i != 4) bekapcs(j + 2, i);
        if(i == 0) bekapcs(j + 3, i);
        if(i != 0 && i != 4) bekapcs(j + 4, i);
        if(i == 4) bekapcs(j + 5, i);
        if(i != 0 && i != 4) bekapcs(j + 6, i);
        if(i == 0) bekapcs(j + 7, i);
      }
    }
  }
}
//-----------------------------------
void haromszogjel(){
  for(j = x; j > -8; j--){
    for(db = 0; db < n + (n / 8); db++){
      for(i = 0; i < 5; i++){
        if(i == 2) bekapcs(j, i);
        if(i == 3) bekapcs(j + 1, i);
        if(i == 4) bekapcs(j + 2, i);
        if(i == 3) bekapcs(j + 3, i);
        if(i == 2) bekapcs(j + 4, i);
        if(i == 1) bekapcs(j + 5, i);
        if(i == 0) bekapcs(j + 6, i);
        if(i == 1) bekapcs(j + 7, i);
        if(i == 2) bekapcs(j + 8, i);
        if(i == 3) bekapcs(j + 9, i);
        if(i == 4) bekapcs(j + 10, i);
        if(i == 3) bekapcs(j + 11, i);
      }
    }
  }
  x = 0;
}
//-----------------------------------
void loop(){
  
  //szivdobogas();
  haromszogjel();
  
}
