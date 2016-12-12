//
//  ViewController.m
//  FunFacts
//
//  Created by David Remington on 12/12/16.
//  Copyright © 2016 David Remington. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.factBook = [[FactBook alloc] init];
    self.funFactLabel.text = [self.factBook.facts objectAtIndex:0];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
        self.funFactLabel.text = [self.factBook.facts objectAtIndex:1];
}

@end
