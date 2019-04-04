float tabell[20];
float lager;
float temp;
int analogin=A0;
float spenning;
float z;
int y,x;
float sum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (analogin, INPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
     
}

void loop() {
  // put your main code here, to run repeatedly:
 

  for(int x = 0; x<20; x++){ //kjører tempmåling 20 ganger
    spenning=analogRead(analogin);
    z = spenning*(5000.0/1024);
    tabell[x]=(z-500)/10.0;
    
    Serial.print("mV:");
    Serial.println(z);
    delay(1000);
  }
    
    if(tabell[x]<=23.0){
      digitalWrite(4, LOW);
      analogWrite(6, 0);
      digitalWrite(5, LOW);
      }

    else if(tabell[x]>=24.0 && tabell[x]<=30.0){
      digitalWrite(4, LOW);
      analogWrite(6, 120);
      digitalWrite(5, HIGH);
     }
  else if(tabell[x]>30.0 && tabell[x]<=35.0){
      digitalWrite(4, LOW);
      analogWrite(6, 200);
      digitalWrite(5, HIGH);
     }
    else if(tabell[x]>35.0) {
      digitalWrite(4, LOW);
      analogWrite(6, 255);
      digitalWrite(5, HIGH);
    }
  

//sortering
for(x=0;x<19;x++){
  for(y=0;y<19;y++){
    if(tabell[y]>tabell[y+1]){
      lager=tabell[y];
      tabell[y]=tabell[y+1];
      tabell[y+1]=lager;
    }
  }
}

Serial.println(" ");

/*
for(x = 0; x < 19; x++)
{ Serial.println(tabell[x]);
  }
*/
  Serial.println("Verdiene:");

//sort(tabell);
Serial.print("Mintemp");
Serial.println(tabell[0]);
Serial.print("Makstemp");
Serial.println(tabell[19]);
Serial.print("Gjennomsnittstemp");
Serial.println((tabell[0]+tabell[1]+tabell[2]+tabell[3]+tabell[4]+tabell[5]+tabell[6]+tabell[7]+tabell[8]+tabell[9]
                +tabell[10]+tabell[11]+tabell[12]+tabell[13]+tabell[14]+tabell[15]+tabell[16]+tabell[17]+tabell[18]+tabell[19])/20.0);
delay(5000);
Serial.println(" ");

}
//take an array of 20 temp readings and return the average
/*
int average(float *temps){
  int avg;
  float sum;
  avg = 0;
  sum = 0.0;
  for(int i = 0;i < 20;i++)
    sum += temps[i];
  avg = (int)(sum/20);
  return avg;
} 
*/
/*int sort(float *temps){
  float buff;
  for(int i = 0;i < 20;i++){
    for(int j = 0;j < 20;j++){
      if(temps[j] > temps[j+1]){
        buff = temps[j+1];
        temps[j+1] = temps[j];
        temps[j] = buff;
      }
    }
  }
}*/
