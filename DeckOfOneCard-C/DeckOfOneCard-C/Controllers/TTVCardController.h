//
//  TTVCardController.h
//  DeckOfOneCard-C
//
//  Created by theevo on 3/24/20.
//  Copyright © 2020 Theo Vora. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TTVCard;

@interface TTVCardController : NSObject



+ (void) fetchNewCard: (void(^)(NSArray <TTVCard *> *)) completion;

@end

NS_ASSUME_NONNULL_END
