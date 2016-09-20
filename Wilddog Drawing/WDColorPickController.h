//
//  FDColorPickController.h
//  Wilddog Drawing
//
//  Created by Garin on 9/20/16.
//  Copyright (c) 2014 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDColorPickController;

@protocol FDColorPickerDelegate <NSObject>

- (void)colorPicker:(WDColorPickController *)colorPicker didPickColor:(UIColor *)color;

@end

@interface WDColorPickController : UIViewController

@property (nonatomic, weak) id<FDColorPickerDelegate> delegate;

- (id)initWithColor:(UIColor *)color;

@end
