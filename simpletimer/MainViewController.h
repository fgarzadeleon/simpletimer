//
//  MainViewController.h
//  simpletimer
//
//  Created by Peter May on 14/09/2014.
//  Copyright (c) 2014 PeterMay. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
