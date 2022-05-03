char adat;
int n = 60;
int oszlop[5] = {3, 4, 5, 6, 7};
int sor[5] = {12, 11, 10, 9, 8};
int i, is;
int j, js;
int db;
char bejovo_adat = 'S';
char ertek;
int irany;
int kilep;


void setup(){
  Serial.begin(9600);
  for(i = 0; i < 5; i++){
    pinMode(oszlop[i], OUTPUT);
    digitalWrite(oszlop[i], HIGH);
    pinMode(sor[i], OUTPUT);
    digitalWrite(sor[i], LOW);
  }
  i = 0;
  j = 0;
  is = 0;
  js = 0;
  irany = 1;
  kilep = 0;
}
//-----------------------------------
int check(){
    bejovo_adat = Serial.read();
    if (bejovo_adat == 'F') ertek = 'F';
    else if (bejovo_adat == 'B') ertek = 'B';
    else if (bejovo_adat == 'L') ertek = 'L';
    else if (bejovo_adat == 'R') ertek = 'R';
  return(ertek);
}
//-----------------------------------
void bekapcs(int a, int b){
        if(a >= -1 && a <= 5 && b >= -1 && b <= 5){
          if(a == -1) a = 4;
          if(a == 5) a = 0;
          if(b == -1) b = 4;
          if(b == 5) b = 0;
          digitalWrite(oszlop[a], LOW);
          digitalWrite(sor[b], HIGH);
          delay(1);
          digitalWrite(oszlop[a], HIGH);
          digitalWrite(sor[b], LOW);
        }
        else delayMicroseconds(1100);
      return;
}
//-----------------------------------

void loop(){
  
  kilep = 0;
  if(irany == 1){
    for(j = js; j < 5; j++){
      for(db = 0; db < n; db++){
        bekapcs(j, is);
        bekapcs(j - 1, is);
        if(Serial.available() > 0){
          adat = check();
          if(adat != 'R' && adat != 'L'){
            kilep = 1;
            break;
          }
        }
      }
      if(kilep == 1){
        js = j;
        break;
      }
      if(j == 4) js = 0;
    }
  }
  else if(irany == 3){
    for(j = js; j >= 0; j--){
      for(db = 0; db < n; db++){
        bekapcs(j, is);
        bekapcs(j + 1, is);
        if(Serial.available() > 0){
          adat = check();
          if(adat != 'L' && adat != 'R'){
            kilep = 1;
            break;
          }
        }
      }
      if(kilep == 1){
        js = j;
        break;
      }
      if(j == 0) js = 4;
    }
  }
  
  kilep = 0;
  if(adat == 'F' && irany != 4 && irany != 2){
    irany = 2;
    if(is != 4) is++;
    else is = 0;
  }
  else if(adat == 'B' && irany != 2 && irany != 4){
    irany = 4;
    if(is != 0) is--;
    else is = 4;
  }
  
  if(irany == 2){
    for(i = is; i < 5; i++){
      for(db = 0; db < n; db++){
        bekapcs(js, i);
        bekapcs(js, i - 1);
        if(Serial.available() > 0){
          adat = check();
          if(adat != 'F' && adat != 'B'){
            kilep = 1;
            break;
          }
        }
      }
      if(kilep == 1){
        is = i;
        break;
      }
      if(i == 4) is = 0;
    }
  }
  else if(irany == 4){
    for(i = is; i >= 0; i--){
      for(db = 0; db < n; db++){
        bekapcs(js, i);
        bekapcs(js, i + 1);
        if(Serial.available() > 0){
          adat = check();
          if(adat != 'B' && adat != 'F'){
            kilep = 1;
            break;
          }
        }
      }
      if(kilep == 1){
        is = i;
        break;
      }
      if(i == 0) is = 4;
    }
  }
  
  if(adat == 'R' && irany != 3 && irany != 1){
    irany = 1;
    if(js != 4) js++;
    else js = 0;
  }
  else if(adat == 'L' && irany != 1 && irany != 3){
    irany = 3;
    if(js != 0) js--;
    else js = 4;
  }
  
}
