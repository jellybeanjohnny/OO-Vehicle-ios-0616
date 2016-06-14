//
//  FISVehicle.h
//  OO-Vehicle
//
//  Created by Matt Amerige on 6/14/16.
//  Copyright © 2016 FIS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FISVehicle : NSObject

@property (nonatomic) CGFloat weight;
@property (nonatomic) CGFloat topSpeed;
@property (nonatomic) CGFloat currentSpeed;
@property (nonatomic) CGFloat currentDirection;


/**
 Designated Initializer
 Set both currentSpeed and currentDirection to 0 by default.
 */
- (instancetype)initWithWeight:(CGFloat)weight topSpeed:(CGFloat)topSpeed;

/**
 Changes the vehicle's current speed to its top speed
 */
- (void)increaseSpeed;

/**
 changes the vehicles current speed to 0
 */
- (void)brake;

/**
 turns the vehicle -90 degrees, i.e. one quarter turn
 */
- (void)turnLeft;

/**
 turns the vehicle +90 degrees
 */
- (void)turnRight;


@end
