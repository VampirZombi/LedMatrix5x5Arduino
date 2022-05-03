
int n = 14;
int stop_factor = 1;
int column[5] = {3, 4, 5, 6, 7};
int row[5] = {12, 11, 10, 9, 8};
int i;
int j = 4;
float eq = 1;
int db;

void setup(){
  for(i = 0; i < 5; i++){
    pinMode(column[i], OUTPUT);
    digitalWrite(column[i], HIGH);
    pinMode(row[i], OUTPUT);
    digitalWrite(row[i], LOW);
  }
}

void turnOnLed(int a, int b){
        if(a >= 0 && a <= 4){
          digitalWrite(column[a], LOW);
          digitalWrite(row[b], HIGH);
          delayMicroseconds(500);
          digitalWrite(column[a], HIGH);
          digitalWrite(row[b], LOW);
        }
        else delayMicroseconds(600);
      return;
}
//-----------------------------------
void A_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i < 4) turnOnLed(j, i);
        if(i == 1 || i == 4) turnOnLed(j + 1, i);
        if(i == 1 || i == 4) turnOnLed(j + 2, i);
        if(i < 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void B_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 3)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i != 1 && i != 3) turnOnLed(j + 1, i);
        if(i != 1 && i != 3) turnOnLed(j + 2, i);
        if(i == 1 || i == 3) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void C_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0 && i != 4) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i == 0 || i == 4) turnOnLed(j + 2, i);
        if(i == 0 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void D_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
	if(i == 0 || i == 4) turnOnLed(j + 1, i);
	if(i == 0 || i == 4) turnOnLed(j + 2, i);
	if(i != 0 && i != 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void E_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 3)); db++){
      for(i = 0; i < 5; i++){
	turnOnLed(j, i);
	if(i != 1 && i != 3) turnOnLed(j + 1, i);
	if(i != 1 && i != 3) turnOnLed(j + 2, i);
	if(i == 0 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void F_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 2 || i == 4) turnOnLed(j + 1, i);
        if(i == 2 || i == 4) turnOnLed(j + 2, i);
        if(i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void G_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 10)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0 && i != 4) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i != 1 && i != 3) turnOnLed(j + 2, i);
        if(i != 0 && i != 3) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void H_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
	turnOnLed(j, i);
	if(i == 2) turnOnLed(j + 1, i);
	if(i == 2) turnOnLed(j + 2, i);
	turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void I_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 8)); db++){
      for(i = 0; i < 5; i++){
        if(i == 0 || i == 4) turnOnLed(j, i);
        turnOnLed(j + 1, i);
        if(i == 0 || i == 4) turnOnLed(j + 2, i);
      }
    }
  }
}
//-----------------------------------
void J_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 4)); db++){
      for(i = 0; i < 5; i++){
        if(i == 1 || i == 4) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i != 0) turnOnLed(j + 2, i);
      }
    }
  }
}
//-----------------------------------
void K_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 2) turnOnLed(j + 1, i);
        if(i == 1 || i == 3) turnOnLed(j + 2, i);
        if(i == 0 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void L_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 3.5)); db++){
      for(i = 0; i < 5; i++){
	turnOnLed(j, i);
	if(i == 0) turnOnLed(j + 1, i);
	if(i == 0) turnOnLed(j + 2, i);
	if(i == 0) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void M_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 3)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 3) turnOnLed(j + 1, i);
        if(i == 2) turnOnLed(j + 2, i);
        if(i == 3) turnOnLed(j + 3, i);
        turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------
void N_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 3)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 2 || i == 3) turnOnLed(j + 1, i);
        if(i == 1) turnOnLed(j + 2, i);
        turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void O_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        if(i > 0 && i < 4) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i == 0 || i == 4) turnOnLed(j + 2, i);
        if(i > 0 && i < 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void P_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 10)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 2 || i == 4) turnOnLed(j + 1, i);
        if(i == 2 || i == 4) turnOnLed(j + 2, i);
        if(i == 3 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void Q_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0 && i != 4) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i != 1 && i != 3) turnOnLed(j + 2, i);
        if(i != 0 && i != 4) turnOnLed(j + 3, i);
        if(i == 0) turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------
