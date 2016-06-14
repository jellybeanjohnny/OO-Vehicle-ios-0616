//
//  FISPlane.h
//  OO-Vehicle
//
//  Created by Matt Amerige on 6/14/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import "FISVehicle.h"

@interface FISPlane : FISVehicle

@property (nonatomic) CGFloat topAltitude;
@property (nonatomic) CGFloat currentAltitude;

- (void)increaseAltitude;
- (void)decreaseAltitude;

@end
