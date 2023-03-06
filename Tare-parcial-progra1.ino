int a= 5; // Pines conectados al Display de 7 segmentos ánodo común
int b= 6;
int c= 7;
int d= 8;
int e= 9;
int f= 10;
int g= 11;

int in1; // Conteo ascendente
int in2; // Conteo descendente

char x; // Variable para comunicación serial

int t = 500;
void off(){         // Apagar display
 digitalWrite(a, 0); 
 digitalWrite(b, 0);
 digitalWrite(c, 0);
 digitalWrite(d, 0);
 digitalWrite(e, 0);
 digitalWrite(f, 0);
 digitalWrite(g, 0);
}

void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(4, INPUT);
  pinMode(3, INPUT);

  Serial.begin(9600);
  off();
}

void loop(){
  
  in1 = digitalRead(4);
  in2 = digitalRead(3);

if (Serial.available( )>1) {
  x=Serial.parseInt(); 
   switch (x){
    case 0:
    digitalWrite(a, 1); // bloque del numero 0
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    break;
    case 1:
    digitalWrite(a, 0); //bloque del numero 1
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    break;
    case 2:
    digitalWrite(a, 1); //bloque del numero 2
    digitalWrite(b, 1);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
    break;
    case 3:
    digitalWrite(a, 1); //bloque del numero 3
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
    break;
    case 4:
    digitalWrite(a, 0); //bloque del numero 4
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 5:
    digitalWrite(a, 1); //bloque del numero 5
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 6:
    digitalWrite(a, 1); //bloque del numero 6
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 7:
    digitalWrite(a, 1); //bloque del numero 7
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0);
    break;
    case 8:
    digitalWrite(a, 1); //bloque del numero 8
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 9:
    digitalWrite(a, 1); //bloque del numero 9
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break; 
    
    case 'a':
    digitalWrite(a, 0); // Apagar display
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0); 
    break; 
    case 10:
    digitalWrite(a, 1); //bloque del numero 10
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 11:
    digitalWrite(a, 0); //bloque del numero 11
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 12:
    digitalWrite(a, 1); //bloque del numero 12
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
    break;
    case 13:
    digitalWrite(a, 0); //bloque del numero 13
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 0);
    digitalWrite(g, 1);
    break;
    case 14:
    digitalWrite(a, 1); //bloque del numero 14
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    case 15:
    digitalWrite(a, 1); //bloque del numero 15
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    break;
    default:
    while(1){
     digitalWrite(a, 1); //bloque del numero 8
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(100); 
      digitalWrite(a, 0); // Apagar display
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 0); 
    delay(100);
    } break;
    }
}if (in1 == LOW){
  digitalWrite(a, 1); // bloque del numero 0
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
   delay(t);
  
  digitalWrite(a, 0); //bloque del numero 1
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 2
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 3
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 0); //bloque del numero 4
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 5
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 6
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 7
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 8
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
  digitalWrite(a, 1); //bloque del numero 9
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  off();
 }else if (in2 == HIGH){
   digitalWrite(a, 1); //bloque del numero 9
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);

   digitalWrite(a, 1); //bloque del numero 8
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
    
digitalWrite(a, 1); //bloque del numero 7
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
   delay(t);
  
    
   digitalWrite(a, 1); //bloque del numero 6
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
  
   
   digitalWrite(a, 1); //bloque del numero 5
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);

   digitalWrite(a, 0); //bloque del numero 4
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
   delay(t);
   
   digitalWrite(a, 1); //bloque del numero 3
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
   delay(t);
  
   digitalWrite(a, 1); //bloque del numero 2
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 1);
   delay(t);

    digitalWrite(a, 0); //bloque del numero 1
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
   delay(t);
  

   digitalWrite(a, 1); // bloque del numero 0
  digitalWrite(b, 1);
  digitalWrite(c, 1);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
   delay(t);
   off();
  }
}