void R_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        turnOnLed(j, i);
        if(i == 2 || i == 4) turnOnLed(j + 1, i);
        if(i == 1 || i == 2 || i == 4) turnOnLed(j + 2, i);
        if(i == 0 || i == 3) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void S_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        if(i == 0 || i == 3) turnOnLed(j, i);
        if(i != 1 && i != 3) turnOnLed(j + 1, i);
        if(i != 1 && i != 3) turnOnLed(j + 2, i);
        if(i == 1 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void T_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 8)); db++){
      for(i = 0; i < 5; i++){
        if(i == 4) turnOnLed(j, i);
        if(i == 4) turnOnLed(j + 1, i);
        turnOnLed(j + 2, i);
        if(i == 4) turnOnLed(j + 3, i);
        if(i == 4) turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------
void U_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        if(i != 0) turnOnLed(j, i);
        if(i == 0) turnOnLed(j + 1, i);
        if(i == 0) turnOnLed(j + 2, i);
        turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void V_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 8)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0) turnOnLed(j, i);
        if(i == 0) turnOnLed(j + 1, i);
        if(i != 0) turnOnLed(j + 2, i);
      }
    }
  }
}
//-----------------------------------
void W_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i != 0) turnOnLed(j, i);
	if(i == 0) turnOnLed(j + 1, i);
        if(i == 1 || i == 2) turnOnLed(j + 2, i);
	if(i == 0) turnOnLed(j + 3, i);
        if(i != 0) turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------
void X_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 7)); db++){
      for(i = 0; i < 5; i++){
        if(i != 2) turnOnLed(j, i);
        if(i == 2) turnOnLed(j + 1, i);
        if(i != 2) turnOnLed(j + 2, i);
      }
    }
  }
}
//-----------------------------------
void Y_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (n / 4.5)); db++){
      for(i = 0; i < 5; i++){
        if(i !=1 && i != 2) turnOnLed(j, i);
        if(i == 1 || i == 2) turnOnLed(j + 1, i);
        if(i == 2) turnOnLed(j + 2, i);
        if(i == 3 || i == 4) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void Z_letter(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n - (n / 5)); db++){
      for(i = 0; i < 5; i++){
        if(i != 2 && i != 3) turnOnLed(j, i);
        if(i != 1 && i != 3) turnOnLed(j + 1, i);
        if(i != 1 && i != 3) turnOnLed(j + 2, i);
        if(i != 1 && i != 2) turnOnLed(j + 3, i);
      }
    }
  }
}
//-----------------------------------
void exclamation(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < (n + (1.5 *(n / 5))); db++){
      for(i = 0; i < 5; i++){
	if(i != 1) turnOnLed(j, i);
	if(i != 1) turnOnLed(j, i);
	if(i != 1) turnOnLed(j, i);
      }
    }
  }
}
//-----------------------------------
void heart(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < n; db++){
      for(i = 0; i < 5; i++){
        if(i == 2 || i == 3) turnOnLed(j, i);
        if(i == 1 || i == 4) turnOnLed(j + 1, i);
        if(i == 0 || i == 3) turnOnLed(j + 2, i);
        if(i == 1 || i == 4) turnOnLed(j + 3, i);
        if(i == 2 || i == 3) turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------
void smiley_face(){
  for(j = 4; j > -5; j--){
    for(db = 0; db < 2 * n; db++){
      for(i = 0; i < 5; i++){
        if(i == 1) turnOnLed(j, i);
        if(i == 0 || i == 4) turnOnLed(j + 1, i);
        if(i == 0 || i == 2) turnOnLed(j + 2, i);
        if(i == 0 || i == 4) turnOnLed(j + 3, i);
        if(i == 1) turnOnLed(j + 4, i);
      }
    }
  }
}
//-----------------------------------------------
void character_5x5(char a){
  if(a == 'a' || a == 'A') A_letter();
  else if(a == 'b' || a == 'B') B_letter();
  else if(a == 'c' || a == 'C') C_letter();
  else if(a == 'd' || a == 'D') D_letter();
  else if(a == 'e' || a == 'E') E_letter();
  else if(a == 'f' || a == 'F') F_letter();
  else if(a == 'g' || a == 'G') G_letter();
  else if(a == 'h' || a == 'H') H_letter();
  else if(a == 'i' || a == 'I') I_letter();
  else if(a == 'j' || a == 'J') J_letter();
  else if(a == 'k' || a == 'K') K_letter();
  else if(a == 'l' || a == 'L') L_letter();
  else if(a == 'm' || a == 'M') M_letter();
  else if(a == 'n' || a == 'N') N_letter();
  else if(a == 'o' || a == 'O') O_letter();
  else if(a == 'p' || a == 'P') P_letter();
  else if(a == 'q' || a == 'Q') Q_letter();
  else if(a == 'r' || a == 'R') R_letter();
  else if(a == 's' || a == 'S') S_letter();
  else if(a == 't' || a == 'T') T_letter();
  else if(a == 'u' || a == 'U') U_letter();
  else if(a == 'v' || a == 'V') V_letter();
  else if(a == 'w' || a == 'W') W_letter();
  else if(a == 'x' || a == 'X') X_letter();
  else if(a == 'y' || a == 'Y') Y_letter();
  else if(a == 'z' || a == 'Z') Z_letter();
  else if(a == '!') exclamation();
}

//-----------------------------------------------

void loop(){
    character_5x5('p');
    character_5x5('e');
  delay(1000);
}
