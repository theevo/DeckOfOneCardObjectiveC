//
//  DVMCard.m
//  DeckOfCardsObjectiveC
//
//  Created by Marcus Armstrong on 11/15/19.
//  Copyright © 2019 Marcus Armstrong. All rights reserved.
//

#import "DVMCard.h"

// String values to avoid magic strings
static NSString * const kSuitKey = @"suit";
static NSString * const kImageKey = @"image";

@implementation DVMCard

- (instancetype)initWithSuit:(NSString *)suit imageString:(NSString *)imageString;
{
    // We first must initialize our superclass since our class inherits from NSObject
    if (self = [super init])
    {
        //The below lines are the same as 'self.suit = suit' & 'self.imageString = imageString' in swift
        _suit = suit;
        _imageString = imageString;
    }
    
    // once with have initialized the card, we can return it.
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    // The below lines of code pull the value out of the passed in dictionary at the specified key.
    NSString *suit = dictionary[kSuitKey];
    NSString *imageString = dictionary[kImageKey];
    
    // Once we have the values from our dictionary, we can initialize a card object with those values
    return [self initWithSuit:suit imageString:imageString];
}
                                
@end
