#include <stdio.h>

struct Dimension {
    float length;
    float width;
    float height;
};

typedef struct Dimension Dimension; 

float calculateVolumeArrow(Dimension* dimen) {
    float volume=dimen->length * dimen->width * dimen->height;
    return volume;
}


float calculateSurfaceAreaArrow(Dimension* dimen) {
    float area=2 * (dimen->length * dimen->width + dimen->length * dimen->height + dimen->width * dimen->height);
    return area;
}

float calculateVolumedot(Dimension* dimen) {
    float volume=(*dimen).length * (*dimen).width * (*dimen).height;
    return volume;
}


float calculateSurfaceAreadot(Dimension* dimen) {
    float area=2 * ((*dimen).length * (*dimen).width + (*dimen).length * (*dimen).height + (*dimen).width * (*dimen).height);
    return area;
}

int main() {
    Dimension mydimen;

    printf("Enter the Length: ");
    scanf("%f", &mydimen.length);
    printf("Enter the Width: ");
    scanf("%f", &mydimen.width);
    printf("Enter the Height: ");
    scanf("%f", &mydimen.height);

    Dimension* dimenPtr = &mydimen;


    float volume = calculateVolumedot(dimenPtr);
    float surfaceArea = calculateSurfaceAreadot(dimenPtr);
    printf("\nWith the help of (*) asterisk or indirection operator and (.) dot operator :\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);


    float volumePtr = calculateVolumeArrow(dimenPtr);
    float surfaceAreaPtr = calculateSurfaceAreaArrow(dimenPtr);
    printf("\nWith the help of ( -> ) Arrow operator using pointer as well as dot representation.:\n");
    printf("Volume: %.2f\n", volumePtr);
    printf("Surface Area: %.2f\n", surfaceAreaPtr);

    return 0;
}