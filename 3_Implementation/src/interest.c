/**
 * @file interest.c
 * @author Harshit Singh
 * @brief Calculates interest on money present in account
 * @version 0
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<bank.h>

/**
 * @brief It returns Intrest
 * 
 * @param time 
 * @param amount 
 * @param rate 
 * @return float 
 */
float calculateInterest(float time, float amount, int rate)
{
    float SI;
    SI = (rate * time * amount) / 100.0;
    return (SI);
}

