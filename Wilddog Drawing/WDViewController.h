//
//  FDViewController.h
//  Wilddog Drawing
//
//  Created by Garin on 9/20/16.
//  Copyright (c) 2014 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WDDrawView.h"
#import "WDColorPickController.h"

@interface WDViewController : UIViewController<FDDrawViewDelegate, FDColorPickerDelegate>

@end
