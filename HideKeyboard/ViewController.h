//
//  ViewController.h
//  HideKeyboard
//
//  Created by Daniel Goncalves on 2015-04-13.
//  Copyright (c) 2015 DG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *textField;
-(IBAction)textFieldReturn:(id)sender;

@end

