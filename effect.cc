const int nleds = 6;
int leds[nleds] = {3, 5, 6, 9, 10, 11};
int mainok = 0;

void setup()
{
  for(int i = 0; i <= nleds - 1; i ++){
    pinMode(leds[i], OUTPUT);
}
}

void loop()
{
  if(mainok == nleds){
    mainok = -1 * (nleds - 1);}
  for(int i = 0; i <= nleds-1; i++){
    if(i + 1 == abs(mainok) || i - 1 == abs(mainok)){
    	analogWrite(leds[i], 25);
    }
    else{
     	analogWrite(leds[i], 0);
    }
      
  }
  analogWrite(leds[abs(mainok)], 100);
  mainok = mainok + 1;
  delay(400);
}
