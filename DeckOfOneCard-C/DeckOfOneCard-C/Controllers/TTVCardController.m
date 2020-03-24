//
//  TTVCardController.m
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import "TTVCardController.h"
#import "TTVCard.h"

static NSString * const baseURLString = @"https://deckofcardsapi.com/api/deck/";
static NSString * const drawCardEndpoint = @"new/draw/";


@implementation TTVCardController


+ (void)fetchNewCard:(void (^)(NSArray<TTVCard *> * _Nullable))completion {
    
    NSURL *baseURL = [NSURL URLWithString:baseURLString];
    
    NSURL *finalURL = [baseURL URLByAppendingPathComponent:drawCardEndpoint];
    
    NSLog(@"%@", finalURL);
    
    [[[NSURLSession sharedSession] dataTaskWithURL:finalURL completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        
        if (error)
        {
            NSLog(@"Error fetching card: %@", error);
            completion(nil);
            return;
        }
        
        if (!data)
        {
            NSLog(@"Error fetching card data: %@", error);
            completion(nil);
            return;
        }
        
        NSDictionary *jsonDictionary = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error: &error];
        
        if (!jsonDictionary || ![jsonDictionary isKindOfClass:[NSDictionary class]])
        {
            NSLog(@"Error fetching JSON Dictionary: %@", error);
            completion(nil);
            return;
        }
        
        NSArray *cards = [[TTVCard alloc] initWithDictionary:jsonDictionary];
        completion(cards);
    }] resume];
}

@end
