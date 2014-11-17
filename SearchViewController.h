//
//  SearchViewController.h
//  Reading
//
//  Created by Cyrilshanway on 11/12/14.
//  Copyright (c) 2014 Cyrilshanway. All rights reserved.
//

#import "MyBookViewController.h"
#import <ZBarSDK.h>

@interface SearchViewController : MyBookViewController
<
UIAlertViewDelegate,ZBarReaderDelegate
>

@property (weak, nonatomic) IBOutlet UITextField *scanTextField;

@end
