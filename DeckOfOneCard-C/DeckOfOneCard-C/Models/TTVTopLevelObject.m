//
//  TTVTopLevelObject.m
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import "TTVTopLevelObject.h"
#import "TTVCard.h"

@implementation TTVTopLevelObject

- (instancetype)initWithDictionary:(NSDictionary<NSString *,id> *)dictionary
{
    NSString *image = dictionary[@"image"];
    NSString *value = dictionary[@"value"];
    NSString *suit = dictionary[@"suit"];
    NSArray<TTVCard *> *cardsArray = dictionary[@"cards"];
        
//    for (NSDictionary *card in cardsArray)
//    {
//        NSDictionary *nestedDictionary = abilityDictionary[@"ability"];
//        NSString *abilityName = nestedDictionary[@"name"];
//
//        [abilities addObject: abilityName];
//    }
    
//    return [self initWithImage];
}

@end
