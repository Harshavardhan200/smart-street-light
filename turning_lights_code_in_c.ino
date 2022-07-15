#define proximity_left 8
#define proximity_right 5
#define proximity_center 2
#define left_redled 10
#define left_greenled 9
#define right_redled 3
#define right_greenled 47
void setup() {
  // put your setup code here, to run once:
  pinMode(proximity_left, INPUT);
  pinMode(proximity_right, INPUT);
  pinMode(proximity_center, INPUT);
  pinMode(left_redled, OUTPUT);
  pinMode(left_greenled, OUTPUT);
  pinMode(right_redled, OUTPUT);
  pinMode(right_greenled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int proximity_value_left=digitalRead(proximity_left);
  int proximity_value_right=digitalRead(proximity_right);
  int proximity_value_center=digitalRead(proximity_center);
  digitalWrite(right_greenled, HIGH);
  digitalWrite(right_redled, LOW);
  digitalWrite(left_redled, LOW);
  digitalWrite(left_greenled, HIGH);
  if(proximity_value_left==0){
    digitalWrite(right_greenled, LOW);
    digitalWrite(right_redled, HIGH);
    digitalWrite(left_redled, LOW);
    digitalWrite(left_greenled, HIGH);
  }
  if(proximity_value_right==0){
    digitalWrite(right_greenled, HIGH);
    digitalWrite(right_redled, LOW);
    digitalWrite(left_redled, HIGH);
    digitalWrite(left_greenled, LOW);
  }
  if(proximity_value_center == 0){
    digitalWrite(right_greenled, HIGH);
    digitalWrite(right_redled, LOW);
    digitalWrite(left_redled, LOW);
    digitalWrite(left_greenled, HIGH);
  }
}
