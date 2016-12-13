//
//  ColorWheel.h
//  FunFacts
//
//  Created by David Remington on 12/12/16.
//  Copyright © 2016 David Remington. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
