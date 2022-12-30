PImage img,img1;
void setup(){
  size(700,700);
  img=loadImage("996.png");
  img1=loadImage("images.jpg");
}

void draw(){
 image(img,0,0,400,400) ;
 image(img1,100,100) ;
}
