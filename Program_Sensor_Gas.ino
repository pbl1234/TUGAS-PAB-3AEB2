
int sensor=A0; // pin sensor yaitu terletak pada pin A0 pada board arduino
int ledhijau=7; //pin ledhijau yaitu terletak pada pin 7 di board arduino
int ledkuning=8; //pin ledkuning yaitu terletak pada pin 8 di board arduino
int ledmerah=12; //pin ledmerah yaitu terletak pada pin 12 di board arduino
int buzzer=13; //pin buzzer yaitu terletak pada pin 13 di board arduino
int kipas=4; //pin kipas yaitu terletak pada pin 4 di board arduino

void setup(){
 
  pinMode(sensor, INPUT); // mengatur digital pin sebagai Input
  pinMode(ledhijau,OUTPUT); // mengatur digital pin sebagai Output
  pinMode(ledkuning,OUTPUT); // mengatur digital pin sebagai Output
  pinMode(ledmerah,OUTPUT); // mengatur digital pin sebagai Output
  pinMode(buzzer,OUTPUT); // mengatur digital pin sebagai Output
  pinMode(kipas,OUTPUT); // mengatur digital pin sebagai Output
  Serial.begin(9600); // menginisialisasi komunikasi serial pada 9600 bit per detik:
}

void loop(){
   
   sensor = analogRead(A0); // baca input pada pin analog 0
   Serial.println(sensor); // mencetak nilai sensor yang dibaca
  
 if(sensor<50){
    Serial.println(sensor); // mencetak nilai ruangan bersih yang dibaca
    digitalWrite(ledhijau,HIGH); // apabila nilai <50 maka ledhijau akan menyala
    digitalWrite(ledkuning,LOW); // apabila nilai <50 maka ledkuning akan padam
    digitalWrite(ledmerah,LOW); // apabila nilai <50 maka ledmerah akan padam
    digitalWrite(kipas,LOW); // apabila nilai <50 maka kipas tidak akan menyala
    noTone(buzzer); // apabila nilai <50 maka buzzer tidak akan menyala
    
 }
  else if(sensor>=50 && sensor<100){  
    Serial.println(sensor); // menampilkan nilai ruangan bersih yang dibaca
    digitalWrite(ledhijau,LOW); // apabila nilai >=50 maka ledhijau akan padam
    digitalWrite(ledkuning,HIGH); // apabila nilai >=50 maka ledkuning akan menyala
    digitalWrite(ledmerah,LOW); // apabila nilai >=50 maka ledmerah akan padam
    digitalWrite(kipas,HIGH); // apabila nilai >=50 maka kipas akan menyala
    noTone(buzzer); // apabila nilai >=50 maka buzzer tidak akan menyala

  }   else if(sensor>100){
    Serial.println(sensor); // menampilkan nilai ruangan bersih yang dibaca
    digitalWrite(ledhijau,LOW); // apabila nilai >100 maka ledhijau akan padam
    digitalWrite(ledkuning,LOW); // apabila nilai >100 maka ledkuning akan padam
    digitalWrite(ledmerah,HIGH); // apabila nilai >100 maka ledmerah akan menyala
    digitalWrite(kipas,HIGH); // apabila nilai >100 maka kipas akan menyala
    tone(buzzer,500,600); // apabila nilai >50 maka buzzer tidak akan menyala
   
   }
   delay (2000); //jeda selama 2 dtk
  }
  
