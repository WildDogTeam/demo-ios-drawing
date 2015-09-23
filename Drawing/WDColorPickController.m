//
//  WDColorPickController.m
//  Drawing
//
//  Created by IMacLi on 15/7/24.
//  Copyright (c) 2015年 IMacLi. All rights reserved.
//

#import "WDColorPickController.h"

#import "NKOColorPickerView.h"

@interface WDColorPickController ()

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NKOColorPickerView *colorPickerView;

@end

@implementation WDColorPickController

- (id)initWithColor:(UIColor *)color
{
    self = [super init];
    if (self != nil) {
        self->_color = color;
        self.edgesForExtendedLayout = UIRectEdgeNone;
        self.navigationItem.rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(dismissController)];
    }
    return self;
}

- (void)dismissController
{
    [self.delegate colorPicker:self didPickColor:self.colorPickerView.color];
    [self dismissViewControllerAnimated:YES completion:^{
    }];
}

- (void)loadView
{
    self.view = [[UIView alloc] initWithFrame:CGRectZero];
    self.view.backgroundColor = [UIColor whiteColor];
    NKOColorPickerView *colorPickerView = [[NKOColorPickerView alloc] initWithFrame:CGRectZero
                                                                              color:self.color
                                                             andDidChangeColorBlock:^(UIColor *color) {
                                                                 self.color = color;
                                                             }];
    colorPickerView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    [self.view addSubview:colorPickerView];
    self.colorPickerView = colorPickerView;
}

@end
