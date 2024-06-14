const int led = 13;
void setup() {
    Serial.begin(9600); ///memmulai serial monitor dengan baudrate 9600
    pinMode(led, OUTPUT); // untuk memmerintahkan mengeluarkan tengann 5v
    Serial.println("hello"); // mencetak awal serial  monitor
}
 
void loop() {
    digitalWrite(led, HIGH); //fungsi untuk menyalakan
    Serial.println("lampu menyala"); // menampilkan tulisan di serial menitor
    delay(1000); //selama 1 detik

    digitalWrite(led, LOW); //fungsi untuk memmatikan
    Serial.println("lampu mati");
    delay(1000); //selama 1 detik
}
