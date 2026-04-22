//week09-1 好玩的程式設計(打地鼠)
//File-Preference 字型設大一點
void setup() {// 設大一點
 size(300, 300);
 }
 void draw(){
 background(#FFFFF2);
 for(int i=0; i<3; i++){
 for(int j=0; j<3; j++){
   int x = 50 + j*100, y= 50 + i*100;
   ellipse(x, y, 90, 90);
   }
  }
 }
