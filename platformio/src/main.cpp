#include <BTHID.h>
#include <usbhub.h>
#include <KeyboardParser.h>
#include <MouseParser.h>

void setup() {
    Serial.begin(115200);
    while(!Serial);
}

void loop () {
    Serial.println("LOL");
}