//
//  ViewController.h
//  Alcolator
//
//  Created by YooJin Hong on 11/9/15.
//  Copyright © 2015 YooJin Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (nonatomic) float equivalentAlcoholAmount;

- (void)buttonPressed:(UIButton *)sender;

@end

