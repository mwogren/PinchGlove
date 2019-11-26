void setup(){

pinMode(5,INPUT_PULLUP);
pinMode(4,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP);
pinMode(2,INPUT_PULLUP);

Keyboard.begin();

}

void loop(){

if(digitalRead(5) == LOW){

Keyboard.press(KEY_LEFT_CTRL);

Keyboard.press(KEY_LEFT_ALT);

Keyboard.press('3');

delay(50);

Keyboard.releaseAll();

delay(500);

}


{

if(digitalRead(4) == LOW){

Keyboard.press(KEY_LEFT_GUI);

Keyboard.press(KEY_RIGHT_ARROW);

delay(50);

Keyboard.releaseAll();

delay(500);

}

{

if(digitalRead(3) == LOW){

Mouse.press(MOUSE_LEFT );

delay(100);

while (digitalRead(3) == LOW){

delay(10);

}

Mouse.release();

}
}


{

if(digitalRead(2) == LOW){

Mouse.press(MOUSE_RIGHT);

delay(100);

while (digitalRead(2) == LOW){

delay(10);

}

Mouse.release();

}
}


}
}
