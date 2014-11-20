//
//  SearchViewController.h
//  Reading
//
//  Created by Cyrilshanway on 11/12/14.
//  Copyright (c) 2014 Cyrilshanway. All rights reserved.
//

#import "MyBookViewController.h"
#import <ZBarSDK.h>
#import "Book.h"

@interface SearchViewController : MyBookViewController
<
UIAlertViewDelegate,ZBarReaderDelegate
>

@property (weak, nonatomic) IBOutlet UITextField *scanTextField;


@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *bookiTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *bookAuthorLabel;
@property (weak, nonatomic) IBOutlet UILabel *bookPublishedLabel
;
@property (weak, nonatomic) IBOutlet UILabel *bookPulisherLabel;
@property (weak, nonatomic) IBOutlet UILabel *bookPageNumLabel;
@property (weak, nonatomic) IBOutlet UILabel *isbnLabel;


@property Book *myBook;
@end
