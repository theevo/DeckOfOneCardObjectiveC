//
//  TTVTopLevelObject.h
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TTVCard;

@interface TTVTopLevelObject : NSObject

@property (nonatomic, copy, readonly) NSArray<TTVCard *> *cards;

@end


@interface TTVTopLevelObject (JSONConvertable)

- (instancetype)initWithDictionary:(NSDictionary <NSString *, id>*)dictionary;

@end

NS_ASSUME_NONNULL_END
