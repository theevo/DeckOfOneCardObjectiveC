//
//  TTVCard.m
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import "TTVCard.h"

@implementation TTVCard

- (instancetype) initWithImage:(NSURL *)image ofValue:(NSString *)value andSuit:(NSString *)suit
{
    self = [super init];
    
    if (self)
    {
        _image = image;
        _value = value;
        _suit = suit;
    }
    return self;
}


- (instancetype) init
{
    return [self initWithImage:[NSURL URLWithString:@""] ofValue:@"" andSuit:@""];
}


@end
