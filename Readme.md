**Arduino**


1. add libraries ESP32:  https://dl.espressif.com/dl/package_esp32_index.json,


2. add libraries ESP8266: http://arduino.esp8266.com/stable/package_esp8266com_index.json

**Join ESP to WiFi network**
1. Scan Wifi Network
2. Join Wifi Netwok
3. Testing digitalWrite()
4. Testing analogRead()


**Run docker from docker-compose Mosquitto image**

1. docker-compose up -d

2. Subscription: 
``
mosquitto_sub -d -t topic/prueba
``

3. Publisher:
``
mosquitto_pub -d -t topic/prueba -m "Hola Mundo UMG Coban MQTT"
``

**Create Node-Red Container**

1. Uncomment service node-red
2. run ``docker-compose up -d``
3. check localhost:1888
2. add mtqq pub and sub

