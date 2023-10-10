#include "config.nn.h"

double *get_operating_gata(int);

double *get_operating_gata(int mode) {

    switch (mode) {
        case OPERATING_TRAINING:
            // temporarily...
            int result[10] = {0.2,0.5,0.9,0.5,0.7,0.3,0.7,0.8,0.1,0.4};
            return result;
            // ...
        case OPERATING_INPUT:
            // temporarily...
            int result[3] = {0.1,0.9,0.1};
            return result;
            // ...
    }

}