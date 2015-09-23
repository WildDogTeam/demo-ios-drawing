//
//  WDColorPickController.h
//  Drawing
//
//  Created by IMacLi on 15/7/24.
//  Copyright (c) 2015年 IMacLi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDColorPickController;

@protocol WDColorPickerDelegate <NSObject>

- (void)colorPicker:(WDColorPickController *)colorPicker didPickColor:(UIColor *)color;

@end

@interface WDColorPickController : UIViewController

@property (nonatomic, weak) id<WDColorPickerDelegate> delegate;

- (id)initWithColor:(UIColor *)color;

@end
