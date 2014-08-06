//
//  JGCrystalBall.m
//  CrystalBall
//
//  Created by Jay Glose on 6/25/14.
//  Copyright (c) 2014 Glose. All rights reserved.
//

#import "JGCrystalBall.h"

@implementation JGCrystalBall

- (NSArray*) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"Yes",
                        @"No",
                        @"Maybe",
                        @"It is most certain",
                        @"Not a chance",
                        @"Never",
                        @"Most definitely",
                        @"Stop bothering me!",
                        nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];}

@end
