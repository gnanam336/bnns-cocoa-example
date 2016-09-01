//
//  AppDelegate.h
//  MNIST
//
//  Created by Aaron Hillegass on 7/7/16.
//  Copyright © 2016 Big Nerd Ranch. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <Accelerate/Accelerate.h>


@class MNISTDataSet;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    MNISTDataSet *dataSet;
    unsigned int selectedImage;
    float *biases;
    float **weights;
    BNNSFilter filter;
}
- (IBAction)showNext:(id)sender;
- (IBAction)showPrevious:(id)sender;

@end

