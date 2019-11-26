//
//  DVMCardController.h
//  DeckOfCardsObjectiveC
//
//  Created by Marcus Armstrong on 11/15/19.
//  Copyright © 2019 Marcus Armstrong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class DVMCard;

NS_ASSUME_NONNULL_BEGIN

@interface DVMCardController : NSObject

/**
 @brief API request to fetch DVMCard object
 
 @discussion
 1. "+" Method type (+ = Class Method, - = Instance Method)
 
 2. "void" Return type
 
 3. "drawNewCard:" Name of method / External name for first parameter
 
 4. "(NSInteger)"  First parameter type
 
 5. "numberOfCards" Internal name for first parameter
 
 6. "completion:" External name for completion block
 
 7. "void" Return type for completion block
 
 8. "(^)" Block declaration
 
 9. "NSArray<DVMCard *> *_Nullable" Type declaration for completion
 
 10. "cards" Internal name for completion object
 
 11. "completion" Internal name for completion block
 
 12: ";" GD Semicolon

 @param numberOfCards The number of cards to be requested from the API
 
 @param completion Completes with an optional array of DVMCard objects
 
 */
+ (void)drawNewCard:(NSNumber *)numberOfCards completion:(void(^) (NSArray<DVMCard *> *_Nullable cards))completion;

/**
 @brief Method for fetching image data for a passed in DVMCard object, completes with a UIImage
 
 @param card DVM card object containing the image URL string
 @param completion Completes with an optional UIImage
 */
+ (void)fetchCardImage:(DVMCard *)card completion:(void(^) (UIImage *_Nullable image))completion;

@end

NS_ASSUME_NONNULL_END
