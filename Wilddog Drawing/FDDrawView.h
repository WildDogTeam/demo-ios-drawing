//
//  FDDrawView.h
//  Wilddog Drawing
//
//  Created by Garin on 9/20/16.
//  Copyright (c) 2014 Wilddog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FDPath.h"

@class FDDrawView;

@protocol FDDrawViewDelegate <NSObject>

// called when a user finished drawing a line/path
- (void)drawView:(FDDrawView *)view didFinishDrawingPath:(FDPath *)path;

@end

@interface FDDrawView : UIView

// the color that is used to draw lines
@property (nonatomic, strong) UIColor *drawColor;

// the delegate that is notified about any drawing by the user
@property (nonatomic, weak) id<FDDrawViewDelegate> delegate;

// adds a path to display to this view
- (void)addPath:(FDPath *)path;


@end
