bool flag=false;
uint32_t DemoCounter=0;
int WifiPin=18;
int ledPin =26;
int ledBlink=5;
int ledDelay=100;
int audioPin =25;
#define TXD2_PIN 17
#define RXD2_PIN 16
////////
int i = 0;
int statusCode;
//const char* ssid = "";
//const char* password = "";
const char* ssid = "Adi";
const char* password = "12345678";
String st;
String content;
char * esid="";
char * epass = "";
//Function Decalration
bool testWifi(void);
void launchWeb(void);
void setupAP(void);
