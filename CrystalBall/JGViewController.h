//
//  JGViewController.h
//  CrystalBall
//
//  Created by Jay Glose on 6/25/14.
//  Copyright (c) 2014 Glose. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JGCrystalBall;
@interface JGViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) JGCrystalBall *crystalBall ;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction;
@end
