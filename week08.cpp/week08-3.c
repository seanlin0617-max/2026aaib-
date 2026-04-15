//week08-3會飛的氣球
//修改自week08-2會跟著mouse移動的氣球
void setup() {
  size(500, 500);
  img = loadImage("balloon.png");
}
PImage img;//圖片宣告(要把ballon.png再拉一次到程式)
float x, y;//變數宣告
float s = 0.1;//氣球的大小
void draw() {
  background(255);//白色背景
  if (mousePressed) {
    s*= 1.1;
    image(img, mouseX-(96*s)/2, mouseY-(132*s), 96*s, 132*s);
  } else {
    image(img, x, y, 96*s, 132*s);
    y--;
  }
}
void mouseReleased() {
  x = mouseX-96/2;//X座標 變數設定
  y = mouseY-132;//Y座標
  image(img, x, y, 96, 132);//照著座標畫氣球
  //image(img, mouseX-96/2,mouseY-132, 96, 132);
}//注意 要再拉一次ballon.png到程式
