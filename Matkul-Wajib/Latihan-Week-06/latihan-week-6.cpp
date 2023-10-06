#include <iostream>
#include <stdio.h>
// memanggil header agar bisa menjalankan fungsi void question_01() question_02() & question_03()
// question_04 & question_05
#include "function_question.h"

// agar tidak menulis std lagi pada program
using namespace std;

int main () {

    // pemanggilan dari function_question.cpp
    question_01();
    question_02();
    question_03();
    question_04();
    question_05();

    return 0;
    
}

