//
//  ViewController.h
//  FunFacts
//
//  Created by David Remington on 12/12/16.
//  Copyright © 2016 David Remington. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@end

