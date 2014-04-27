//
//  ViewController.h
//  WesGraffiti
//
//  Created by Erik Islo on 4/26/14.
//  Copyright (c) 2014 weshacks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) IBOutlet UIButton *locate;


@end
