//
//  WDPath.h
//  Drawing
//
//  Created by IMacLi on 15/7/24.
//  Copyright (c) 2015年 IMacLi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


// a point object that can be stored in arrays
@interface FDPoint : NSObject

@property (nonatomic, readonly) CGFloat x;
@property (nonatomic, readonly) CGFloat y;

- (id)initWithCGPoint:(CGPoint)point;

@end

// a path consisting of a color and multiple way points
@interface WDPath : NSObject

// the points of this path
@property (nonatomic, strong, readonly) NSMutableArray *points;

// the color of this path
@property (nonatomic, strong, readonly) UIColor *color;




- (id)initWithColor:(UIColor *)color;
- (id)initWithPoints:(NSArray *)points color:(UIColor *)color;

// parse from a JSON representation
+ (WDPath *)parse:(NSDictionary *)dictionary;

// serialize to a JSON representation
- (NSDictionary *)serialize;

// add a point to this path
- (void)addPoint:(CGPoint)point;


@end

