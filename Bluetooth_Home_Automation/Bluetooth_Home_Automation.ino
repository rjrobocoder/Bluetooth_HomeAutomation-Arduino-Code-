/*
Follow me on:
  facebook: https://www.facebook.com/profile.php?id=100022320392277&ref=bookmarks
  LinkedIn: https://www.linkedin.com/in/rajesh-biswas72
  Github: https://github.com/rjrobocoder
  instagram: https://www.instagram.com/errajeshbiswas/?fbclid=IwAR2SPWf72s0Kh33SGCDYRFt2Z_A_BkBhxyYAtjt4KVgTDha5T5uJ4fEnebs
  twitter: https://twitter.com/RajeshB16448330?fbclid=IwAR21qKcNR8UcS3GHdZt2ujCqXNJHxNvvKppjKhRzAz8v5w6rlqed3fvCUtA
  Pinterest: https://in.pinterest.com/rjrobocoder/?fbclid=IwAR3p66TzoyNceNYI5W04s5rr61grqYo_v8Y13_CLHc3vmqrODlpdkayAV5s

*/




char p;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 p = Serial.read();
   switch(p)
   {
    case 'a': digitalWrite(2,HIGH);
             break;
    case 'b': digitalWrite(2,LOW);//relay1
             break;
    case 'c': digitalWrite(3,HIGH);
             break;  
    case 'd': digitalWrite(3,LOW);//r2
             break;
    case 'e': digitalWrite(4,HIGH);
             break;
    case 'f': digitalWrite(4,LOW);//r3
             break;                  
    case 'g': digitalWrite(5,HIGH);
             break;
    case 'h': digitalWrite(5,LOW);//R4
             break;    
    case 'i': digitalWrite(6,HIGH);
             break;
    case 'j': digitalWrite(6,LOW);//R5
             break;     
    case 'k': digitalWrite(7,HIGH);
             break;
    case 'l': digitalWrite(7,LOW);//R6
             break;           
    case 'm': digitalWrite(8,HIGH);
             break;
    case 'n': digitalWrite(8,LOW);//R7
             break;   
    case 'o': digitalWrite(9,HIGH);
             break;
    case 'p': digitalWrite(9,LOW);//R8
             break;                                                               
    default: break;
                  
    }
}
