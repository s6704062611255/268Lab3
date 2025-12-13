#include<stdio.h>
int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("Hour:%d\n",h);
    printf("Minute:%d\n",m);
    printf("second:%d\n",s);
    int next_minute;
    printf("Next Minute:");
    scanf("%d", &next_minute);
    m = m + next_minute; //เวลาเก่าบวกเวลาถัดไป
    h = h + (m / 60);    // เอาจำนวนชั่วโมงที่ครบ 60 นาที ไปทบใส่ h
    h = h%24; //ถ้าเกิน 24 ให้วนใหม่
    m = m%60; //หาเศษนาที
    
    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("second:%d\n", s);
}