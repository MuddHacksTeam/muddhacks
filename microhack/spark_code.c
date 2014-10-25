int onRelay = D0;
int offRelay = D1;

int cook(String cookTime);

void setup() {
      // Initialize D0 and D1 as output
  pinMode(onRelay, OUTPUT);
  pinMode(offRelay, OUTPUT);
  
  // register cook function
  Spark.function("cook", cook);
}

void loop() {

}

int cook(String cookTime) {
    int seconds = cookTime.toInt();

    // Let's start cooking!
    
    // turn it on
    digitalWrite(onRelay, HIGH);
    delay(5000); // wait 5 seconds
    digitalWrite(onRelay, LOW);
    
    // let it cook;
    delay(seconds*1000);
    
     // turn it off
    digitalWrite(offRelay, HIGH);
    delay(100);
    digitalWrite(offRelay, LOW);
    delay(100);
    
    digitalWrite(offRelay, HIGH);
    delay(100); 
    digitalWrite(offRelay, LOW);
    
    return 0;
}