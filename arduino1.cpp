// C++ code

// vsom = 340,29 m/s
// D = v . t
// trigger = pin output
// echo = pin input

//HIGH = 5v & LOW = 0v

const int trigger = 12;
const int echo = 13;

float distance;
void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);  
}

void loop()
{
  
  digitalWrite(trigger, LOW);
  delay(0005);
  digitalWrite(trigger, HIGH);
  delay(0010);
  digitalWrite(trigger, LOW);
  
 distance =  pulseIn(echo, HIGH);
 distance = distance / 58;
   
 Serial.print("distance: ");
 Serial.print(distance); 
 Serial.println(" cm");

}
//conectar cabos do Lcd
//fazer a conexão entre arduino1 e arduino2
//passar os dados obtidos no sensor HC-SR04 para o arduino2

