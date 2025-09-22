// Include the IRremote library
#include <IRremote.h>

// Define the digital pin connected to the IR receiver
const int RemotePin = 8;

// Create an IR receiver object
IRrecv irrecv(RemotePin);

// Object to store the decoded results from the remote
decode_results results;

void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);

  // Enable the IR receiver to start listening for signals
  irrecv.enableIRIn();
}

void loop() {
  // Check if a signal has been received
  if (irrecv.decode(&results)) {
    
    // Print the received value in HEX format to the Serial Monitor
    Serial.println(results.value, HEX);

    // Small delay to prevent repeated readings of the same button press
    delay(200);

    // Prepare the receiver for the next signal
    irrecv.resume();
  }
}
