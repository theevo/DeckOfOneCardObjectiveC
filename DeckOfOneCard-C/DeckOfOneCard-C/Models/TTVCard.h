//
//  TTVCard.h
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TTVCard : NSObject

@property (nonatomic, copy, readonly) NSURL *image;
@property (nonatomic, copy, readonly) NSString *value;
@property (nonatomic, copy, readonly) NSString *suit;

- (instancetype) initWithImage:(NSURL *)image ofValue:(NSString *)value andSuit:(NSString *)suit NS_DESIGNATED_INITIALIZER;

@end



NS_ASSUME_NONNULL_END
