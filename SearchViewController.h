//
//  SearchViewController.h
//  Reading
//
//  Created by Cyrilshanway on 11/12/14.
//  Copyright (c) 2014 Cyrilshanway. All rights reserved.
//

#import "ViewController.h"
#import <ZBarSDK.h>

@interface SearchViewController : ViewController
<
UIAlertViewDelegate,ZBarReaderDelegate
>

@property (weak, nonatomic) IBOutlet UITextField *scanTextField;

@end
