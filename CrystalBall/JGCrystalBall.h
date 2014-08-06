//
//  JGCrystalBall.h
//  CrystalBall
//
//  Created by Jay Glose on 6/25/14.
//  Copyright (c) 2014 Glose. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JGCrystalBall : NSObject{
    NSArray *_predictions;
}
@property (strong, nonatomic, readonly) NSArray *predictions;
- (NSString*) randomPrediction;

@end
