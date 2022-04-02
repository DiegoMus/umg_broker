**Arduino**

1. add libraries ESP32
2. add libraries ESP


**Run docker from docker-compose Mosquitto image**

1. docker-compose up -d

2. Subscription: 

``
mosquitto_sub -d -t topic/prueba
``
3. Publisher:
mosquitto_pub -d -t topic/prueba -m "Hola Mundo UMG Coban MQTT"



**Join ESP to WiFi network **
1. 