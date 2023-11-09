// The Project OF The Dancing Light .

// The Main Code OF The Project OF The Dancing Light . .C

// In this program, We Produce a Light Dance by Utilizing Three LEDs .




// Determine The Bases


int Green = 1 , RED = 2 , Yellow = 3, Green1 = 4;                                                                                                                 // Basic Definition : Numbers : 1 , and & 2 , and & 3 , and & 4 . :


// The Setup Function runs once when you Press Reset or Power The Board .


void setup () {


  // Initialize Digital Pin Green, RED, Yellow, Green1 as an OUTPUT .


  pinMode(green, OUTPUT);                                                                                                                             // Introducing The OUTPUT Pin .
  pinMode(red, OUTPUT);                                                                                                                              // Introducing The OUTPUT Pin .
  pinMode(yellow, OUTPUT);                                                                                                                          // Introducing The OUTPUT Pin .
  pinMode(green1, OUTPUT);                                                                                                                         // Introducing The OUTPUT Pin .


}


// The Loop Function runs over and over again Forever


void loop () {


  delay(500);                                                                                                                            // Wait For Half a Second . :
  digitalWrite(Green, HIGH);                                                                                                            // Turn The LED on (HIGH is the Voltage Level) .
  delay(500);                                                                                                                          // Running the Delay Function (0.5 Seconds) . :
  digitalWrite(RED, HIGH);                                                                                                            // Turn The LED on (HIGH is the Voltage Level) .
  delay(500);                                                                                                                        // Wait For Half a Second . :
  digitalWrite(RED, HIGH);                                                                                                          // Turn The LED on (HIGH is the Voltage Level) .
  delay(500);                                                                                                                      // Running the Delay Function (0.5 Seconds) . :
  digitalwrite(Green,LOW);                                                                                                        // Turn The LED OFF by making The Voltage LOW .
  digitalwrite (Yellow,HIGH);                                                                                                    // Turn The LED on (HIGH is the Voltage Level) .
  delay (500);                                                                                                                  // Wait For Half a Second . :
  digitalwrite(RED,LOW);                                                                                                       // Turn The LED OFF by making The Voltage LOW .
  digitalwrite(Green1,HIGH);                                                                                                  // Turn The LED on (HIGH is the Voltage Level) .
  delay (500);                                                                                                               // Running the Delay Function (0.5 Seconds) . :
  digitalwrite(Yellow,LOW);                                                                                                 // Turn The LED OFF by making The Voltage LOW .
  delay (500);                                                                                                             // Wait For Half a Second . :
  digitalwrite(Green1,LOW);                                                                                               // Turn The LED OFF by making The Voltage LOW .


}
