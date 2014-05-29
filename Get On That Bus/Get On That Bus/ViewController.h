//
//  ViewController.h
//  Get On That Bus
//
//  Created by Ryan Tiltz on 5/29/14.
//  Copyright (c) 2014 Ryan Tiltz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

NSArray* CTABUSES;

@interface ViewController : UIViewController
@property MKPointAnnotation *busStopAnnotation;

@end