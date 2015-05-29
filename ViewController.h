//
//  ViewController.h
//  Alcolator
//
//  Created by Keivon Hobeheidar on 5/17/15.
//  Copyright (c) 2015 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;

-(void)buttonPressed:(UIButton *)sender;
@end

