void setup(){
 size(800,800); 
 background(#EEAAF7);
  
}

void draw(){
 if(mousePressed){ 
  line(mouseX,mouseY,pmouseX,pmouseY);
 }
}

void keyPressed(){
 if(key=='0')stroke(0,0,0);
 if(key=='1')stroke(255,255,255); 
 if(key=='2')stroke(255,0,0); 
 if(key=='3')stroke(0,255,0); 
 if(key=='4')stroke(0,0,255); 
}
