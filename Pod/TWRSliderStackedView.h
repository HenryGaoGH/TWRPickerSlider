//
//  TWRSliderStackedView.h
//  TWRPickerSlider
//
//  Created by Michelangelo Chasseur on 28/08/14.
//  Copyright (c) 2014 Touchware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWRSliderStackedView : UIView

- (instancetype)initWithBottomPadding:(NSUInteger)padding;
- (instancetype)initWithTabBar;

@property (strong, nonatomic) NSArray *sliders;

@end