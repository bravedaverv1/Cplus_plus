template <typename T>
T get_sum(T num1 , T num2){
  return num1 += num2;
}

template <typename T> 
bool grtr_than_5(T num){
  return num > 5 ? true:false;
  // ? ternary operators , what are they?
  // ternmary operators are nother form of completing conditional statements for short and concise. 
  // first comes the condition, "?" indicating that what comes before is what determines what comes next.
  // if true, the first option. if false, the second option. ":" can be thought of as or. 
}

void congrats_david();