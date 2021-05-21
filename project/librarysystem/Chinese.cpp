#include "Chinese.h"

Chinese::Chinese()
{

}
Chinese::~Chinese()
{
}

wchar_t* Chinese::MBCSToUnicode(wchar_t* buff, const char* str)
{
    wchar_t * wp = buff;
    char * p = (char *)str;
    while (*p)
    {
        if (*p & 0x80)
        {
            *wp = *(wchar_t *)p;
            p++;
        }
        else {
            *wp = (wchar_t)*p;
        }
        wp++;
        p++;
    }
    *wp = 0x0000;
    return buff;
}

char* Chinese::unicodeToMBCS(char* buff, const wchar_t* str)
{
    wchar_t * wp = (wchar_t *)str;
    char * p = buff, *tmp;
    while (*wp)
    {
        tmp = (char *)wp;
        if (*wp & 0xFF00)
        {
            *p = *tmp;
            p++; tmp++;
            *p = *tmp;
            p++;
        }
        else
        {
            *p = *tmp;
            p++;
        }
        wp++;
    }
    *p = 0x00;
    return buff;
}

std::wstring Chinese::strToWstr(std::string &input)
{
    size_t len = input.size();
    wchar_t * b = (wchar_t *)malloc((len + 1) * sizeof(wchar_t));
    MBCSToUnicode(b, input.c_str());
    std::wstring r(b);
    free(b);
    return r;
}

char* Chinese::wstrToChar(std::wstring &wstr)
{
    char* re = wstrToChar(wstr.c_str());
    return re;
}

char* Chinese::wstrToChar(const wchar_t* wstr)
{
    int len = wcslen(wstr);
    char * buff = (char *)malloc((len * 2 + 1) * sizeof(char));
    char* re = unicodeToMBCS(buff, wstr);
    free(buff);
    return re;
}

std::string Chinese::wstrToStr(std::wstring &wstr)
{
    size_t len = wstr.size();
    char * b = (char *)malloc((2 * len + 1) * sizeof(char));
    unicodeToMBCS(b, wstr.c_str());
    std::string r(b);
    free(b);
    return r;
}
// Created by yunlang on 2021/5/16.
//

