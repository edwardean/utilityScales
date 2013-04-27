//
//  MainViewController.h
//  utilityScales
//
//  Created by Edward on 13-4-27.
//  Copyright (c) 2013年 TuringTeam. All rights reserved.
//

#import "FlipsideViewController.h"
#import "AudioPlayer.h"
#import "PlayButton.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate, AudioPlayerDelegate, PlayButtonDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;
@property (weak, nonatomic) IBOutlet UIImageView *ivBackground;
@property (weak, nonatomic) IBOutlet UIView *vwButtonPlace;
@property (weak, nonatomic) IBOutlet UINavigationItem *niTitle;

@end
