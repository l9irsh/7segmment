int seg[] = {8,7,6,5,4,3,2};
int i;
void setup() {
for (i = 0 ; i < 7 ; i++){
  pinMode(seg[i],OUTPUT); 
}
}

void loop() {


ziro();
delay(250);PORTD=0;
wahd();
delay(250);PORTD=0;
joj();
delay(250);PORTD=0;
tlata();
delay(250);PORTD=0;
raba();
delay(250);PORTD=0;
khmsa();
delay(250);PORTD=0;
sta();
delay(250);PORTD=0;
sba();
delay(250);PORTD=0;
tmnya();
delay(250);PORTD=0;
tsa();
delay(250);PORTD=0;
}



void ziro(){        //0
  for(i=0;i<6;i++){
    digitalWrite(seg[i],1);
  }
}

void wahd(){        //1
  for(i=1;i<3;i++){
    digitalWrite(seg[i],1);
  }
}

void joj(){       //2
  for(i=0;i<2;i++){
    digitalWrite(seg[i],1);
  }
  for(i=3;i<5;i++){      
    digitalWrite(seg[i],1);
  }
  for(i=6;i<7;i++){
  digitalWrite(seg[i],1);
}
}


void tlata(){       //3
  for(i=0;i<4;i++){
    digitalWrite(seg[i],1);
  }
  digitalWrite(seg[6],1);
}
void raba(){        //4
  for(i=1;i<3;i++){
    digitalWrite(seg[i],1);
  }
  for(i=5;i<7;i++){
    digitalWrite(seg[i],1);
  }
}

void khmsa(){       //5
  for(i=2;i<4;i++){
    digitalWrite(seg[i],1);
  }
  for(i=5;i<7;i++){
    digitalWrite(seg[i],1);
  }  
    digitalWrite(seg[0],1);
}


void sta(){       //6
    for(i=2;i<7;i++){
    digitalWrite(seg[i],1);
    }
    digitalWrite(seg[0],1);
}

void sba(){       //7
    for(i=0;i<3;i++){
    digitalWrite(seg[i],1);
  }
}

void tmnya(){       //8
    for(i=0;i<7;i++){
    digitalWrite(seg[i],1);
  }
}

void tsa(){       //9
    for(i=0;i<4;i++){
    digitalWrite(seg[i],1);
  }
    for(i=5;i<7;i++){
    digitalWrite(seg[i],1);
  }
}
