//
//  WDDrawView.h
//  Drawing
//
//  Created by IMacLi on 15/7/24.
//  Copyright (c) 2015年 IMacLi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WDPath.h"

@class WDDrawView;

@protocol WDDrawViewDelegate <NSObject>

// called when a user finished drawing a line/path
- (void)drawView:(WDDrawView *)view didFinishDrawingPath:(WDPath *)path;

@end

@interface WDDrawView : UIView

// the color that is used to draw lines
@property (nonatomic, strong) UIColor *drawColor;

// the delegate that is notified about any drawing by the user
@property (nonatomic, weak) id<WDDrawViewDelegate> delegate;

// adds a path to display to this view
- (void)addPath:(WDPath *)path;


@end
