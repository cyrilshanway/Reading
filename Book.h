//
//  Book.h
//  Reading
//
//  Created by Cyrilshanway on 11/12/14.
//  Copyright (c) 2014 Cyrilshanway. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Book : NSObject

@property (nonatomic, strong) NSString *owner;
@property (nonatomic, strong) NSString *email;

// book
@property (nonatomic, strong) NSString *ISBNNum;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *bookPublished;
@property (nonatomic, strong) NSString *bookPublisher;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, strong) NSString *smallImgUrl;
//author
@property (nonatomic, strong) NSString *name;
//work
@property (nonatomic, strong) NSString *pageNum;

@property (nonatomic, weak) NSMutableDictionary *smallImgUrlDic;
@end
