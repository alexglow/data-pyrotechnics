//#define FOREVER 42949672

void setup()
{
    // initialize serial communication
    Serial.begin(57600);
//    Bean.sleep(FOREVER);
}

// the loop routine runs over and over again forever:
void loop()
{
    AccelerationReading accel = Bean.getAcceleration();

    Serial.print(Bean.getBatteryVoltage());
    Serial.print('\t');
    Serial.print(Bean.getTemperature());
    Serial.print('\t');
    Serial.print(accel.xAxis);
    Serial.print('\t');
    Serial.print(accel.yAxis);
    Serial.print('\t');
    Serial.print(accel.zAxis);
    Serial.print('\n');
//    Bean.sleep(FOREVER);
