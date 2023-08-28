#include<math.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
float A,B,C;

float cubewidth = 10;
int width = 160, heighth = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCIICode = ' ';
int distancefromCode = 100;
float k1 = 40;

float incrementspeed = 0.6;

float x, y, z;
float ooz;
float xp, yp;
int idx;

float calculatex(int i, int j, int k){
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + j * cos(B) * cos(C);
}

float calculatey(int i, int j, int k){
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
           j * sin(A) * sin(B) *sin(C) + k * cos(A) * sin(B) * sin(C) -
           i * cos(B) * sin(C);
}
float calclatexZ(int i, int j, int k){
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateforsurface(float cubeX, float cubeY, float cubeZ, int ch){
    x = calculatex(cubeX, cubeY, cubeZ);
    y = calculatey(cubeX, cubeY, cubeZ);
    z = calclatexZ(cubeX, cubeY, cubeZ) + distancefromCode;

    ooz = 1/z;

    xp = (int)(width / 2 - 2 * cubewidth + k1 * ooz * x * 2);
    yp = (int)(heighth / 2 + k1 * ooz * y);

    idx = xp + yp * width;
    if (idx>= 0 && idx < width * heighth){
        if (ooz> zBuffer[idx]){
            zBuffer[idx] = ooz;
            buffer[idx] = ch;
        }
    }
}

int main(){
    printf("\x1b[2]");
    while(1){
        memset(buffer, backgroundASCIICode, width * heighth);
        memset(zBuffer, 0, width * heighth * 4);
        for(float cubeX = - cubewidth; cubeX < cubewidth; cubeX += incrementspeed){
            for(float cubey = - cubewidth; cubey < cubewidth; cubey += incrementspeed){
                calculateforsurface(cubeX, cubey, -cubewidth, 'a');
                calculateforsurface(cubewidth, cubey, cubeX, 'b');
                calculateforsurface(-cubewidth, cubey, -cubeX,'c');
                calculateforsurface(-cubeX, cubey, cubewidth,'d');
                calculateforsurface(cubeX, -cubewidth, -cubey,'e');
                calculateforsurface(cubeX, cubewidth, cubey,'f');
            }
        }
        printf("\x1b[H");
        for (int k = 0; k < width * heighth; k++){
            putchar(k % width ? buffer[k] : 10);
        }
        A += 0.005;
        B += 0.005;
        usleep(1000);
    }
    return 0;
}