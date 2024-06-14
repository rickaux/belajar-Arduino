const int LedP = 12; //led putih di pint 12
const int LedH = 11; //led Hijau di pin 11
const int LedK = 10; //led Kuning di pint 10
const int pbP = 9; //tombol kiri nyalain LedP
const int pbH = 8; //tombol kanan nyalain LedH
void setup() {
  pinMode(LedP, OUTPUT); //mengubah fungsi menjadi mengeluarkan tegangan
  pinMode(LedH, OUTPUT);//mengubah fungsi menjadi mengeluarkan tegangan
  pinMode(LedK, OUTPUT);//mengubah fungsi menjadi mengeluarkan tegangan
  pinMode(pbP, INPUT);//mengubah fungsi menjadi menerima signal tegangan
  pinMode(pbH, INPUT);//mengubah fungsi menjadi menerima signal tegangan
}

void loop() {
 /* if(digitalRead(pbP)==1 && digitalRead(pbH)==0){ // jika pbP pembadingnya adalah 1 maka pbH = mati alis 0
    digitalWrite(LedP, HIGH); //fungsi menyalaka lampu jika benar
  }else {
    digitalWrite(LedP, LOW); //fungsi mematikan lampu jika salah
  }

  if(digitalRead(pbP)==0 && digitalRead(pbH)==1){  // jika pbP pembadingnya adalah 0 atau mati maka pbH = mati alis 1
    digitalWrite(LedH, HIGH); //fungsi menyalaka lampu jika benar
  }else {
    digitalWrite(LedH, LOW);//fungsi mematikan lampu jika salah
  }

  if(digitalRead(pbP)==1 && digitalRead(pbH)==1){ // jika pbP pembadingnya adalah 1 maka pbH = mati alis 1
    digitalWrite(LedK, HIGH); //fungsi menyalaka lampu jika benar
  }else {
    digitalWrite(LedK, LOW); //fungsi mematikan lampu jika salah
  }*/

  if(digitalRead(pbH)==1 || digitalRead(pbP)==1){ // gerbang logika or jika salah satu di tekan maka tetap nyala
    digitalWrite(LedH, HIGH);
    }else{
      digitalWrite(LedH, LOW);
    }
}