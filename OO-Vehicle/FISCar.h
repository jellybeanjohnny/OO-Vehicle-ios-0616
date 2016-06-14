//
//  FISCar.h
//  OO-Vehicle
//
//  Created by Matt Amerige on 6/14/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import "FISVehicle.h"

@interface FISCar : FISVehicle

@property (nonatomic) BOOL isAutomatic;
@property (nonatomic) CGFloat milesPerGallon;

/**
 valid values are 4, 6 and 8.
 */
@property (nonatomic) CGFloat cylinders;

- (instancetype)initWithCylinders:(CGFloat)cylinders automatic:(BOOL)isAutomatic;

@end
