#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Utils.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::showStorn()
{
    touchgfx_printf("show storn\n");
    if(Texts::getLanguage() == 0) {     // english
        Unicode::strncpy(textArea1Buffer, "Storn", TEXTAREA1_SIZE);
    } else {    // chinese
        Unicode::UnicodeChar tmp[3] = { 0x77f3, 0x5934, 0x0};   // Unicode: 石头
        Unicode::strncpy(textArea1Buffer, tmp, TEXTAREA1_SIZE);
    }
    textArea1.invalidate();
    curVal = 1;
}

void Screen1View::showScissors()
{
    touchgfx_printf("show scissors\n");
    if(Texts::getLanguage() == 0) {     // english
        Unicode::strncpy(textArea1Buffer, "Scissors", TEXTAREA1_SIZE);
    } else {    // chinese
        Unicode::UnicodeChar tmp[3] = { 0x526a, 0x5200, 0x0};   // Unicode: 剪刀
        Unicode::strncpy(textArea1Buffer, tmp, TEXTAREA1_SIZE);
    }
    textArea1.invalidate();
    curVal = 2;
}

void Screen1View::showCloth()
{
    touchgfx_printf("show cloth\n");
    if(Texts::getLanguage() == 0) {     // english
        Unicode::strncpy(textArea1Buffer, "Cloth", TEXTAREA1_SIZE);
    } else {    // chinese
        Unicode::UnicodeChar tmp[2] = { 0x5e03, 0x0};   // Unicode: 布
        Unicode::strncpy(textArea1Buffer, tmp, TEXTAREA1_SIZE);
    }
    textArea1.invalidate();
    curVal = 3;
}

void Screen1View::setText()
{
    // Unicode::strncpy(textArea1Buffer, "", TEXTAREA1_SIZE);
    if(curVal == 1) {
        showStorn();
    } else if(curVal == 2) {
        showScissors();
    } else if(curVal == 3) {
        showCloth();
    }
}