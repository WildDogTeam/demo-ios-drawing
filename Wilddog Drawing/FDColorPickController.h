//
//  FDColorPickController.h
//  Wilddog Drawing
//
//  Created by Garin on 9/20/16.
//  Copyright (c) 2014 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FDColorPickController;

@protocol FDColorPickerDelegate <NSObject>

- (void)colorPicker:(FDColorPickController *)colorPicker didPickColor:(UIColor *)color;

@end

@interface FDColorPickController : UIViewController

@property (nonatomic, weak) id<FDColorPickerDelegate> delegate;

- (id)initWithColor:(UIColor *)color;

@end
