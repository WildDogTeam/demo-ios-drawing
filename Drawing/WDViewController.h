//
//  WDViewController.h
//  Drawing
//
//  Created by IMacLi on 15/7/24.
//  Copyright (c) 2015年 IMacLi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WDDrawView.h"
#import "WDColorPickController.h"

@interface WDViewController : UIViewController<WDDrawViewDelegate, WDColorPickerDelegate>

@end
