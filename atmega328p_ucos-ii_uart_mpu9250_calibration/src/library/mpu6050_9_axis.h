#ifndef __MPU6050_9_AXIS_H__
#define __MPU6050_9_AXIS_H__

#include "mpu6050.h"

#define MPU6050_DMP_CODE_SIZE			1962
#define MPU6050_DMP_CONFIG_SIZE			232
#define MPU6050_DMP_UPDATES_SIZE		140

#define FIFO_RATE						0x07

uint8 MPU6050dmpInitialize(void);
uint8 MPU6050dmpGetQuaternion(int16 *data, const uint8 *packet);
uint8 MPU6050dmpGetAccel(int16 *data, const uint8* packet);
uint8 MPU6050dmpGetGyro(int16 *data, const uint8* packet);
uint8 MPU6050dmpGetMag(int16 *data, const uint8* packet);

void mpu6050DMPInit(void);
uint8 mpu6050DMPInitFromTask(void);
INT8U mpu6050DMPSemPend(void);

#endif
