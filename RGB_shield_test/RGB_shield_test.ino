void setup() {
  //set all rows low (high=on)
  for (int i=2; i < 14; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, 0);
  }
  //set all columns high (low=on)
    for (int i=14; i < 20; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, 1);
  }
}

void loop() {
  for (int col=2; col<14; col++){
    digitalWrite(col,1);//turn column on
    for (int row=14; row<20;row++){    
      digitalWrite(row,0);//turn row on
      delay (500);  
      digitalWrite(row,1);//turn row off
    }
    digitalWrite(col,0);//turn column off
  }
}
