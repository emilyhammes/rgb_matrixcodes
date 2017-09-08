const int col1r = 4;
const int col2r = 7;
const int col3r = 10;
const int col4r = 13;
const int col1g = 3;
const int col2g = 6;
const int col3g = 9;
const int col4g = 12;
const int col1b = 2;
const int col2b = 5;
const int col3b = 8;
const int col4b = 11;

const int row1 = 14;
const int row2 = 15;
const int row3 = 16;
const int row4 = 17;
const int row5 = 18;
const int row6 = 19;
unsigned long t2 = 0;
//int Apin = 14;

const int row[] = {row6, row5, row4, row3, row2, row1};
const int col[] = {col1b, col1g, col1r, col2b, col2g, col2r, col3b, col3g, col3r, col4b, col4g, col4r};
const int sizerow = sizeof(row) / sizeof(row[0]);
const int sizecol = sizeof(col) / sizeof(col[0]);
int offset = 0;
int active = 0;

int image1[] = {
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  1, 0, 0,  1, 0, 0,  1, 0, 0,  1, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 1,  0, 0, 0,  0, 0, 0,
  0, 0, 1,  0, 0, 1,  0, 0, 1,  0, 0, 0,
  0, 0, 0,  0, 0, 1,  0, 0, 1,  0, 0, 1,
  0, 0, 1,  0, 0, 1,  0, 0, 1,  0, 0, 0,
  0, 0, 0,  0, 0, 1,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 1, 0,  0, 1, 0,  0, 1, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 1, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 1, 0,
  0, 1, 0,  0, 1, 0,  0, 1, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  1, 1, 1,  1, 1, 1,  1, 1, 1,  1, 1, 1,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  1, 1, 1,  0, 0, 0,
  0, 0, 0,  1, 1, 1,  0, 0, 0,  1, 1, 1,
  0, 0, 0,  1, 1, 1,  0, 0, 0,  1, 1, 1,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  1, 1, 1,  1, 1, 1,  1, 1, 1,  1, 1, 1,
  0, 0, 0,  1, 1, 1,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  1, 1, 1,  1, 1, 1,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  1, 0, 1,  0, 0, 0,  0, 0, 0,
  1, 0, 1,  1, 0, 1,  1, 0, 1,  0, 0, 0,
  0, 0, 0,  1, 0, 1,  1, 0, 1,  1, 0, 1,
  1, 0, 1,  1, 0, 1,  1, 0, 1,  0, 0, 0,
  0, 0, 0,  1, 0, 1,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  1, 1, 0,  0, 0, 0,
  0, 0, 0,  1, 1, 0,  0, 0, 0,  1, 1, 0,
  0, 0, 0,  1, 1, 0,  0, 0, 0,  1, 1, 0,
  1, 1, 0,  1, 1, 0,  1, 1, 0,  1, 1, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  1, 1, 0,  0, 0, 0,  1, 1, 0,  1, 1, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  1, 1, 0,  0, 0, 0,
  0, 0, 0,  1, 1, 0,  0, 0, 0,  1, 1, 0,
  0, 0, 0,  1, 1, 0,  0, 0, 0,  1, 1, 0,
  0, 0, 0,  0, 0, 0,  0, 0, 0,  0, 0, 0,
  1, 1, 0,  1, 1, 0,  1, 1, 0,  1, 1, 0,
  0, 0, 0,  1, 1, 0,  0, 0, 0,  0, 0, 0,
  0, 0, 0,  0, 0, 0,  1, 1, 0,  1, 1, 0,

};
const int sizeimage1 = sizeof(image1) / sizeof(image1[0]);

int imageR[] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1};
int imageG[] = {0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0};
int imageB[] = {1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};


void setup() {
  Serial.begin(9600);
  for (int r = 0; r < sizerow; r++) {
    pinMode (row[r], OUTPUT); //Set all pins to output
    Serial.print(row[r]);
    Serial.println(" Output ");

  }
  for (int c = 0; c < sizecol; c++) {
    pinMode(col[c], OUTPUT);
    Serial.print(col[c]);
    Serial.println(" Output ");
  }
}

void loop() {


  if (millis() > t2) {
    //shift images down
    offset += sizecol;

    t2 = millis() + 500;
  }


  //loop through images
  for (active = 0; active < sizerow; active++) {
    readLineMode();
  }
}

void readLineMode() {
  for (int c = 0; c < sizecol; c++) {
    digitalWrite(col[c], image1[(c + offset + active * sizecol) % sizeimage1]);
    //  Serial.println(offset%(sizeimage1/sizecol));
    //      Serial.println(offset%(sizeimage1/sizecol));

  }

  digitalWrite(row[active], LOW);
  delay(1);
  digitalWrite(row[active], HIGH);
}
void redMode() {
  for (int r = 0; r < sizerow; r++) {
    digitalWrite(row[r], LOW);
  }
  for (int c = 0; c < sizecol; c++) {
    digitalWrite(col[c], imageR[c]);
  }
}

void greenMode() {
  for (int r = 0; r < sizerow; r++) {
    digitalWrite(row[r], LOW);
  }
  for (int c = 0; c < sizecol; c++) {
    digitalWrite(col[c], imageG[c]);
  }
}

void blueMode() {
  for (int r = 0; r < sizerow; r++) {
    digitalWrite(row[r], LOW);
  }
  for (int c = 0; c < sizecol; c++) {
    digitalWrite(col[c], imageB[c]);
  }
}

void offMode()
{
  for (int r = 0; r < sizerow; r++) {
    digitalWrite(row[r], HIGH);
  }
  for (int c = 0; c < sizecol; c++) {
    digitalWrite(col[c], LOW);
  }
}


