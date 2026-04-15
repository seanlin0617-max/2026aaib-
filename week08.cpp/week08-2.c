//week08-2會飛的氣球
//Ctral-N 新視窗
void setup(){
  size(500,500);
  img = loadImage("balloon.png");
}
PImage img;//圖片宣告(要把ballon.png再拉一次到程式)
int x, y;//1u04gj4vm0 el4

void draw(){
  background(255);//白色背景
  x = mouseX-96/2;//X座標 變數設定
  y = mouseY-132;//Y座標
  image(img,x,y,96,132);//照著座標畫氣球
  //image(img, mouseX-96/2,mouseY-132, 96, 132);
}//注意 要再拉一次ballon.png到程式
