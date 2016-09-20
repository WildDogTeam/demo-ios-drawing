//
//  FDViewController.h
//  Wilddog Drawing
//
//  Created by Garin on 9/20/16.
//  Copyright (c) 2014 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FDDrawView.h"
#import "FDColorPickController.h"

@interface FDViewController : UIViewController<FDDrawViewDelegate, FDColorPickerDelegate>

@end
