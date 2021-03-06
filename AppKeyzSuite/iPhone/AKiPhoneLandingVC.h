//
//  AKiPhoneLandingVC.h
//  AppKeyz Sample Application
//
//  Created by Michael Hayes on 4/28/13.
//  Copyright (c) 2013 App Keyz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "AKiPhoneLoginRegisterVC.h"

@interface AKiPhoneLandingVC : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate> {
    IBOutlet UITableView* loginTableView;
    UIImageView* bgImage;
    
    IBOutlet UIView* loginWindow;
    
    IBOutlet UIView* popupBackground;
    IBOutlet UIView* popupView;
    IBOutlet UITextField* popupBox;
    
    IBOutlet UILabel* why;
    IBOutlet UIButton* close;
    IBOutlet UITextView* explain;
    
    IBOutlet UIButton* whyButton;
    IBOutlet UIButton* noThanksButton;
    
    UITextField* fieldText;
    
    float diaWidth;
    float diaHeight;
    float lscpTop;
}
@property(strong) IBOutlet UIImageView* bgImage;

-(IBAction)whySignUp:(id)sender;
-(IBAction)noThanks:(id)sender;
-(IBAction)closePopover:(id)sender;
-(void)onCompleteCancelPopup;

@end
