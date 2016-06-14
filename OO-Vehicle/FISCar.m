//
//  FISCar.m
//  OO-Vehicle
//
//  Created by Matt Amerige on 6/14/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import "FISCar.h"

@implementation FISCar

- (instancetype)init
{
	return [self initWithCylinders:4.0 automatic:YES];
}

- (instancetype)initWithCylinders:(CGFloat)cylinders automatic:(BOOL)isAutomatic
{
	self = [super initWithWeight:1270.0 topSpeed:88.0];
	if (self) {
		_cylinders = cylinders;
		_isAutomatic = isAutomatic;
	}
	return self;
}

@end
