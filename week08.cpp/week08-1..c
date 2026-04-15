//week08-1好玩的程式設計 氣球
//File-Preference 字型設大 去氣球照片ballon.png半透明圖
size(500,500);
PImage img;//圖片宣告(要把ballon.png從檔案總管拉到程式裏)
img = loadImage("balloon.png");
image(img,0,0,96,132);//看你的圖的大小,依比例調整,縮小
//image(圖,x,y,寬,高);
