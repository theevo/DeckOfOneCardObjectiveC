//
//  DVMCard.h
//  DeckOfCardsObjectiveC
//
//  Created by Marcus Armstrong on 11/15/19.
//  Copyright © 2019 Marcus Armstrong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DVMCard : NSObject

/// When defining a property in our header file, we start with @ property, we then define our property attributes, followed by the type and pointer in memory and finally the property name. Don't forget your semicolon!
@property (nonatomic, copy, readonly) NSString *suit;

/// When defining a property in our header file, we start with @ property, we then define our property attributes, followed by the type and pointer in memory and finally the property name. Don't forget your semicolon!
@property (nonatomic, copy, readonly) NSString *imageString;

/**
@brief Initializes a new DVMCard with the provided suit and image.

 @param suit The suit name of the card (Diamonds, Hearts, Spades or Clubs)
 @param imageString The image of the card face

@return A DVMCard with proper image and suit defined

*/
- (instancetype)initWithSuit:(NSString *)suit imageString:(NSString *)imageString;

/**
Initializes a new DVMCard from a provided dictionary.

 @param dictionary A dictionary to be decoded into a DVMCard

@return A DVMCard with proper image and suit defined by calling our memberwise initializer

*/
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
