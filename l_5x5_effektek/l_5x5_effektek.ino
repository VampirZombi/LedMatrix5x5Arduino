
int n = 12;
int x = 4;
int oszlop[5] = {3, 4, 5, 6, 7};
int sor[5] = {12, 11, 10, 9, 8};
int i;
int j = 4;
float eq = 1;
int db;
int db1;
int pulzus = 800;

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
void korbefut(){
  for(i = 0; i < 5; i++){
    for(db = 0; db < 5 * n; db++){
      bekapcs(0, i);
    }
  }
  for(j = 1; j < 5; j++){
    for(db = 0; db < 5 * n; db++){
      bekapcs(j, 4);
    }
  }
  for(i = 3; i >= 0; i--){
    for(db = 0; db < 5 * n; db++){
      bekapcs(4, i);
    }
  }
  for(j = 3; j >= 1; j--){
    for(db = 0; db < 5 * n; db++){
      bekapcs(j, 0);
    }
  }
}
//-----------------------------------
void A_betu(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i < 4) bekapcs(j, i);
        if(i == 1 || i == 4) bekapcs(j + 1, i);
        if(i == 1 || i == 4) bekapcs(j + 2, i);
        if(i < 4) bekapcs(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void B_betu(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 3)); db++){
      for(i = 0; i < 5; i++){
        bekapcs(j, i);
        if(i != 1 && i != 3) bekapcs(j + 1, i);
        if(i != 1 && i != 3) bekapcs(j + 2, i);
        if(i == 1 || i == 3) bekapcs(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void C_betu(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0 && i != 4) bekapcs(j, i);
        if(i == 0 || i == 4) bekapcs(j + 1, i);
        if(i == 0 || i == 4) bekapcs(j + 2, i);
        if(i == 0 || i == 4) bekapcs(j + 3, i);
      }
    }
  }
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
  for(j = x; j > -10; j--){
    for(db = 0; db < n - (n / 5); db++){
      for(i = 0; i < 5; i++){
        if(i == 2) bekapcs(j, i);
        if(i == 3) bekapcs(j + 1, i);
        if(i == 4) bekapcs(j + 2, i);
        if(i == 4) bekapcs(j + 3, i);
        if(i == 3) bekapcs(j + 4, i);
        if(i == 2) bekapcs(j + 5, i);
        if(i == 1) bekapcs(j + 6, i);
        if(i == 0) bekapcs(j + 7, i);
        if(i == 0) bekapcs(j + 8, i);
        if(i == 1) bekapcs(j + 9, i);
        if(i == 2) bekapcs(j + 10, i);
        if(i == 3) bekapcs(j + 11, i);
        if(i == 4) bekapcs(j + 12, i);
        if(i == 4) bekapcs(j + 13, i);
        if(i == 3) bekapcs(j + 14, i);
      }
    }
  }
  x = 0;
}
//-----------------------------------
void hosszabb_szinusz(){
  for(j = x; j > -16; j--){
    for(db = 0; db < n - (n / 1.5); db++){
      for(i = 0; i < 5; i++){
        if(i == 2) bekapcs(j, i);
        if(i == 3) bekapcs(j + 1, i);
        if(i == 3) bekapcs(j + 2, i);
        if(i == 4) bekapcs(j + 3, i);
        if(i == 4) bekapcs(j + 4, i);
        if(i == 4) bekapcs(j + 5, i);
        if(i == 3) bekapcs(j + 6, i);
        if(i == 3) bekapcs(j + 7, i);
        if(i == 2) bekapcs(j + 8, i);
        if(i == 1) bekapcs(j + 9, i);
        if(i == 1) bekapcs(j + 10, i);
        if(i == 0) bekapcs(j + 11, i);
        if(i == 0) bekapcs(j + 12, i);
        if(i == 0) bekapcs(j + 13, i);
        if(i == 1) bekapcs(j + 14, i);
        if(i == 1) bekapcs(j + 15, i);
        if(i == 2) bekapcs(j + 16, i);
        if(i == 3) bekapcs(j + 17, i);
        if(i == 3) bekapcs(j + 18, i);
        if(i == 4) bekapcs(j + 19, i);
      }
    }
  }
  x = 0;
}
//-----------------------------------
void haziko(){
  for(i = 0; i < 5; i++){
    if(i != 4 && i != 3) bekapcs(0, i);
    if(i != 4 && i != 1) bekapcs(1, i);
    if(i != 3 && i != 1) bekapcs(2, i);
    if(i != 4 && i != 1) bekapcs(3, i);
    if(i != 4 && i != 3) bekapcs(4, i);
  }
  return;
}
//-----------------------------------
void haromszogjel(){
  for(j = x; j > -8; j--){
    for(db = 0; db < n - (n / 10); db++){
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
  
  A_betu();
  B_betu();
  C_betu();
  delay(400);
  for(db1 = 0; db1 < n / 3; db1++) szivdobogas();
  delay(100);
  for(db1 = 0; db1 < n - (n / 3); db1++) haromszogjel();
  x = 4;
  delay(100);
  for(db1 = 0; db1 < 20 * n; db1++) haziko();
  delay(100);
  for(db1 = 0; db1 < n - (n / 3); db1++) szinusz();
  x = 4;
  delay(100);
  for(db1 = 0; db1 < n; db1++) korbefut();
  delay(100);
  for(db1 = 0; db1 < n - (n / 4); db1++) hosszabb_szinusz();
  x = 4;
  delay(100);
  
}
